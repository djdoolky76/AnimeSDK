#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class LoadSpriteToSmoothMaskData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xE33FE30)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION_DADLNKBKHHE_OFFSET UNITYSDK_OFFSET(0xE33FDB0)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xE33F820)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xE33FA80)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int LoadSpriteToSmoothMaskAction_TypeDefinitionIndex = 74049;

	class LoadSpriteToSmoothMaskAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::LoadSpriteToSmoothMaskData*>* LoadSpriteToSmoothMaskDatas; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION_DAMDMJJKLON_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION_MGFLFCHMGPA_OFFSET))(this);
		}

		static ::System::Void DADLNKBKHHE(::UnityEngine::UI::SmoothMask* a1, ::UnityEngine::Sprite* a2)
		{
			return ((::System::Void(*)(::UnityEngine::UI::SmoothMask*, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION_DADLNKBKHHE_OFFSET))(a1, a2);
		}

	};
}
