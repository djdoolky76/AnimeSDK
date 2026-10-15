#pragma once
#include "unitysdk/unitysdk.h"
class AAAGCHBIIFI;
class AEKEIBNBMDJ;
class CBEBICGIOAB;
namespace UnityEngine { class Texture; }

#define OJCEMHDNLDE_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEA5630)
#define OJCEMHDNLDE_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA4760)
#define OJCEMHDNLDE_HMCBNABPAMP_OFFSET UNITYSDK_OFFSET(0xBEA47E0)
#define OJCEMHDNLDE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBEA49B0)
#define OJCEMHDNLDE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBEA4930)

inline static constexpr unsigned int OJCEMHDNLDE_TypeDefinitionIndex = 49426;

	class OJCEMHDNLDE
	{
	public:
		::UnityEngine::Texture* DGHDEJOAHFO; // 0x50
		static ::System::Int32* StaticGet_CMOGMGOPHJA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJCEMHDNLDE")->GetStaticField(0x13F90);
		}

		static ::System::Int32* StaticGet_CEMHPKPOOGB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJCEMHDNLDE")->GetStaticField(0x13F94);
		}

		static ::System::Int32* StaticGet_KAJOGAABPGK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJCEMHDNLDE")->GetStaticField(0x13F98);
		}

		static ::System::Int32* StaticGet_KAKCAOFGJBM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJCEMHDNLDE")->GetStaticField(0x13F9C);
		}

		static ::System::Int32* StaticGet_CAPDMCOBNFN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJCEMHDNLDE")->GetStaticField(0x13FA0);
		}

		static ::System::Int32* StaticGet_JCHFCNFHCMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJCEMHDNLDE")->GetStaticField(0x13FA4);
		}

		static ::System::Int32* StaticGet_HPCGFLCLAPC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJCEMHDNLDE")->GetStaticField(0x13FA8);
		}

		::System::Void _ctor(::AAAGCHBIIFI* a1, ::AAAGCHBIIFI* a2, ::AAAGCHBIIFI* a3, ::AEKEIBNBMDJ* a4, ::CBEBICGIOAB* a5)
		{
			return ((::System::Void(*)(::PVOID, ::AAAGCHBIIFI*, ::AAAGCHBIIFI*, ::AAAGCHBIIFI*, ::AEKEIBNBMDJ*, ::CBEBICGIOAB*))((::PBYTE)hIl2Cpp + OJCEMHDNLDE_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJCEMHDNLDE_CCTOR_OFFSET))();
		}

		::System::Single HMCBNABPAMP(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJCEMHDNLDE_HMCBNABPAMP_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCEMHDNLDE_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJCEMHDNLDE_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
