#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFACHPPOANI.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }

#define KMIEIOCJBKE_CTOR_OFFSET UNITYSDK_OFFSET(0xB558DF0)
#define KMIEIOCJBKE_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0xB559010)
#define KMIEIOCJBKE_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0xB558EA0)
#define KMIEIOCJBKE__ONEXITBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB559060)

	class KMIEIOCJBKE : public ::HFACHPPOANI
	{
	public:
		::RPG::Client::UIController* IBLBKLNHKLL; // 0x10
		::RPG::Client::UIController* HKJLKMCDMGB; // 0x18
		::RPG::Client::LuaUIController* BBELBMLHHBG; // 0x20
		::RPG::Client::Promises::Promise* DBIFFNIBBDL; // 0x28
		::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + KMIEIOCJBKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExitBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIEIOCJBKE_ONEXITBEGIN_OFFSET))(this);
		}

		::System::Void OnEnterBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIEIOCJBKE_ONENTERBEGIN_OFFSET))(this);
		}

		::System::Void _OnExitBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIEIOCJBKE__ONEXITBEGIN_B__1_0_OFFSET))(this);
		}

	};
