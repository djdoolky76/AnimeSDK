#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OfflineCullingIndex; }
namespace RPG::GameCore { class OfflineCullingLod; }

#define RPG_GAMECORE_OFFLINECULLINGLOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B2BB0)
#define RPG_GAMECORE_OFFLINECULLINGLOD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B2A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OfflineCullingLod_TypeDefinitionIndex = 19129;

	class OfflineCullingLod : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OfflineCullingIndex*>* PreloadDataIndexList; // 0x10
		::System::Single CellSize; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGLOD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OfflineCullingLod* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OfflineCullingLod*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGLOD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
