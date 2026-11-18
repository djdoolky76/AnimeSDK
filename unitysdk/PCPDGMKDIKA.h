#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/FNINLLPJNKK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class JOPCOBDEFGN;
namespace PipelineCamera { template <typename T> class CircularBuffer_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PCPDGMKDIKA_BFNNPAKHKNO_OFFSET UNITYSDK_OFFSET(0x11B5D700)
#define PCPDGMKDIKA_DBJKNABHIJG_1_OFFSET UNITYSDK_OFFSET(0x11B605C0)
#define PCPDGMKDIKA_DBJKNABHIJG_OFFSET UNITYSDK_OFFSET(0x11B60280)
#define PCPDGMKDIKA_DKCCELBNBLM_1_OFFSET UNITYSDK_OFFSET(0x11B5F8B0)
#define PCPDGMKDIKA_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x11B5F410)
#define PCPDGMKDIKA_EDANDHCJOGC_OFFSET UNITYSDK_OFFSET(0x11B60640)
#define PCPDGMKDIKA_ENADCIEBIBL_OFFSET UNITYSDK_OFFSET(0x11B5D780)
#define PCPDGMKDIKA_JBIKJGNPEAA_OFFSET UNITYSDK_OFFSET(0x11B604D0)
#define PCPDGMKDIKA_JJALLEJAAOH_OFFSET UNITYSDK_OFFSET(0x11B602F0)
#define PCPDGMKDIKA_MOAHEPGLEEN_OFFSET UNITYSDK_OFFSET(0x11B603E0)
#define PCPDGMKDIKA_NCHIECGLAKF_OFFSET UNITYSDK_OFFSET(0x11B5FD60)
#define PCPDGMKDIKA_NDJEKEJKPLF_OFFSET UNITYSDK_OFFSET(0x11B5F390)
#define PCPDGMKDIKA__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B5FD40)
#define PCPDGMKDIKA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B5FCF0)

inline static constexpr unsigned int PCPDGMKDIKA_TypeDefinitionIndex = 66791;

class PCPDGMKDIKA : public ::System::Object
{
public:
	static ::UnityEngine::Color32* StaticGet_AAAJFKMABPD()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(PCPDGMKDIKA_TypeDefinitionIndex)->GetStaticField(0x13270);
	}
	static ::UnityEngine::Color32* StaticGet_GOGPMKDPFOF()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(PCPDGMKDIKA_TypeDefinitionIndex)->GetStaticField(0x13274);
	}
	static ::UnityEngine::Color32* StaticGet_DHHOGCDIPGG()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(PCPDGMKDIKA_TypeDefinitionIndex)->GetStaticField(0x13278);
	}
	::PipelineCamera::CircularBuffer_1<::System::Object*>* EJBNGAHODJJ; // 0x10
	::System::Single KKJKPJEGKJC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPDGMKDIKA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCPDGMKDIKA__CCTOR_OFFSET))();
	}

	::System::Void BFNNPAKHKNO(::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PCPDGMKDIKA_BFNNPAKHKNO_OFFSET))(this, MDPPNMIPDMP);
	}

	::System::Void ENADCIEBIBL(::JOPCOBDEFGN* LLOIGKNKHAH, ::System::Int32 LBPIPEAKPDG, ::System::Single BFPDDMILKBF, ::System::Single MDPPNMIPDMP, ::System::Single EFEODALHHOI, ::System::Nullable_1<::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>> OKPOHIHEJEE)
	{
		return ((::System::Void(*)(::PVOID, ::JOPCOBDEFGN*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Nullable_1<::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>>))((::PBYTE)hIl2Cpp + PCPDGMKDIKA_ENADCIEBIBL_OFFSET))(this, LLOIGKNKHAH, LBPIPEAKPDG, BFPDDMILKBF, MDPPNMIPDMP, EFEODALHHOI, OKPOHIHEJEE);
	}

	::System::Single NDJEKEJKPLF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPDGMKDIKA_NDJEKEJKPLF_OFFSET))(this);
	}

	::System::Void DKCCELBNBLM(::UnityEngine::Vector3& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PCPDGMKDIKA_DKCCELBNBLM_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void DKCCELBNBLM_1(::System::Single BEKLCLFIDKF, ::UnityEngine::Vector3& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PCPDGMKDIKA_DKCCELBNBLM_1_OFFSET))(this, BEKLCLFIDKF, LJBPECKCCEA);
	}

	::System::Int32 NCHIECGLAKF(::System::Span_1_9011FAD97750D224<::FNINLLPJNKK> PMAMMGFJAJL, ::System::Single BFPDDMILKBF, ::System::Single CDMKODJJBKH, ::System::Func_2<::UnityEngine::Vector3, ::System::Single>* GKDEHDKBFLO, ::System::Single& FBCNNPLFAAG, ::System::Single& GOKEGHENOGP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::FNINLLPJNKK>, ::System::Single, ::System::Single, ::System::Func_2<::UnityEngine::Vector3, ::System::Single>*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + PCPDGMKDIKA_NCHIECGLAKF_OFFSET))(this, PMAMMGFJAJL, BFPDDMILKBF, CDMKODJJBKH, GKDEHDKBFLO, FBCNNPLFAAG, GOKEGHENOGP);
	}

	::System::Void DBJKNABHIJG(::System::Single BEKLCLFIDKF, ::UnityEngine::Vector3& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PCPDGMKDIKA_DBJKNABHIJG_OFFSET))(this, BEKLCLFIDKF, LJBPECKCCEA);
	}

	static ::System::String* JJALLEJAAOH(::System::Single EGEGIMGMJHN, ::System::Boolean CLPCPPDNLFM)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PCPDGMKDIKA_JJALLEJAAOH_OFFSET))(EGEGIMGMJHN, CLPCPPDNLFM);
	}

	static ::System::String* MOAHEPGLEEN(::System::Single EGEGIMGMJHN, ::System::Boolean CLPCPPDNLFM)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PCPDGMKDIKA_MOAHEPGLEEN_OFFSET))(EGEGIMGMJHN, CLPCPPDNLFM);
	}

	static ::System::String* JBIKJGNPEAA(::System::Single EGEGIMGMJHN, ::System::Boolean CLPCPPDNLFM)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PCPDGMKDIKA_JBIKJGNPEAA_OFFSET))(EGEGIMGMJHN, CLPCPPDNLFM);
	}

	::System::Void DBJKNABHIJG_1(::UnityEngine::Vector3& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PCPDGMKDIKA_DBJKNABHIJG_1_OFFSET))(this, LJBPECKCCEA);
	}

	static ::System::Void EDANDHCJOGC(::System::Single& FBCNNPLFAAG, ::System::Single& GOKEGHENOGP)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + PCPDGMKDIKA_EDANDHCJOGC_OFFSET))(FBCNNPLFAAG, GOKEGHENOGP);
	}
};
