#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetCharacterAnimFollow; }
namespace RPG::GameCore { class TaskContext; }

#define GGBIAAPMJMP_CTOR_OFFSET UNITYSDK_OFFSET(0x159F6390)
#define GGBIAAPMJMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159F63A0)
#define GGBIAAPMJMP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159F63E0)
#define GGBIAAPMJMP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159F6720)
#define GGBIAAPMJMP_TICK_OFFSET UNITYSDK_OFFSET(0x159F6770)

inline static constexpr unsigned int GGBIAAPMJMP_TypeDefinitionIndex = 55367;

	class GGBIAAPMJMP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetCharacterAnimFollow* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
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
