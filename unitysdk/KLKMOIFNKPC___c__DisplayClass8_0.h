#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleGamePhaseInitParams; }
namespace RPG::Client::Promises { class Promise; }

#define KLKMOIFNKPC___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB526BF0)
#define KLKMOIFNKPC___C__DISPLAYCLASS8_0___ENTERBATTLEWITHMAZEINFONEXTFRAME_B__0_OFFSET UNITYSDK_OFFSET(0xB526C00)
#define KLKMOIFNKPC___C__DISPLAYCLASS8_0___ENTERBATTLEWITHMAZEINFONEXTFRAME_B__1_OFFSET UNITYSDK_OFFSET(0xB526C20)

inline static constexpr unsigned int KLKMOIFNKPC___c__DisplayClass8_0_TypeDefinitionIndex = 61201;

	class KLKMOIFNKPC___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* preloadPromise; // 0x10
		::RPG::Client::BattleGamePhaseInitParams* param; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKMOIFNKPC___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void __EnterBattleWithMazeInfoNextFrame_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKMOIFNKPC___C__DISPLAYCLASS8_0___ENTERBATTLEWITHMAZEINFONEXTFRAME_B__0_OFFSET))(this);
		}

		::System::Void __EnterBattleWithMazeInfoNextFrame_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKMOIFNKPC___C__DISPLAYCLASS8_0___ENTERBATTLEWITHMAZEINFONEXTFRAME_B__1_OFFSET))(this);
		}

	};
