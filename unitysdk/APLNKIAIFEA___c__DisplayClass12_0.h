#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APLNKIAIFEA_MOODJBCCCPC.h"
#include "unitysdk/System/Object.h"
class APLNKIAIFEA;
namespace RPG::Client::Promises { class Promise; }

#define APLNKIAIFEA___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15BB39D0)
#define APLNKIAIFEA___C__DISPLAYCLASS12_0___SHOWNEWPARTHINTDIALOGASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x15BB4450)

inline static constexpr unsigned int APLNKIAIFEA___c__DisplayClass12_0_TypeDefinitionIndex = 81809;

	class APLNKIAIFEA___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::APLNKIAIFEA* __4__this; // 0x18
		::APLNKIAIFEA_MOODJBCCCPC syncResult; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNKIAIFEA___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Void __ShowNewPartHintDialogAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNKIAIFEA___C__DISPLAYCLASS12_0___SHOWNEWPARTHINTDIALOGASYNC_B__0_OFFSET))(this);
		}

	};
