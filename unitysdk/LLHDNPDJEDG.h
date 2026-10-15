#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JGNBJBFKLIE;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define LLHDNPDJEDG_CTOR_OFFSET UNITYSDK_OFFSET(0xB765C90)
#define LLHDNPDJEDG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB765D60)
#define LLHDNPDJEDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB765DA0)
#define LLHDNPDJEDG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB765D10)
#define LLHDNPDJEDG_TICK_OFFSET UNITYSDK_OFFSET(0xB765CB0)

inline static constexpr unsigned int LLHDNPDJEDG_TypeDefinitionIndex = 58487;

	class LLHDNPDJEDG : public ::GELIALJDFBL
	{
	public:
		::System::String* MNLKJLDIEIA; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::JGNBJBFKLIE* JKJPFJALGKO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JGNBJBFKLIE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JGNBJBFKLIE*))((::PBYTE)hIl2Cpp + LLHDNPDJEDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLHDNPDJEDG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHDNPDJEDG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHDNPDJEDG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHDNPDJEDG_ONTASKBEGIN_OFFSET))(this);
		}

	};
