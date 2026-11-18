#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"

class LHJLEHEKHCB;

#define KAMLPLAEOFA_CFANMPANDAO_OFFSET UNITYSDK_OFFSET(0x1EFC8DA0)
#define KAMLPLAEOFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC8D90)

inline static constexpr unsigned int KAMLPLAEOFA_TypeDefinitionIndex = 28912;

class KAMLPLAEOFA : public ::MHOBPPAJKIL
{
public:
	::LHJLEHEKHCB* KFHFIGPBAAO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMLPLAEOFA__CTOR_OFFSET))(this);
	}

	::KAMLPLAEOFA* CFANMPANDAO(::LHJLEHEKHCB* MPAHJCCCBLA)
	{
		return ((::KAMLPLAEOFA*(*)(::PVOID, ::LHJLEHEKHCB*))((::PBYTE)hIl2Cpp + KAMLPLAEOFA_CFANMPANDAO_OFFSET))(this, MPAHJCCCBLA);
	}
};
