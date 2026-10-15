#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISymbolFilterSource.h"
#include "unitysdk/RPG/Client/UISymbolFilterType.h"
#include "unitysdk/System/Object.h"
class LEMHHFCGFFH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHHOJMMEEBH_AMLBGOFAJKA_OFFSET UNITYSDK_OFFSET(0xB6ACB80)
#define LHHOJMMEEBH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6AD4E0)
#define LHHOJMMEEBH_DHLBOBFAACE_OFFSET UNITYSDK_OFFSET(0xB6AC830)
#define LHHOJMMEEBH_LDGOLILCBMI_OFFSET UNITYSDK_OFFSET(0xB6ACAD0)
#define LHHOJMMEEBH_MNGLDJAECFP_OFFSET UNITYSDK_OFFSET(0xB6AD290)

inline static constexpr unsigned int LHHOJMMEEBH_TypeDefinitionIndex = 72938;

	class LHHOJMMEEBH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::UISymbolFilterType, ::LEMHHFCGFFH*>** StaticGet_LNPAHCPDHPD()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::UISymbolFilterType, ::LEMHHFCGFFH*>**)UnitySDK::FromName("", "LHHOJMMEEBH")->GetStaticField(0x631F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHHOJMMEEBH_CCTOR_OFFSET))();
		}

		static ::System::Boolean DHLBOBFAACE(::RPG::Client::UISymbolFilterSource a1, ::System::Char a2, ::System::Char a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::UISymbolFilterSource, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + LHHOJMMEEBH_DHLBOBFAACE_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::LEMHHFCGFFH*>* AMLBGOFAJKA(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::LEMHHFCGFFH*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LHHOJMMEEBH_AMLBGOFAJKA_OFFSET))(a1);
		}

		static ::LEMHHFCGFFH* MNGLDJAECFP(::RPG::Client::UISymbolFilterType a1)
		{
			return ((::LEMHHFCGFFH*(*)(::RPG::Client::UISymbolFilterType))((::PBYTE)hIl2Cpp + LHHOJMMEEBH_MNGLDJAECFP_OFFSET))(a1);
		}

		static ::System::Int32 LDGOLILCBMI(::RPG::Client::UISymbolFilterSource a1)
		{
			return ((::System::Int32(*)(::RPG::Client::UISymbolFilterSource))((::PBYTE)hIl2Cpp + LHHOJMMEEBH_LDGOLILCBMI_OFFSET))(a1);
		}

	};
