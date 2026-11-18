#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MECFDIENHLL_FFPJAGJDOJG_ILMIAAEHGBO_OFFSET UNITYSDK_OFFSET(0x15928F90)
#define MECFDIENHLL_FFPJAGJDOJG__CTOR_OFFSET UNITYSDK_OFFSET(0x15928F80)

inline static constexpr unsigned int MECFDIENHLL_FFPJAGJDOJG_TypeDefinitionIndex = 91410;

class MECFDIENHLL_FFPJAGJDOJG : public ::System::Object
{
public:
	::System::Int32 OBNIAHNMHPF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECFDIENHLL_FFPJAGJDOJG__CTOR_OFFSET))(this);
	}

	::System::Int32 ILMIAAEHGBO(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MECFDIENHLL_FFPJAGJDOJG_ILMIAAEHGBO_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
