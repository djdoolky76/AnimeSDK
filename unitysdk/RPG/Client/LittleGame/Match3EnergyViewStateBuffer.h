#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFEABBJBIGK;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER_CTOR_OFFSET UNITYSDK_OFFSET(0xD46E700)
#define RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER_EXECUTESEQUENCE_OFFSET UNITYSDK_OFFSET(0xD46E600)
#define RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER__ONSEQUENCEFINISH_OFFSET UNITYSDK_OFFSET(0xD46E6B0)

namespace RPG::Client::LittleGame
{
	class Match3EnergyViewStateBuffer : public ::System::Object
	{
	public:
		::IFEABBJBIGK* CommandSequence; // 0x10
		::System::Action* OnFinishIncrease; // 0x18
		::IFEABBJBIGK* IncreaseCommand; // 0x20
		::System::Func_2<::System::UInt32, ::IFEABBJBIGK*>* GenIncreaseCommand; // 0x28
		::System::Boolean WaitIncrease; // 0x30
		::System::Boolean CanDecrease; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER_CTOR_OFFSET))(this);
		}

		::System::Void ExecuteSequence(::IFEABBJBIGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER_EXECUTESEQUENCE_OFFSET))(this, a1);
		}

		::System::Void _OnSequenceFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER__ONSEQUENCEFINISH_OFFSET))(this, a1);
		}

	};
}
