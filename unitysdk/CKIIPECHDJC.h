#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class EJDPLLIJDNK;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CKIIPECHDJC_CTOR_OFFSET UNITYSDK_OFFSET(0xD757C20)
#define CKIIPECHDJC_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xD757A80)

inline static constexpr unsigned int CKIIPECHDJC_TypeDefinitionIndex = 76275;

	class CKIIPECHDJC : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::EJDPLLIJDNK* PLMIJPHEBMG; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::EJDPLLIJDNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::EJDPLLIJDNK*))((::PBYTE)hIl2Cpp + CKIIPECHDJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIIPECHDJC_ONEXECUTE_OFFSET))(this);
		}

	};
