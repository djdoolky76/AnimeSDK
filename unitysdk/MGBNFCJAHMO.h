#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIIPPLFGOEJ.h"
#include "unitysdk/GMKLOAIMPNK.h"

#define MGBNFCJAHMO_INGMEAMPPMF_OFFSET UNITYSDK_OFFSET(0x13D2D8A0)
#define MGBNFCJAHMO_KOMFCGALIHJ_OFFSET UNITYSDK_OFFSET(0x13D2D940)
#define MGBNFCJAHMO__CTOR_OFFSET UNITYSDK_OFFSET(0x13D2D9F0)

inline static constexpr unsigned int MGBNFCJAHMO_TypeDefinitionIndex = 68926;

class MGBNFCJAHMO : public ::EIIPPLFGOEJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNFCJAHMO__CTOR_OFFSET))(this);
	}

	::System::Void INGMEAMPPMF(::System::Int32 ABHBKFJKINO, ::GMKLOAIMPNK EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::GMKLOAIMPNK))((::PBYTE)hIl2Cpp + MGBNFCJAHMO_INGMEAMPPMF_OFFSET))(this, ABHBKFJKINO, EKPEBNCLJPM);
	}

	::GMKLOAIMPNK KOMFCGALIHJ(::System::Int32 ABHBKFJKINO)
	{
		return ((::GMKLOAIMPNK(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MGBNFCJAHMO_KOMFCGALIHJ_OFFSET))(this, ABHBKFJKINO);
	}
};
