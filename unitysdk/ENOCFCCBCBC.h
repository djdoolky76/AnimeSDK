#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ADADGGGFBKP;
namespace RPG::GameCore { class TaskContext; }

#define ENOCFCCBCBC_CTOR_OFFSET UNITYSDK_OFFSET(0x155A97C0)
#define ENOCFCCBCBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155A99A0)
#define ENOCFCCBCBC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155A97D0)
#define ENOCFCCBCBC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155A9950)
#define ENOCFCCBCBC_TICK_OFFSET UNITYSDK_OFFSET(0x155A99E0)
#define ENOCFCCBCBC__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x155A9A40)

inline static constexpr unsigned int ENOCFCCBCBC_TypeDefinitionIndex = 47100;

	class ENOCFCCBCBC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::ADADGGGFBKP* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ADADGGGFBKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ADADGGGFBKP*))((::PBYTE)hIl2Cpp + ENOCFCCBCBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOCFCCBCBC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOCFCCBCBC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOCFCCBCBC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENOCFCCBCBC_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOCFCCBCBC__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

	};
