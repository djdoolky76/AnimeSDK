#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFACHPPOANI.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }

#define LLDMBKHPHFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFACB60)
#define LLDMBKHPHFG_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0x1AFACD80)
#define LLDMBKHPHFG_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0x1AFACC10)
#define LLDMBKHPHFG__ONEXITBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x1AFACDD0)

inline static constexpr unsigned int LLDMBKHPHFG_TypeDefinitionIndex = 68014;

	class LLDMBKHPHFG : public ::HFACHPPOANI
	{
	public:
		::RPG::Client::UIController* IBLBKLNHKLL; // 0x10
		::RPG::Client::UIController* HKJLKMCDMGB; // 0x18
		::RPG::Client::LuaUIController* BBELBMLHHBG; // 0x20
		::RPG::Client::Promises::Promise* DBIFFNIBBDL; // 0x28
		::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + LLDMBKHPHFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExitBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLDMBKHPHFG_ONEXITBEGIN_OFFSET))(this);
		}

		::System::Void OnEnterBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLDMBKHPHFG_ONENTERBEGIN_OFFSET))(this);
		}

		::System::Void _OnExitBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLDMBKHPHFG__ONEXITBEGIN_B__1_0_OFFSET))(this);
		}

	};
