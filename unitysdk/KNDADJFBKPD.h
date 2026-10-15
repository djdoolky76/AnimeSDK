#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class AddBuffPerform; }
namespace RPG::GameCore { class TaskContext; }

#define KNDADJFBKPD_CTOR_OFFSET UNITYSDK_OFFSET(0xB578840)
#define KNDADJFBKPD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5788F0)
#define KNDADJFBKPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5789C0)
#define KNDADJFBKPD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB578C40)
#define KNDADJFBKPD_TICK_OFFSET UNITYSDK_OFFSET(0xB578C90)
#define KNDADJFBKPD__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xB578CF0)
#define KNDADJFBKPD__ONTASKBEGIN_B__2_1_OFFSET UNITYSDK_OFFSET(0xB578D20)

inline static constexpr unsigned int KNDADJFBKPD_TypeDefinitionIndex = 54809;

	class KNDADJFBKPD : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* CLAJOLGOPFF; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::AddBuffPerform* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::FixPoint KENKBDBDKOC; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddBuffPerform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddBuffPerform*))((::PBYTE)hIl2Cpp + KNDADJFBKPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDADJFBKPD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDADJFBKPD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDADJFBKPD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNDADJFBKPD_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDADJFBKPD__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDADJFBKPD__ONTASKBEGIN_B__2_1_OFFSET))(this);
		}

	};
