#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterMaterialPropertyTemplateConfig; }

#define RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D572A40)
#define RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D572A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterMaterialPropertyTemplateConfig_TypeDefinitionIndex = 17445;

	class CharacterMaterialPropertyTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterMaterialPropertyTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterMaterialPropertyTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
