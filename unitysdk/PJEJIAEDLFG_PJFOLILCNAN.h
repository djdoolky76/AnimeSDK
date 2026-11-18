#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JKCPIHGIOAN;

#define PJEJIAEDLFG_PJFOLILCNAN_MPFKHAMBDGK_OFFSET UNITYSDK_OFFSET(0x1A7F4C40)
#define PJEJIAEDLFG_PJFOLILCNAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F4C30)

inline static constexpr unsigned int PJEJIAEDLFG_PJFOLILCNAN_TypeDefinitionIndex = 45430;

class PJEJIAEDLFG_PJFOLILCNAN : public ::System::Object
{
public:
	::System::Int32 CJPLACFCFBP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_PJFOLILCNAN__CTOR_OFFSET))(this);
	}

	::System::Boolean MPFKHAMBDGK(::JKCPIHGIOAN* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::JKCPIHGIOAN*))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_PJFOLILCNAN_MPFKHAMBDGK_OFFSET))(this, HAAEBCOBKFF);
	}
};
