#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IADDHANFKPG;

#define PJEJIAEDLFG_OIGDAGFDLEC_DKNEKOEBFPM_OFFSET UNITYSDK_OFFSET(0x18479F50)
#define PJEJIAEDLFG_OIGDAGFDLEC__CTOR_OFFSET UNITYSDK_OFFSET(0x18479F40)

inline static constexpr unsigned int PJEJIAEDLFG_OIGDAGFDLEC_TypeDefinitionIndex = 45433;

class PJEJIAEDLFG_OIGDAGFDLEC : public ::System::Object
{
public:
	::System::Int32 PDAEFBBHHPP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_OIGDAGFDLEC__CTOR_OFFSET))(this);
	}

	::System::Boolean DKNEKOEBFPM(::IADDHANFKPG* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::IADDHANFKPG*))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_OIGDAGFDLEC_DKNEKOEBFPM_OFFSET))(this, HAAEBCOBKFF);
	}
};
