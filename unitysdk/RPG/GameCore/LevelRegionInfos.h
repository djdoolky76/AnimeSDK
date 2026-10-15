#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelRegionInfo; }
namespace RPG::GameCore { class LevelRegionInfos; }

#define RPG_GAMECORE_LEVELREGIONINFOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79E380)
#define RPG_GAMECORE_LEVELREGIONINFOS_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D79E2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionInfos_TypeDefinitionIndex = 17392;

	class LevelRegionInfos : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelRegionInfo*>* RegionList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONINFOS_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelRegionInfos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelRegionInfos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONINFOS_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
