#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OEEKHELGHKF_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x3C4DDB0)
#define OEEKHELGHKF_ALJJDGONFDD_1_OFFSET UNITYSDK_OFFSET(0x1DD57A20)
#define OEEKHELGHKF_ALJJDGONFDD_OFFSET UNITYSDK_OFFSET(0x1DD574D0)
#define OEEKHELGHKF_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1DD574B0)
#define OEEKHELGHKF_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0x2F90EC0)
#define OEEKHELGHKF_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x3C4DCA0)
#define OEEKHELGHKF_GIAOOPPHODF_1_OFFSET UNITYSDK_OFFSET(0x1DD57D00)
#define OEEKHELGHKF_GIAOOPPHODF_OFFSET UNITYSDK_OFFSET(0x1DD576E0)
#define OEEKHELGHKF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x3C4DE00)
#define OEEKHELGHKF_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0x3C4DDF0)

inline static constexpr unsigned int OEEKHELGHKF_TypeDefinitionIndex = 6444;

	struct alignas(8) OEEKHELGHKF
	{
		::System::Collections::Generic::List_1<::KJFIKOKBCCA>* HBNLPLIIDDG; // 0x10
		::System::Int32 LEOBIJCNINA; // 0x18
		::System::Int32 DPIHEPLDDBB; // 0x1C
		/*
		static ::System::Boolean BBNJCKPKPDN(::OEEKHELGHKF a1)
		{
			return ((::System::Boolean(*)(::OEEKHELGHKF))((::PBYTE)hIl2Cpp + OEEKHELGHKF_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::OEEKHELGHKF ALJJDGONFDD(::OEEKHELGHKF a1, ::KJFIKOKBCCA a2)
		{
			return ((::OEEKHELGHKF(*)(::OEEKHELGHKF, ::KJFIKOKBCCA))((::PBYTE)hIl2Cpp + OEEKHELGHKF_ALJJDGONFDD_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::OEEKHELGHKF GIAOOPPHODF(::OEEKHELGHKF a1, ::KJFIKOKBCCA a2)
		{
			return ((::OEEKHELGHKF(*)(::OEEKHELGHKF, ::KJFIKOKBCCA))((::PBYTE)hIl2Cpp + OEEKHELGHKF_GIAOOPPHODF_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::OEEKHELGHKF ALJJDGONFDD_1(::OEEKHELGHKF a1, ::System::Action* a2)
		{
			return ((::OEEKHELGHKF(*)(::OEEKHELGHKF, ::System::Action*))((::PBYTE)hIl2Cpp + OEEKHELGHKF_ALJJDGONFDD_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::OEEKHELGHKF GIAOOPPHODF_1(::OEEKHELGHKF a1, ::System::Action* a2)
		{
			return ((::OEEKHELGHKF(*)(::OEEKHELGHKF, ::System::Action*))((::PBYTE)hIl2Cpp + OEEKHELGHKF_GIAOOPPHODF_1_OFFSET))(a1, a2);
		}
		*/

		::System::Void EGFCFCBHJJP(::KJFIKOKBCCA a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJFIKOKBCCA))((::PBYTE)hIl2Cpp + OEEKHELGHKF_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Void AALCFBOGFKP(::KJFIKOKBCCA a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJFIKOKBCCA))((::PBYTE)hIl2Cpp + OEEKHELGHKF_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void MBABPIHGAJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEKHELGHKF_MBABPIHGAJN_OFFSET))(this);
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEKHELGHKF_BPDIGKDIJKN_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEKHELGHKF_KHGIKBFDLFB_OFFSET))(this);
		}

	};
