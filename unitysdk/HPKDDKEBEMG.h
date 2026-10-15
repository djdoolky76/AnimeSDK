#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKFPICOFNDF.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }

#define HPKDDKEBEMG_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD1490)

	class HPKDDKEBEMG : public ::LKFPICOFNDF
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleEffect*>* OFCKNBEAIDL; // 0x40
		::CIIKBJFOKHL* IBJCDJJLDLA; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKDDKEBEMG_CTOR_OFFSET))(this);
		}

	};
