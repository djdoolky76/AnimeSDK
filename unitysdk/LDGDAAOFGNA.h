#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDGDAAOFGNA_CheckSkillResult.h"
#include "unitysdk/System/Object.h"
class NDDFLGNNMDK;
class PEEDLCHFAFL;

#define LDGDAAOFGNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC7AD90)
#define LDGDAAOFGNA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AC7ADA0)
#define LDGDAAOFGNA_INEDLJGDFAJ_OFFSET UNITYSDK_OFFSET(0x1AC7B300)
#define LDGDAAOFGNA_JPDDFFNAMDP_OFFSET UNITYSDK_OFFSET(0x1AC7AE10)
#define LDGDAAOFGNA_ONLFEONAAGM_OFFSET UNITYSDK_OFFSET(0x1AC7AFB0)

inline static constexpr unsigned int LDGDAAOFGNA_TypeDefinitionIndex = 79345;

	class LDGDAAOFGNA : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + LDGDAAOFGNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGDAAOFGNA_EXECUTE_OFFSET))(this);
		}

		::System::Void ONLFEONAAGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGDAAOFGNA_ONLFEONAAGM_OFFSET))(this);
		}

		::System::Boolean INEDLJGDFAJ(::LDGDAAOFGNA_CheckSkillResult a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDGDAAOFGNA_CheckSkillResult))((::PBYTE)hIl2Cpp + LDGDAAOFGNA_INEDLJGDFAJ_OFFSET))(this, a1);
		}

		::System::Void JPDDFFNAMDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGDAAOFGNA_JPDDFFNAMDP_OFFSET))(this);
		}

	};
