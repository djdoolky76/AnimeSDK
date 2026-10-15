#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHIJMGKPIMF;
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE34A910)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION___C__DISPLAYCLASS1_0__ONSTART_B__0_OFFSET UNITYSDK_OFFSET(0xE34A9E0)

namespace RPG::Client::UI::UIStateCtrl
{
	class LoadSpriteToSmoothMaskAction___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::SmoothMask* smoothMask; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnStart_b__0(::AHIJMGKPIMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHIJMGKPIMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION___C__DISPLAYCLASS1_0__ONSTART_B__0_OFFSET))(this, a1);
		}

	};
}
