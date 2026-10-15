#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	enum class HEU_AssetDatabase_HEU_ImportAssetOptions : ::System::Int32
	{
		Default = 0,
		ForceUpdate = 1,
		ForceSynchronousImport = 8,
		ImportRecursive = 256,
		DontDownloadFromCacheServer = 8192,
		ForceUncompressedImport = 16384,
	};
}
