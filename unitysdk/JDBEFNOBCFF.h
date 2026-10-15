#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class FIMPGJNMOJK;
namespace RPG::GameCore { class TaskContext; }

#define JDBEFNOBCFF_CTOR_OFFSET UNITYSDK_OFFSET(0x165BECE0)
#define JDBEFNOBCFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165BEFA0)
#define JDBEFNOBCFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165BED40)
#define JDBEFNOBCFF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x165BECF0)
#define JDBEFNOBCFF_TICK_OFFSET UNITYSDK_OFFSET(0x165BEF40)
#define JDBEFNOBCFF__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0x165BF0A0)

inline static constexpr unsigned int JDBEFNOBCFF_TypeDefinitionIndex = 52314;

	class JDBEFNOBCFF : public ::GELIALJDFBL
	{
	public:
		::FIMPGJNMOJK* IGHAHBNLIJA; // 0x18
		::System::Boolean PPIGLCIEIIM; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FIMPGJNMOJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FIMPGJNMOJK*))((::PBYTE)hIl2Cpp + JDBEFNOBCFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBEFNOBCFF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBEFNOBCFF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDBEFNOBCFF_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBEFNOBCFF_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__4_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JDBEFNOBCFF__ONTASKBEGIN_B__4_0_OFFSET))(this, a1);
		}

	};
