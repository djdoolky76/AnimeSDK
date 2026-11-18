#pragma once
#include "unitysdk/unitysdk.h"

class NABPENOLBPN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Texture; }

#define AGOFALFBGPG_AEKIHPFCFBB_OFFSET UNITYSDK_OFFSET(0x14211FF0)
#define AGOFALFBGPG_BJKGGKJINMF_OFFSET UNITYSDK_OFFSET(0x14211990)
#define AGOFALFBGPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14211340)
#define AGOFALFBGPG_DJJCINEHGAA_OFFSET UNITYSDK_OFFSET(0x14211390)
#define AGOFALFBGPG_EKHHNKMNBJH_OFFSET UNITYSDK_OFFSET(0x14211AA0)
#define AGOFALFBGPG_FHAKOJLJBML_OFFSET UNITYSDK_OFFSET(0x14211C00)
#define AGOFALFBGPG_HAMDAHICMDJ_OFFSET UNITYSDK_OFFSET(0x14211AF0)
#define AGOFALFBGPG_KMOCGGICJLB_OFFSET UNITYSDK_OFFSET(0x14211E00)
#define AGOFALFBGPG_LKBMFNDKFHM_OFFSET UNITYSDK_OFFSET(0x14211780)
#define AGOFALFBGPG_MDFPFLBCJEE_OFFSET UNITYSDK_OFFSET(0x14211640)
#define AGOFALFBGPG_ONCREATE_OFFSET UNITYSDK_OFFSET(0x142115F0)
#define AGOFALFBGPG__CCTOR_OFFSET UNITYSDK_OFFSET(0x14211630)
#define AGOFALFBGPG__CTOR_OFFSET UNITYSDK_OFFSET(0x142112B0)

inline static constexpr unsigned int AGOFALFBGPG_TypeDefinitionIndex = 84962;

class AGOFALFBGPG
{
public:
	static ::System::Int32* StaticGet_NEKAOKMKBGE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AGOFALFBGPG_TypeDefinitionIndex)->GetStaticField(0xC960);
	}
	static ::System::Int32* StaticGet_ANAFCFPHHLH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AGOFALFBGPG_TypeDefinitionIndex)->GetStaticField(0xC964);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::NABPENOLBPN*>* HEJPJNALDKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOFALFBGPG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGOFALFBGPG__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOFALFBGPG_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOFALFBGPG_ONCREATE_OFFSET))(this);
	}

	::UnityEngine::Texture* MDFPFLBCJEE(::System::Int32 CBIEJMBPAIC)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGOFALFBGPG_MDFPFLBCJEE_OFFSET))(this, CBIEJMBPAIC);
	}

	::UnityEngine::Texture* LKBMFNDKFHM(::System::String* KMPLKCHOOLD)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGOFALFBGPG_LKBMFNDKFHM_OFFSET))(this, KMPLKCHOOLD);
	}

	static ::System::Int32 BJKGGKJINMF(::System::String* KMPLKCHOOLD)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + AGOFALFBGPG_BJKGGKJINMF_OFFSET))(KMPLKCHOOLD);
	}

	static ::System::Int32 FHAKOJLJBML(::UnityEngine::Texture* IMLLDOHDCNC)
	{
		return ((::System::Int32(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + AGOFALFBGPG_FHAKOJLJBML_OFFSET))(IMLLDOHDCNC);
	}

	static ::System::String* EKHHNKMNBJH(::System::String* KMPLKCHOOLD)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + AGOFALFBGPG_EKHHNKMNBJH_OFFSET))(KMPLKCHOOLD);
	}

	static ::System::Int32 HAMDAHICMDJ(::System::String* HCDNICNAKMD)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + AGOFALFBGPG_HAMDAHICMDJ_OFFSET))(HCDNICNAKMD);
	}

	::System::Void KMOCGGICJLB(::UnityEngine::Texture* IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + AGOFALFBGPG_KMOCGGICJLB_OFFSET))(this, IMLLDOHDCNC);
	}

	::System::Boolean AEKIHPFCFBB(::UnityEngine::Texture* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + AGOFALFBGPG_AEKIHPFCFBB_OFFSET))(this, IMLLDOHDCNC);
	}

	::System::Void DJJCINEHGAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOFALFBGPG_DJJCINEHGAA_OFFSET))(this);
	}
};
