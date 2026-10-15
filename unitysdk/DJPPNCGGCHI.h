#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class JLPEICPFLMC;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define DJPPNCGGCHI_CTOR_OFFSET UNITYSDK_OFFSET(0xF24DE70)
#define DJPPNCGGCHI_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xF24DCC0)

inline static constexpr unsigned int DJPPNCGGCHI_TypeDefinitionIndex = 76258;

	class DJPPNCGGCHI : public ::MLKDDLHNNHH
	{
	public:
		::JLPEICPFLMC* BPKKKMOCFIP; // 0x20
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28
		::System::UInt32 JCNBMHFOLAA; // 0x30
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::System::UInt32 a2, ::JLPEICPFLMC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::System::UInt32, ::JLPEICPFLMC*))((::PBYTE)hIl2Cpp + DJPPNCGGCHI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPPNCGGCHI_ONEXECUTE_OFFSET))(this);
		}

	};
