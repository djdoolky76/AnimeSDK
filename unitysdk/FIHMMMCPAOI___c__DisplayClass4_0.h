#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFEOGNAMHCG;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client::Promises { class IPromise; }

#define FIHMMMCPAOI___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x157A8570)
#define FIHMMMCPAOI___C__DISPLAYCLASS4_0___PLAYFORMULASTORY_B__0_OFFSET UNITYSDK_OFFSET(0x157A8BF0)

	class FIHMMMCPAOI___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::HFEOGNAMHCG* info; // 0x10
		::RPG::Client::RogueFormulaData* data; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __PlayFormulaStory_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI___C__DISPLAYCLASS4_0___PLAYFORMULASTORY_B__0_OFFSET))(this);
		}

	};
