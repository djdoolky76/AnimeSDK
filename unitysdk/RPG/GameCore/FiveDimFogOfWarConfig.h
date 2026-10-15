#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimFogOfWarConfig; }
namespace RPG::GameCore { class FiveDimSectionConfig; }
namespace RPG::GameCore { class FiveDimSingleFogOfWarConfig; }

#define RPG_GAMECORE_FIVEDIMFOGOFWARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BFBC0)
#define RPG_GAMECORE_FIVEDIMFOGOFWARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BFA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFogOfWarConfig_TypeDefinitionIndex = 18525;

	class FiveDimFogOfWarConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::MVector2>* SectionVertices; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimSectionConfig*>* Sections; // 0x18
		::Il2CppArray<::RPG::GameCore::FiveDimSingleFogOfWarConfig*>* FogOfWars; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFOGOFWARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimFogOfWarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimFogOfWarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFOGOFWARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
