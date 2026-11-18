#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define FMAINMDDHHO_KBOPCLLKEKM_KJNOJBADBFP_OFFSET UNITYSDK_OFFSET(0x179B56F0)
#define FMAINMDDHHO_KBOPCLLKEKM__CTOR_OFFSET UNITYSDK_OFFSET(0x179B56E0)

inline static constexpr unsigned int FMAINMDDHHO_KBOPCLLKEKM_TypeDefinitionIndex = 48387;

class FMAINMDDHHO_KBOPCLLKEKM : public ::System::Object
{
public:
	::System::UInt32 MBABJPIEAIA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMAINMDDHHO_KBOPCLLKEKM__CTOR_OFFSET))(this);
	}

	::System::Boolean KJNOJBADBFP(::CKENOHMEEGI* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + FMAINMDDHHO_KBOPCLLKEKM_KJNOJBADBFP_OFFSET))(this, PELAJIFDIPN);
	}
};
