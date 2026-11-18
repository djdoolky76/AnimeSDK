#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PDAPOKJFFME;
namespace Foundation { template <typename T> class ObjectPool_1; }

#define GAAFMMPOIHE_FDJHEBHLJLD_OFFSET UNITYSDK_OFFSET(0x132439B0)
#define GAAFMMPOIHE_GMNGAAMNLIF_OFFSET UNITYSDK_OFFSET(0x13243A60)
#define GAAFMMPOIHE_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x13243BC0)
#define GAAFMMPOIHE_KIPMNPODBFH_OFFSET UNITYSDK_OFFSET(0x13243AB0)
#define GAAFMMPOIHE_OGLFNBFGADG_OFFSET UNITYSDK_OFFSET(0x13243C70)
#define GAAFMMPOIHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x132438E0)
#define GAAFMMPOIHE__CTOR_OFFSET UNITYSDK_OFFSET(0x132438D0)

inline static constexpr unsigned int GAAFMMPOIHE_TypeDefinitionIndex = 86575;

class GAAFMMPOIHE : public ::System::Object
{
public:
	static ::Foundation::ObjectPool_1<::PDAPOKJFFME*>** StaticGet_BHDKHCAMGHE()
	{
		return (::Foundation::ObjectPool_1<::PDAPOKJFFME*>**)Il2CppClass::FromTypeDefinitionIndex(GAAFMMPOIHE_TypeDefinitionIndex)->GetStaticField(0x31B70);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAFMMPOIHE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAAFMMPOIHE__CCTOR_OFFSET))();
	}

	static ::System::Void FDJHEBHLJLD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAAFMMPOIHE_FDJHEBHLJLD_OFFSET))();
	}

	static ::System::Void GMNGAAMNLIF(::PDAPOKJFFME* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PDAPOKJFFME*))((::PBYTE)hIl2Cpp + GAAFMMPOIHE_GMNGAAMNLIF_OFFSET))(HODAIDNDKHD);
	}

	static ::PDAPOKJFFME* KIPMNPODBFH()
	{
		return ((::PDAPOKJFFME*(*)())((::PBYTE)hIl2Cpp + GAAFMMPOIHE_KIPMNPODBFH_OFFSET))();
	}

	static ::System::Void JJEJHGOJOII(::PDAPOKJFFME* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PDAPOKJFFME*))((::PBYTE)hIl2Cpp + GAAFMMPOIHE_JJEJHGOJOII_OFFSET))(HODAIDNDKHD);
	}

	static ::PDAPOKJFFME* OGLFNBFGADG()
	{
		return ((::PDAPOKJFFME*(*)())((::PBYTE)hIl2Cpp + GAAFMMPOIHE_OGLFNBFGADG_OFFSET))();
	}
};
