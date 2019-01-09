#pragma once

#include <cstdint>

#include <string>
#include <map>
#include <vector>
#include <set>
#include <memory>

#include <boost/filesystem.hpp>

#include "IF00DKeyEncryptor.h"
#include "ICryptoOperations.h"

#include "Utils.h"

struct sce_ng_pfs_header_t;
class sce_idb_base_t;
struct sce_ng_pfs_file_t;
struct sce_ng_pfs_dir_t;

int decrypt_files(std::shared_ptr<ICryptoOperations> cryptops, std::shared_ptr<IF00DKeyEncryptor> iF00D, boost::filesystem::path titleIdPath, boost::filesystem::path destTitleIdPath, const unsigned char* klicensee, const sce_ng_pfs_header_t& ngpfs, const std::vector<sce_ng_pfs_file_t>& files, const std::vector<sce_ng_pfs_dir_t>& dirs, const std::unique_ptr<sce_idb_base_t>& fdb, const std::map<std::uint32_t, sce_junction>& pageMap, const std::set<sce_junction>& emptyFiles);