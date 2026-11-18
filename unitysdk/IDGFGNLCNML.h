#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define IDGFGNLCNML_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x1539F4A0)
#define IDGFGNLCNML__CTOR_OFFSET UNITYSDK_OFFSET(0x1539F690)

inline static constexpr unsigned int IDGFGNLCNML_TypeDefinitionIndex = 59736;

class IDGFGNLCNML : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGFGNLCNML__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + IDGFGNLCNML_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
