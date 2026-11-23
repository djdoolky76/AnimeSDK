#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/A7F2C5994AC126B4.h"
#include "unitysdk/F52D7D0423C392F6/A21125256598C0D2.h"
#include "unitysdk/F52D7D0423C392F6/FC03173D7A729EF9.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F3B1B18AE2C94C08_A3E58737844AF29C_OFFSET UNITYSDK_OFFSET(0x26E2880)
#define F3B1B18AE2C94C08_BAF7248974B1072E_OFFSET UNITYSDK_OFFSET(0x26E2D10)
#define F3B1B18AE2C94C08_BF4118017A547503_OFFSET UNITYSDK_OFFSET(0x26E2B60)

inline static constexpr unsigned int F3B1B18AE2C94C08_TypeDefinitionIndex = 2635;

class F3B1B18AE2C94C08 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::F52D7D0423C392F6::A21125256598C0D2>** StaticGet_E16FE2B20C0A3975()
	{
		return (::System::Collections::Generic::List_1<::F52D7D0423C392F6::A21125256598C0D2>**)Il2CppClass::FromTypeDefinitionIndex(F3B1B18AE2C94C08_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::List_1<::F52D7D0423C392F6::FC03173D7A729EF9>** StaticGet_EC7ACA3D04B0A0E2()
	{
		return (::System::Collections::Generic::List_1<::F52D7D0423C392F6::FC03173D7A729EF9>**)Il2CppClass::FromTypeDefinitionIndex(F3B1B18AE2C94C08_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::B88870E9FB4B8C1A::A7F2C5994AC126B4 A3E58737844AF29C(::AB642D1382756991* E940BFE34B1F4BEF)
	{
		return ((::B88870E9FB4B8C1A::A7F2C5994AC126B4(*)(::AB642D1382756991*))((::PBYTE)hIl2Cpp + F3B1B18AE2C94C08_A3E58737844AF29C_OFFSET))(E940BFE34B1F4BEF);
	}

	static ::System::Collections::Generic::List_1<::F52D7D0423C392F6::FC03173D7A729EF9>* BF4118017A547503()
	{
		return ((::System::Collections::Generic::List_1<::F52D7D0423C392F6::FC03173D7A729EF9>*(*)())((::PBYTE)hIl2Cpp + F3B1B18AE2C94C08_BF4118017A547503_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::F52D7D0423C392F6::A21125256598C0D2>* BAF7248974B1072E()
	{
		return ((::System::Collections::Generic::List_1<::F52D7D0423C392F6::A21125256598C0D2>*(*)())((::PBYTE)hIl2Cpp + F3B1B18AE2C94C08_BAF7248974B1072E_OFFSET))();
	}
};
