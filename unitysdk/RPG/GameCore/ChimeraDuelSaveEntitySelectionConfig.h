#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelSaveEntitySelectionConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelSaveEntitySelectionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELSAVEENTITYSELECTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A9A20)
#define RPG_GAMECORE_CHIMERADUELSAVEENTITYSELECTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A9A30)
#define RPG_GAMECORE_CHIMERADUELSAVEENTITYSELECTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A99D0)

namespace RPG::GameCore
{
	class ChimeraDuelSaveEntitySelectionConfig : public ::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig
	{
	public:
		::System::String* SaveName; // 0x10
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Selector; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSAVEENTITYSELECTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSaveEntitySelectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSaveEntitySelectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSAVEENTITYSELECTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSaveEntitySelectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSaveEntitySelectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSAVEENTITYSELECTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
