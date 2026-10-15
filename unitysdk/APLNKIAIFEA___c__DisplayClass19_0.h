#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }

#define APLNKIAIFEA___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15BB4220)
#define APLNKIAIFEA___C__DISPLAYCLASS19_0___SHOWNEWDEVELOPTARGETDIALOGASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x15BB44F0)

	class APLNKIAIFEA___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNKIAIFEA___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Void __ShowNewDevelopTargetDialogAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNKIAIFEA___C__DISPLAYCLASS19_0___SHOWNEWDEVELOPTARGETDIALOGASYNC_B__0_OFFSET))(this);
		}

	};
