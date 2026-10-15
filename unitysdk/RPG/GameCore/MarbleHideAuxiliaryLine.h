#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleHideAuxiliaryLine; }

#define RPG_GAMECORE_MARBLEHIDEAUXILIARYLINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83F2B0)
#define RPG_GAMECORE_MARBLEHIDEAUXILIARYLINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D83F2C0)
#define RPG_GAMECORE_MARBLEHIDEAUXILIARYLINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83F220)

namespace RPG::GameCore
{
	class MarbleHideAuxiliaryLine : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEHIDEAUXILIARYLINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleHideAuxiliaryLine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleHideAuxiliaryLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEHIDEAUXILIARYLINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleHideAuxiliaryLine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleHideAuxiliaryLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEHIDEAUXILIARYLINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
