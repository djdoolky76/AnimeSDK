#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define OIGGOOADGCM_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x16C19A00)
#define OIGGOOADGCM__CTOR_OFFSET UNITYSDK_OFFSET(0x16C19BF0)

inline static constexpr unsigned int OIGGOOADGCM_TypeDefinitionIndex = 73083;

class OIGGOOADGCM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGGOOADGCM__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + OIGGOOADGCM_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
