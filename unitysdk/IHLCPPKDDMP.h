#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALGKMLLALFG;
namespace Foundation { template <typename T> class ObjectPool_1; }

#define IHLCPPKDDMP_FDJHEBHLJLD_OFFSET UNITYSDK_OFFSET(0x16F6C940)
#define IHLCPPKDDMP_GMNGAAMNLIF_OFFSET UNITYSDK_OFFSET(0x16F6C8F0)
#define IHLCPPKDDMP_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x16F6C6A0)
#define IHLCPPKDDMP_KIPMNPODBFH_OFFSET UNITYSDK_OFFSET(0x16F6C760)
#define IHLCPPKDDMP_OGLFNBFGADG_OFFSET UNITYSDK_OFFSET(0x16F6C870)
#define IHLCPPKDDMP__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F6C5D0)
#define IHLCPPKDDMP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6C5C0)

inline static constexpr unsigned int IHLCPPKDDMP_TypeDefinitionIndex = 69662;

class IHLCPPKDDMP : public ::System::Object
{
public:
	static ::Foundation::ObjectPool_1<::ALGKMLLALFG*>** StaticGet_BHDKHCAMGHE()
	{
		return (::Foundation::ObjectPool_1<::ALGKMLLALFG*>**)Il2CppClass::FromTypeDefinitionIndex(IHLCPPKDDMP_TypeDefinitionIndex)->GetStaticField(0x3E0A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLCPPKDDMP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHLCPPKDDMP__CCTOR_OFFSET))();
	}

	static ::System::Void JJEJHGOJOII(::ALGKMLLALFG* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::ALGKMLLALFG*))((::PBYTE)hIl2Cpp + IHLCPPKDDMP_JJEJHGOJOII_OFFSET))(HODAIDNDKHD);
	}

	static ::ALGKMLLALFG* KIPMNPODBFH()
	{
		return ((::ALGKMLLALFG*(*)())((::PBYTE)hIl2Cpp + IHLCPPKDDMP_KIPMNPODBFH_OFFSET))();
	}

	static ::ALGKMLLALFG* OGLFNBFGADG()
	{
		return ((::ALGKMLLALFG*(*)())((::PBYTE)hIl2Cpp + IHLCPPKDDMP_OGLFNBFGADG_OFFSET))();
	}

	static ::System::Void GMNGAAMNLIF(::ALGKMLLALFG* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::ALGKMLLALFG*))((::PBYTE)hIl2Cpp + IHLCPPKDDMP_GMNGAAMNLIF_OFFSET))(HODAIDNDKHD);
	}

	static ::System::Void FDJHEBHLJLD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHLCPPKDDMP_FDJHEBHLJLD_OFFSET))();
	}
};
