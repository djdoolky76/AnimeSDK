#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetBattleBGMState; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define EOKNAJMNDON_CTOR_OFFSET UNITYSDK_OFFSET(0x155C43B0)
#define EOKNAJMNDON_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155C43C0)
#define EOKNAJMNDON_FHDEGKLDLHK_OFFSET UNITYSDK_OFFSET(0x155C4690)
#define EOKNAJMNDON_KAGLBDKAKKI_OFFSET UNITYSDK_OFFSET(0x155C4830)
#define EOKNAJMNDON_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155C4400)
#define EOKNAJMNDON_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155C4890)
#define EOKNAJMNDON_TICK_OFFSET UNITYSDK_OFFSET(0x155C4910)

	class EOKNAJMNDON : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetBattleBGMState* OFKGLJOAMLD; // 0x18
		::UnityEngine::Coroutine* OLPEBHPIFKH; // 0x20
		::System::String* NEOGKILELNP; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleBGMState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleBGMState*))((::PBYTE)hIl2Cpp + EOKNAJMNDON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKNAJMNDON_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKNAJMNDON_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKNAJMNDON_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EOKNAJMNDON_TICK_OFFSET))(this, a1);
		}

		::System::Void KAGLBDKAKKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKNAJMNDON_KAGLBDKAKKI_OFFSET))(this);
		}

		::System::Void FHDEGKLDLHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKNAJMNDON_FHDEGKLDLHK_OFFSET))(this);
		}

	};
