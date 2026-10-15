#pragma once
#include "unitysdk/unitysdk.h"
class ELFFAEOGFJK;
namespace RPG::GameCore { class TaskContext; }

#define HKLLIFFMOGM_CTOR_OFFSET UNITYSDK_OFFSET(0x15D4B530)
#define HKLLIFFMOGM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D4B560)
#define HKLLIFFMOGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D4B5A0)
#define HKLLIFFMOGM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D4B850)
#define HKLLIFFMOGM_TICK_OFFSET UNITYSDK_OFFSET(0x15D4B8A0)

	class HKLLIFFMOGM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ELFFAEOGFJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ELFFAEOGFJK*))((::PBYTE)hIl2Cpp + HKLLIFFMOGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLLIFFMOGM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLLIFFMOGM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLLIFFMOGM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HKLLIFFMOGM_TICK_OFFSET))(this, a1);
		}

	};
