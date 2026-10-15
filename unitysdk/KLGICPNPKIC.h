#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LNMEGEABJHF.h"
class AENEFHBMEMJ;
class KLGICPNPKIC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define KLGICPNPKIC_AAKDEJLBJMN_OFFSET UNITYSDK_OFFSET(0x1C52F440)
#define KLGICPNPKIC_AGPOFNFLLLH_OFFSET UNITYSDK_OFFSET(0x1C530610)
#define KLGICPNPKIC_CDNCEBODFEP_OFFSET UNITYSDK_OFFSET(0x1C539D20)
#define KLGICPNPKIC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C530990)
#define KLGICPNPKIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5318E0)
#define KLGICPNPKIC_HHKHFHDJLHM_OFFSET UNITYSDK_OFFSET(0x1C531240)
#define KLGICPNPKIC_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x1C539D30)
#define KLGICPNPKIC_IIHPAGMJPDM_OFFSET UNITYSDK_OFFSET(0x1C531710)
#define KLGICPNPKIC_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0x1C5305B0)
#define KLGICPNPKIC_KPJGDHLENIP_2_OFFSET UNITYSDK_OFFSET(0x1C5301F0)
#define KLGICPNPKIC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C5399D0)
#define KLGICPNPKIC_LFEBPDILKNA_OFFSET UNITYSDK_OFFSET(0x1C539D10)
#define KLGICPNPKIC_LNMEMMNJKKO_OFFSET UNITYSDK_OFFSET(0x1C539D50)
#define KLGICPNPKIC_NNJIGNBAHHL_OFFSET UNITYSDK_OFFSET(0x1C539A20)
#define KLGICPNPKIC_OACBGCFADMP_OFFSET UNITYSDK_OFFSET(0x1C539AB0)
#define KLGICPNPKIC_OBIIJABDNPC_OFFSET UNITYSDK_OFFSET(0x1C539D40)
#define KLGICPNPKIC_PPAMJNOKPLO_OFFSET UNITYSDK_OFFSET(0x1C539D60)
#define KLGICPNPKIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C539C60)

inline static constexpr unsigned int KLGICPNPKIC_TypeDefinitionIndex = 41625;

	class KLGICPNPKIC : public ::System::Object
	{
	public:
		::KLGICPNPKIC* KJMDDAHEODL; // 0x10
		::AENEFHBMEMJ* DICNPKCPPDJ; // 0x18
		::System::Int32 MIFKHBDOGLN; // 0x20
		::System::Int32 DCBJLCHENHJ; // 0x24
		::System::Int32 CMAOAKMIMLA; // 0x28
		// static const ::System::Object NEFDJNGJIIM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KLGICPNPKIC_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KLGICPNPKIC_KPJGDHLENIP_1_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KLGICPNPKIC_KPJGDHLENIP_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AGPOFNFLLLH(::KLGICPNPKIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLGICPNPKIC*))((::PBYTE)hIl2Cpp + KLGICPNPKIC_AGPOFNFLLLH_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC_CLEAR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KLGICPNPKIC*>* NNJIGNBAHHL()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KLGICPNPKIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC_NNJIGNBAHHL_OFFSET))(this);
		}

		::System::Void HHKHFHDJLHM(::KLGICPNPKIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLGICPNPKIC*))((::PBYTE)hIl2Cpp + KLGICPNPKIC_HHKHFHDJLHM_OFFSET))(this, a1);
		}

		::System::Void IIHPAGMJPDM(::AENEFHBMEMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AENEFHBMEMJ*))((::PBYTE)hIl2Cpp + KLGICPNPKIC_IIHPAGMJPDM_OFFSET))(this, a1);
		}

		::System::String* OACBGCFADMP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC_OACBGCFADMP_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC_TOSTRING_OFFSET))(this);
		}

		::System::Int32 LFEBPDILKNA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC_LFEBPDILKNA_OFFSET))(this);
		}

		::System::Boolean CDNCEBODFEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC_CDNCEBODFEP_OFFSET))(this);
		}

		::System::Int32 HHMFILFAMNA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Int32 OBIIJABDNPC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC_OBIIJABDNPC_OFFSET))(this);
		}

		::LNMEGEABJHF AAKDEJLBJMN()
		{
			return ((::LNMEGEABJHF(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC_AAKDEJLBJMN_OFFSET))(this);
		}

		::AENEFHBMEMJ* LNMEMMNJKKO()
		{
			return ((::AENEFHBMEMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC_LNMEMMNJKKO_OFFSET))(this);
		}

		::KLGICPNPKIC* PPAMJNOKPLO()
		{
			return ((::KLGICPNPKIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC_PPAMJNOKPLO_OFFSET))(this);
		}

	};
