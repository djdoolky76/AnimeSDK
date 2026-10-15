#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define IDJCEFPNPMM_CNENKBFFPDC_1_OFFSET UNITYSDK_OFFSET(0x3C4A140)
#define IDJCEFPNPMM_CNENKBFFPDC_OFFSET UNITYSDK_OFFSET(0x3C4A0A0)
#define IDJCEFPNPMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0xE9D80)
#define IDJCEFPNPMM_CTOR_OFFSET UNITYSDK_OFFSET(0x3C4A060)
#define IDJCEFPNPMM_FCDKILGCCME_1_OFFSET UNITYSDK_OFFSET(0x1DD63770)
#define IDJCEFPNPMM_FCDKILGCCME_OFFSET UNITYSDK_OFFSET(0x1DD62C40)
#define IDJCEFPNPMM_FJKGLHIEPMO_OFFSET UNITYSDK_OFFSET(0x3C4A070)
#define IDJCEFPNPMM_HOBEGLFEDIC_OFFSET UNITYSDK_OFFSET(0x3C4A080)
#define IDJCEFPNPMM_IJGGBHGAGHL_1_OFFSET UNITYSDK_OFFSET(0x3C4A450)
#define IDJCEFPNPMM_IJGGBHGAGHL_OFFSET UNITYSDK_OFFSET(0x3C4A350)
#define IDJCEFPNPMM_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C4A1E0)
#define IDJCEFPNPMM_KMAELHIAIME_OFFSET UNITYSDK_OFFSET(0x1DD64E50)
#define IDJCEFPNPMM_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C4A240)
#define IDJCEFPNPMM_LCJMKJPECAP_1_OFFSET UNITYSDK_OFFSET(0x3C4A310)
#define IDJCEFPNPMM_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x3C4A2E0)
#define IDJCEFPNPMM_MDKHKFAKBLF_OFFSET UNITYSDK_OFFSET(0x1DD650B0)
#define IDJCEFPNPMM_MNIOENIDEDD_1_OFFSET UNITYSDK_OFFSET(0x1DD64900)
#define IDJCEFPNPMM_MNIOENIDEDD_OFFSET UNITYSDK_OFFSET(0x1DD63D60)
#define IDJCEFPNPMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4A560)

inline static constexpr unsigned int IDJCEFPNPMM_TypeDefinitionIndex = 6282;

	struct alignas(4) IDJCEFPNPMM
	{
		::RPG::MVector2 BHCMCMADHBF; // 0x10
		::System::Single IDKONBFPBLH; // 0x18
		::System::Void _ctor(::RPG::MVector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::MVector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_CTOR_1_OFFSET))(this, a1, a2);
		}

		/*
		static ::IDJCEFPNPMM FCDKILGCCME(::System::Collections::Generic::IEnumerable_1<::RPG::MVector2>* a1)
		{
			return ((::IDJCEFPNPMM(*)(::System::Collections::Generic::IEnumerable_1<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_FCDKILGCCME_OFFSET))(a1);
		}
		*/

		/*
		static ::IDJCEFPNPMM FCDKILGCCME_1(::System::Collections::Generic::IList_1<::RPG::MVector2>* a1)
		{
			return ((::IDJCEFPNPMM(*)(::System::Collections::Generic::IList_1<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_FCDKILGCCME_1_OFFSET))(a1);
		}
		*/

		/*
		static ::IDJCEFPNPMM MNIOENIDEDD(::System::Collections::Generic::IEnumerable_1<::RPG::MVector2>* a1)
		{
			return ((::IDJCEFPNPMM(*)(::System::Collections::Generic::IEnumerable_1<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_MNIOENIDEDD_OFFSET))(a1);
		}
		*/

		/*
		static ::IDJCEFPNPMM MNIOENIDEDD_1(::System::Collections::Generic::IList_1<::RPG::MVector2>* a1)
		{
			return ((::IDJCEFPNPMM(*)(::System::Collections::Generic::IList_1<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_MNIOENIDEDD_1_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean KMAELHIAIME(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3, ::IDJCEFPNPMM a4)
		{
			return ((::System::Boolean(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::IDJCEFPNPMM))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_KMAELHIAIME_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::System::Boolean MDKHKFAKBLF(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3, ::IDJCEFPNPMM a4)
		{
			return ((::System::Boolean(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::IDJCEFPNPMM))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_MDKHKFAKBLF_OFFSET))(a1, a2, a3, a4);
		}
		*/

		::System::Single FJKGLHIEPMO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_FJKGLHIEPMO_OFFSET))(this);
		}

		::System::Single HOBEGLFEDIC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_HOBEGLFEDIC_OFFSET))(this);
		}

		::RPG::MVector2 CNENKBFFPDC(::System::Single a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_CNENKBFFPDC_OFFSET))(this, a1);
		}

		::RPG::MVector2 CNENKBFFPDC_1(::System::Single a1, ::System::Single a2)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_CNENKBFFPDC_1_OFFSET))(this, a1, a2);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector2 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_JDAPDOLJLPN_OFFSET))(this, a1);
		}

		::RPG::MVector2 LBDJFNDMMOA(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_LBDJFNDMMOA_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP(::RPG::MVector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP_1(::RPG::MVector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_LCJMKJPECAP_1_OFFSET))(this, a1);
		}

		/*
		::System::Void IJGGBHGAGHL(::IDJCEFPNPMM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDJCEFPNPMM))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_IJGGBHGAGHL_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void IJGGBHGAGHL_1(::IDJCEFPNPMM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDJCEFPNPMM))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_IJGGBHGAGHL_1_OFFSET))(this, a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJCEFPNPMM_TOSTRING_OFFSET))(this);
		}

	};
