#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLJONECIMDL;

#define PJDHMMEEBBC___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC27FFC0)
#define PJDHMMEEBBC___C__DISPLAYCLASS16_0__BUILDCHALLENGEMATCHPAGEVM_B__0_OFFSET UNITYSDK_OFFSET(0xC283540)
#define PJDHMMEEBBC___C__DISPLAYCLASS16_0__BUILDCHALLENGEMATCHPAGEVM_B__1_OFFSET UNITYSDK_OFFSET(0xC283550)
#define PJDHMMEEBBC___C__DISPLAYCLASS16_0__BUILDCHALLENGEMATCHPAGEVM_B__2_OFFSET UNITYSDK_OFFSET(0xC2835C0)

inline static constexpr unsigned int PJDHMMEEBBC___c__DisplayClass16_0_TypeDefinitionIndex = 81988;

	class PJDHMMEEBBC___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::CLJONECIMDL* challengeService; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDHMMEEBBC___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Void _BuildChallengeMatchPageVM_b__0(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJDHMMEEBBC___C__DISPLAYCLASS16_0__BUILDCHALLENGEMATCHPAGEVM_B__0_OFFSET))(this, a1);
		}

		::System::Void _BuildChallengeMatchPageVM_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDHMMEEBBC___C__DISPLAYCLASS16_0__BUILDCHALLENGEMATCHPAGEVM_B__1_OFFSET))(this);
		}

		::System::Void _BuildChallengeMatchPageVM_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDHMMEEBBC___C__DISPLAYCLASS16_0__BUILDCHALLENGEMATCHPAGEVM_B__2_OFFSET))(this);
		}

	};
