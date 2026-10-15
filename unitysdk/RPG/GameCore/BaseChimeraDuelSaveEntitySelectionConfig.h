#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelSaveEntitySelectionConfig; }

#define RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40F150)
#define RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D40F0F0)
#define RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D40EF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChimeraDuelSaveEntitySelectionConfig_TypeDefinitionIndex = 15899;

	class BaseChimeraDuelSaveEntitySelectionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
