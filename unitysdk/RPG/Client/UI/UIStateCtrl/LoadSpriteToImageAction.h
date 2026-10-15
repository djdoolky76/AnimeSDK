#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class LoadSpritToImageData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xE34A350)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xE349EF0)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xE34A130)

namespace RPG::Client::UI::UIStateCtrl
{
	class LoadSpriteToImageAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::LoadSpritToImageData*>* LoadSpriteToImageDatas; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_DAMDMJJKLON_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_MGFLFCHMGPA_OFFSET))(this);
		}

	};
}
