#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }

#define FIHMMMCPAOI___C__DISPLAYCLASS4_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1579D180)
#define FIHMMMCPAOI___C__DISPLAYCLASS4_1___PLAYFORMULASTORY_B__1_OFFSET UNITYSDK_OFFSET(0x1579D190)
#define FIHMMMCPAOI___C__DISPLAYCLASS4_1___PLAYFORMULASTORY_B__2_OFFSET UNITYSDK_OFFSET(0x1579D210)

inline static constexpr unsigned int FIHMMMCPAOI___c__DisplayClass4_1_TypeDefinitionIndex = 67641;

	template <typename T>
	class FIHMMMCPAOI___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::RPG::Client::Promises::Promise* promise; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI___C__DISPLAYCLASS4_1_CTOR_OFFSET))(this);
		}

		::System::Void __PlayFormulaStory_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI___C__DISPLAYCLASS4_1___PLAYFORMULASTORY_B__1_OFFSET))(this);
		}

		::System::Void __PlayFormulaStory_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI___C__DISPLAYCLASS4_1___PLAYFORMULASTORY_B__2_OFFSET))(this);
		}

	};
