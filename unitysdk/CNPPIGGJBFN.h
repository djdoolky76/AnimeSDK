#pragma once
#include "unitysdk/unitysdk.h"
class IJKJKBNNMBO;
namespace RPG::GameCore { class TaskContext; }

#define CNPPIGGJBFN_CTOR_OFFSET UNITYSDK_OFFSET(0xE5F6470)
#define CNPPIGGJBFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5F64A0)
#define CNPPIGGJBFN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE5F64E0)
#define CNPPIGGJBFN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE5F65C0)
#define CNPPIGGJBFN_TICK_OFFSET UNITYSDK_OFFSET(0xE5F6610)

inline static constexpr unsigned int CNPPIGGJBFN_TypeDefinitionIndex = 54006;

	class CNPPIGGJBFN
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::IJKJKBNNMBO* OFKGLJOAMLD; // 0x30
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
