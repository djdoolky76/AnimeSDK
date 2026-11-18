#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFCJHCOKHBE.h"
#include "unitysdk/System/Object.h"

class AKFJEDAMODD;
class FPCBDDPHHJB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PEEOIDCPHDH_ACDFCIHGKFK_OFFSET UNITYSDK_OFFSET(0x1B9D10D0)
#define PEEOIDCPHDH_ENJGADHMCKP_OFFSET UNITYSDK_OFFSET(0x1B9D1200)
#define PEEOIDCPHDH_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x1B9D0FD0)
#define PEEOIDCPHDH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9D0F20)

inline static constexpr unsigned int PEEOIDCPHDH_TypeDefinitionIndex = 52248;

class PEEOIDCPHDH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::AKFJEDAMODD*>** StaticGet_KILAEMHGMNF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::AKFJEDAMODD*>**)Il2CppClass::FromTypeDefinitionIndex(PEEOIDCPHDH_TypeDefinitionIndex)->GetStaticField(0x4F030);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEEOIDCPHDH__CCTOR_OFFSET))();
	}

	static ::AKFJEDAMODD* ACDFCIHGKFK(::System::Int32 CFFCKJIDPDC)
	{
		return ((::AKFJEDAMODD*(*)(::System::Int32))((::PBYTE)hIl2Cpp + PEEOIDCPHDH_ACDFCIHGKFK_OFFSET))(CFFCKJIDPDC);
	}

	static ::System::Boolean ENJGADHMCKP(::FPCBDDPHHJB* AAIJGGIEOGK)
	{
		return ((::System::Boolean(*)(::FPCBDDPHHJB*))((::PBYTE)hIl2Cpp + PEEOIDCPHDH_ENJGADHMCKP_OFFSET))(AAIJGGIEOGK);
	}

	static ::System::Void KKFNPONHGEM(::OFCJHCOKHBE CFFCKJIDPDC, ::AKFJEDAMODD* HDMOCGOIJMP)
	{
		return ((::System::Void(*)(::OFCJHCOKHBE, ::AKFJEDAMODD*))((::PBYTE)hIl2Cpp + PEEOIDCPHDH_KKFNPONHGEM_OFFSET))(CFFCKJIDPDC, HDMOCGOIJMP);
	}
};
