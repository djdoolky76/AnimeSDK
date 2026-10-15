#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISymbolFilterSource.h"
#include "unitysdk/RPG/Client/UISymbolFilterType.h"
#include "unitysdk/System/Object.h"
class LEMHHFCGFFH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHHOJMMEEBH_AMLBGOFAJKA_OFFSET UNITYSDK_OFFSET(0xB6B37C0)
#define LHHOJMMEEBH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6B4120)
#define LHHOJMMEEBH_DHLBOBFAACE_OFFSET UNITYSDK_OFFSET(0xB6B3470)
#define LHHOJMMEEBH_LDGOLILCBMI_OFFSET UNITYSDK_OFFSET(0xB6B3710)
#define LHHOJMMEEBH_MNGLDJAECFP_OFFSET UNITYSDK_OFFSET(0xB6B3ED0)

inline static constexpr unsigned int LHHOJMMEEBH_TypeDefinitionIndex = 72939;

	class LHHOJMMEEBH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::UISymbolFilterType, ::LEMHHFCGFFH*>** StaticGet_LNPAHCPDHPD()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::UISymbolFilterType, ::LEMHHFCGFFH*>**)UnitySDK::FromName("", "LHHOJMMEEBH")->GetStaticField(0x5E730);
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
