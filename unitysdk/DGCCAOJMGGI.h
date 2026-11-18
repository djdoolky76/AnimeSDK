#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADCIIHIOAMH.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGCCAOJMGGI_BFOLAHNJDGH_OFFSET UNITYSDK_OFFSET(0x19410170)
#define DGCCAOJMGGI_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x194100D0)
#define DGCCAOJMGGI_KKMMMKOLAJE_OFFSET UNITYSDK_OFFSET(0x19410000)
#define DGCCAOJMGGI_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1940FD80)
#define DGCCAOJMGGI_PFJJBGMANHO_OFFSET UNITYSDK_OFFSET(0x1940FE00)
#define DGCCAOJMGGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1940FF80)

inline static constexpr unsigned int DGCCAOJMGGI_TypeDefinitionIndex = 54371;

class DGCCAOJMGGI : public ::ADCIIHIOAMH
{
public:
	::System::Collections::Generic::List_1<::ADCIIHIOAMH*>* OLMLPPHCAGK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCCAOJMGGI__CTOR_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCCAOJMGGI_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void KKMMMKOLAJE(::ADCIIHIOAMH* EBGHENNKBLJ)
	{
		return ((::System::Void(*)(::PVOID, ::ADCIIHIOAMH*))((::PBYTE)hIl2Cpp + DGCCAOJMGGI_KKMMMKOLAJE_OFFSET))(this, EBGHENNKBLJ);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCCAOJMGGI_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void BFOLAHNJDGH(::ADCIIHIOAMH* EBGHENNKBLJ)
	{
		return ((::System::Void(*)(::PVOID, ::ADCIIHIOAMH*))((::PBYTE)hIl2Cpp + DGCCAOJMGGI_BFOLAHNJDGH_OFFSET))(this, EBGHENNKBLJ);
	}

	::System::Void PFJJBGMANHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCCAOJMGGI_PFJJBGMANHO_OFFSET))(this);
	}
};
