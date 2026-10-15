#pragma once
#include "unitysdk/unitysdk.h"
class IJKJKBNNMBO;
namespace RPG::GameCore { class TaskContext; }

#define CNPPIGGJBFN_CTOR_OFFSET UNITYSDK_OFFSET(0xDA5D380)
#define CNPPIGGJBFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA5D3B0)
#define CNPPIGGJBFN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA5D3F0)
#define CNPPIGGJBFN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDA5D4D0)
#define CNPPIGGJBFN_TICK_OFFSET UNITYSDK_OFFSET(0xDA5D520)

	class CNPPIGGJBFN
	{
	public:
		::IJKJKBNNMBO* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IJKJKBNNMBO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IJKJKBNNMBO*))((::PBYTE)hIl2Cpp + CNPPIGGJBFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPPIGGJBFN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPPIGGJBFN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPPIGGJBFN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNPPIGGJBFN_TICK_OFFSET))(this, a1);
		}

	};
