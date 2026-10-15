#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ViewModeSwitchType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByViewModeSwitchEmptyServant; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D515740)
#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D515900)
#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5158D0)
#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D515750)
#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D515710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByViewModeSwitchEmptyServant_TypeDefinitionIndex = 22920;

	class ByViewModeSwitchEmptyServant : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ViewModeSwitchType SwitchType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
