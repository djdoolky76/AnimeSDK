#pragma once
#include "unitysdk/unitysdk.h"

namespace BF16296F3E0D1B49
{
	inline static constexpr unsigned int B82A4AB16C33E978_TypeDefinitionIndex = 8316;

	enum class B82A4AB16C33E978 : ::System::Int32
	{
		None = 0,
		DownloadBlockConfigMetaFileError = 10010,
		ParseBlockConfigMetaFileException = 10011,
		DownloadPatchConfigError = 10012,
		ParsePatchConfigException = 10013,
		VerifyBlocksError = 10014,
		VerifyBlocksException = 10015,
		MergeBlockPatchException = 10016,
		WriteBlockConfigException = 10017,
		ParallelDownloaderDownloadFileError = 10020,
		ParallelDownloaderGetFileSizeError = 10021,
		ParallelDownloaderFileSizeError = 10022,
		ParallelDownloaderGetUnzipSizeError = 10023,
		ParallelDownloaderUnzipError = 10024,
		ParallelDownloaderVerifyError = 10025,
		DownloadConfigManifestFileError = 10030,
		ParseConfigManifestFileException = 10031,
		DownloadIFixManifestFileError = 10040,
		ParseIFixManifestFileException = 10041,
		DownloadAudioManifestFileError = 10050,
		ParseDownloadAudioManifestFileException = 10051,
		DownloadVideoManifestFileError = 10100,
		ParseDownloadVideoManifestFileException = 10101,
	};
}
