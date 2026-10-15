#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceSectionConfig; }

#define RPG_GAMECORE_CAKERACESECTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D552D90)
#define RPG_GAMECORE_CAKERACESECTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D552CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceSectionConfig_TypeDefinitionIndex = 18406;

	class CakeRaceSectionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* RegionIDList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESECTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceSectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceSectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESECTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
