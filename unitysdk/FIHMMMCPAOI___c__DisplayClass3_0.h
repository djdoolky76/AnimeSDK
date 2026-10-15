#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client::Promises { class IPromise; }

#define FIHMMMCPAOI___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x157A8560)
#define FIHMMMCPAOI___C__DISPLAYCLASS3_0___SHOWROGUETOURNFORMULASTORYTOASTPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x157A8A20)

	class FIHMMMCPAOI___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueFormulaData* data; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __ShowRogueTournFormulaStoryToastPage_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI___C__DISPLAYCLASS3_0___SHOWROGUETOURNFORMULASTORYTOASTPAGE_B__0_OFFSET))(this);
		}

	};
