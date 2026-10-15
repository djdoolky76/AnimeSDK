#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class FJJPDJAEJHC;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define KFCPGNDPPFO_CTOR_OFFSET UNITYSDK_OFFSET(0xB391190)
#define KFCPGNDPPFO_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB391050)

inline static constexpr unsigned int KFCPGNDPPFO_TypeDefinitionIndex = 76267;

	class KFCPGNDPPFO : public ::MLKDDLHNNHH
	{
	public:
		::FJJPDJAEJHC* KKGBBHHMOMF; // 0x20
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::FJJPDJAEJHC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::FJJPDJAEJHC*))((::PBYTE)hIl2Cpp + KFCPGNDPPFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCPGNDPPFO_ONEXECUTE_OFFSET))(this);
		}

	};
