#pragma once
#include "unitysdk/unitysdk.h"
class MJHAGGNNBIK;
namespace RPG::GameCore { class TaskContext; }

#define MBAENDDIPDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB8575F0)
#define MBAENDDIPDJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB857620)
#define MBAENDDIPDJ_TICK_OFFSET UNITYSDK_OFFSET(0xB8578E0)
#define MBAENDDIPDJ__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB857940)

inline static constexpr unsigned int MBAENDDIPDJ_TypeDefinitionIndex = 55104;

	class MBAENDDIPDJ
	{
	public:
		::System::Boolean DDLPKMOBHAO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MJHAGGNNBIK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MJHAGGNNBIK*))((::PBYTE)hIl2Cpp + MBAENDDIPDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAENDDIPDJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MBAENDDIPDJ_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAENDDIPDJ__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

	};
