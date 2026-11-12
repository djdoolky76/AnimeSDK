#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }

#define FIHMMMCPAOI___C__DISPLAYCLASS3_1_CTOR_OFFSET UNITYSDK_OFFSET(0x166CA640)
#define FIHMMMCPAOI___C__DISPLAYCLASS3_1___SHOWROGUETOURNFORMULASTORYTOASTPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x166CA650)

inline static constexpr unsigned int FIHMMMCPAOI___c__DisplayClass3_1_TypeDefinitionIndex = 69583;

	template <typename T>
	class FIHMMMCPAOI___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI___C__DISPLAYCLASS3_1_CTOR_OFFSET))(this);
		}

		::System::Void __ShowRogueTournFormulaStoryToastPage_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI___C__DISPLAYCLASS3_1___SHOWROGUETOURNFORMULASTORYTOASTPAGE_B__1_OFFSET))(this);
		}

	};
