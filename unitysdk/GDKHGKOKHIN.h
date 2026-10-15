#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffectOnlyForLoading; }

#define GDKHGKOKHIN_CTOR_OFFSET UNITYSDK_OFFSET(0x159A1980)
#define GDKHGKOKHIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159A1990)
#define GDKHGKOKHIN_LBMACDLKEDF_OFFSET UNITYSDK_OFFSET(0x159A1D40)
#define GDKHGKOKHIN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159A19D0)
#define GDKHGKOKHIN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159A1C90)
#define GDKHGKOKHIN_TICK_OFFSET UNITYSDK_OFFSET(0x159A1CE0)

	class GDKHGKOKHIN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerEffectOnlyForLoading* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::Client::MonoEffectManager* KMLMEHCDDMA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEffectOnlyForLoading* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEffectOnlyForLoading*))((::PBYTE)hIl2Cpp + GDKHGKOKHIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKHGKOKHIN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKHGKOKHIN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKHGKOKHIN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDKHGKOKHIN_TICK_OFFSET))(this, a1);
		}

		::System::Void LBMACDLKEDF(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + GDKHGKOKHIN_LBMACDLKEDF_OFFSET))(this, a1, a2);
		}

	};
