#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetContainerRatioInRect; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5389F0)
#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D538CC0)
#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D538C50)
#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D538A30)
#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D538980)

namespace RPG::GameCore
{
	class ByTargetContainerRatioInRect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* BindPhotographName; // 0x20
		::System::String* ContainerFlagName; // 0x28
		::RPG::GameCore::PhotoGraphTargetSize* Size; // 0x30
		::System::Single Ratio; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetContainerRatioInRect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetContainerRatioInRect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetContainerRatioInRect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetContainerRatioInRect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetContainerRatioInRect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetContainerRatioInRect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetContainerRatioInRect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetContainerRatioInRect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
