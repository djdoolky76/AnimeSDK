#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFEOGNAMHCG;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client::Promises { class IPromise; }

#define FIHMMMCPAOI___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1579C910)
#define FIHMMMCPAOI___C__DISPLAYCLASS4_0___PLAYFORMULASTORY_B__0_OFFSET UNITYSDK_OFFSET(0x1579CF90)

inline static constexpr unsigned int FIHMMMCPAOI___c__DisplayClass4_0_TypeDefinitionIndex = 67640;

	class FIHMMMCPAOI___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueFormulaData* data; // 0x10
		::HFEOGNAMHCG* info; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __PlayFormulaStory_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI___C__DISPLAYCLASS4_0___PLAYFORMULASTORY_B__0_OFFSET))(this);
		}

	};
