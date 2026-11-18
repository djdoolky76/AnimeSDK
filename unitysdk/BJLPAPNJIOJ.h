#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define BJLPAPNJIOJ_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x13976850)
#define BJLPAPNJIOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13976A40)

inline static constexpr unsigned int BJLPAPNJIOJ_TypeDefinitionIndex = 84778;

class BJLPAPNJIOJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLPAPNJIOJ__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + BJLPAPNJIOJ_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
