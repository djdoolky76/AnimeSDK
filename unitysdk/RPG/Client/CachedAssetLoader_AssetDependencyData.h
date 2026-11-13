#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CACHEDASSETLOADER_ASSETDEPENDENCYDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BD6DAD0)
#define RPG_CLIENT_CACHEDASSETLOADER_ASSETDEPENDENCYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD6DB30)

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader_AssetDependencyData_TypeDefinitionIndex = 60712;

	class CachedAssetLoader_AssetDependencyData : public ::System::Object
	{
	public:
		::RPG::Client::CachedAssetLogicType OwnerLogicType; // 0x10
		::System::Int32 OwnerCount; // 0x14
		::System::Int32 MemorySize; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 AssetNameHash; // 0x20
		::System::Int32 RefCount; // 0x28
		::RPG::Client::CachedAssetLogicType LogicType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASSETDEPENDENCYDATA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASSETDEPENDENCYDATA_CLEAR_OFFSET))(this);
		}

	};
}
