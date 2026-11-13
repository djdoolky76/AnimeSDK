#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetCharacterAnimFollow; }
namespace RPG::GameCore { class TaskContext; }

#define GGBIAAPMJMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B49F870)
#define GGBIAAPMJMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B49F880)
#define GGBIAAPMJMP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B49F8C0)
#define GGBIAAPMJMP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B49FC00)
#define GGBIAAPMJMP_TICK_OFFSET UNITYSDK_OFFSET(0x1B49FC50)

inline static constexpr unsigned int GGBIAAPMJMP_TypeDefinitionIndex = 56550;

	class GGBIAAPMJMP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetCharacterAnimFollow* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterAnimFollow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterAnimFollow*))((::PBYTE)hIl2Cpp + GGBIAAPMJMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBIAAPMJMP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBIAAPMJMP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBIAAPMJMP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GGBIAAPMJMP_TICK_OFFSET))(this, a1);
		}

	};
