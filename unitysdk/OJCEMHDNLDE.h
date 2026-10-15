#pragma once
#include "unitysdk/unitysdk.h"
class AAAGCHBIIFI;
class AEKEIBNBMDJ;
class CBEBICGIOAB;
namespace UnityEngine { class Texture; }

#define OJCEMHDNLDE_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEACB00)
#define OJCEMHDNLDE_CTOR_OFFSET UNITYSDK_OFFSET(0xBEABC50)
#define OJCEMHDNLDE_HMCBNABPAMP_OFFSET UNITYSDK_OFFSET(0xBEABCD0)
#define OJCEMHDNLDE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBEABEA0)
#define OJCEMHDNLDE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBEABE20)

inline static constexpr unsigned int OJCEMHDNLDE_TypeDefinitionIndex = 49426;

	class OJCEMHDNLDE
	{
	public:
		::UnityEngine::Texture* DGHDEJOAHFO; // 0x50
		static ::System::Int32* StaticGet_CMOGMGOPHJA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJCEMHDNLDE")->GetStaticField(0x12BC0);
		}

		static ::System::Int32* StaticGet_KAKCAOFGJBM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJCEMHDNLDE")->GetStaticField(0x12BC4);
		}

		static ::System::Int32* StaticGet_CEMHPKPOOGB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJCEMHDNLDE")->GetStaticField(0x12BC8);
		}

		static ::System::Int32* StaticGet_KAJOGAABPGK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJCEMHDNLDE")->GetStaticField(0x12BCC);
		}

		static ::System::Int32* StaticGet_JCHFCNFHCMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJCEMHDNLDE")->GetStaticField(0x12BD0);
		}

		static ::System::Int32* StaticGet_HPCGFLCLAPC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJCEMHDNLDE")->GetStaticField(0x12BD4);
		}

		static ::System::Int32* StaticGet_CAPDMCOBNFN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OJCEMHDNLDE")->GetStaticField(0x12BD8);
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
