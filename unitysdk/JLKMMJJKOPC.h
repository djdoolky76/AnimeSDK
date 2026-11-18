#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/FNINLLPJNKK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class JOPCOBDEFGN;
namespace PipelineCamera { template <typename T> class CircularBuffer_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JLKMMJJKOPC_BFNNPAKHKNO_OFFSET UNITYSDK_OFFSET(0x13096AB0)
#define JLKMMJJKOPC_DKCCELBNBLM_1_OFFSET UNITYSDK_OFFSET(0x13097070)
#define JLKMMJJKOPC_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x13096BB0)
#define JLKMMJJKOPC_EDANDHCJOGC_OFFSET UNITYSDK_OFFSET(0x130999E0)
#define JLKMMJJKOPC_ENADCIEBIBL_OFFSET UNITYSDK_OFFSET(0x130974D0)
#define JLKMMJJKOPC_JBIKJGNPEAA_OFFSET UNITYSDK_OFFSET(0x130992E0)
#define JLKMMJJKOPC_JJALLEJAAOH_OFFSET UNITYSDK_OFFSET(0x130998F0)
#define JLKMMJJKOPC_MAMHEGHJAKD_1_OFFSET UNITYSDK_OFFSET(0x13099A70)
#define JLKMMJJKOPC_MAMHEGHJAKD_OFFSET UNITYSDK_OFFSET(0x13099260)
#define JLKMMJJKOPC_MOAHEPGLEEN_OFFSET UNITYSDK_OFFSET(0x13099170)
#define JLKMMJJKOPC_NCHIECGLAKF_OFFSET UNITYSDK_OFFSET(0x130993D0)
#define JLKMMJJKOPC_NDJEKEJKPLF_OFFSET UNITYSDK_OFFSET(0x13096B30)
#define JLKMMJJKOPC__CCTOR_OFFSET UNITYSDK_OFFSET(0x13099150)
#define JLKMMJJKOPC__CTOR_OFFSET UNITYSDK_OFFSET(0x13099100)

inline static constexpr unsigned int JLKMMJJKOPC_TypeDefinitionIndex = 45162;

class JLKMMJJKOPC : public ::System::Object
{
public:
	static ::UnityEngine::Color32* StaticGet_ONCJLKGFKDN()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(JLKMMJJKOPC_TypeDefinitionIndex)->GetStaticField(0x11420);
	}
	static ::UnityEngine::Color32* StaticGet_AJIEEGOIEFP()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(JLKMMJJKOPC_TypeDefinitionIndex)->GetStaticField(0x11424);
	}
	static ::UnityEngine::Color32* StaticGet_AMBGIBBBKGO()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(JLKMMJJKOPC_TypeDefinitionIndex)->GetStaticField(0x11428);
	}
	::PipelineCamera::CircularBuffer_1<::System::Object*>* EJBNGAHODJJ; // 0x10
	::System::Single KKJKPJEGKJC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKMMJJKOPC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLKMMJJKOPC__CCTOR_OFFSET))();
	}

	::System::Void BFNNPAKHKNO(::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JLKMMJJKOPC_BFNNPAKHKNO_OFFSET))(this, MDPPNMIPDMP);
	}

	::System::Single NDJEKEJKPLF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKMMJJKOPC_NDJEKEJKPLF_OFFSET))(this);
	}

	::System::Void DKCCELBNBLM(::UnityEngine::Quaternion& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + JLKMMJJKOPC_DKCCELBNBLM_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void DKCCELBNBLM_1(::System::Single BEKLCLFIDKF, ::UnityEngine::Quaternion& BFBELMDIAHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + JLKMMJJKOPC_DKCCELBNBLM_1_OFFSET))(this, BEKLCLFIDKF, BFBELMDIAHI);
	}

	::System::Void ENADCIEBIBL(::JOPCOBDEFGN* LLOIGKNKHAH, ::System::Int32 LBPIPEAKPDG, ::System::Single BFPDDMILKBF, ::System::Single MDPPNMIPDMP, ::System::Single EFEODALHHOI, ::System::Nullable_1<::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion>> OKPOHIHEJEE)
	{
		return ((::System::Void(*)(::PVOID, ::JOPCOBDEFGN*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Nullable_1<::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion>>))((::PBYTE)hIl2Cpp + JLKMMJJKOPC_ENADCIEBIBL_OFFSET))(this, LLOIGKNKHAH, LBPIPEAKPDG, BFPDDMILKBF, MDPPNMIPDMP, EFEODALHHOI, OKPOHIHEJEE);
	}

	static ::System::String* MOAHEPGLEEN(::System::Single EGEGIMGMJHN, ::System::Boolean CLPCPPDNLFM)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + JLKMMJJKOPC_MOAHEPGLEEN_OFFSET))(EGEGIMGMJHN, CLPCPPDNLFM);
	}

	::System::Void MAMHEGHJAKD(::UnityEngine::Quaternion& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + JLKMMJJKOPC_MAMHEGHJAKD_OFFSET))(this, LJBPECKCCEA);
	}

	static ::System::String* JBIKJGNPEAA(::System::Single EGEGIMGMJHN, ::System::Boolean CLPCPPDNLFM)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + JLKMMJJKOPC_JBIKJGNPEAA_OFFSET))(EGEGIMGMJHN, CLPCPPDNLFM);
	}

	::System::Int32 NCHIECGLAKF(::System::Span_1_9011FAD97750D224<::FNINLLPJNKK> PMAMMGFJAJL, ::System::Single BFPDDMILKBF, ::System::Single CDMKODJJBKH, ::System::Func_2<::UnityEngine::Vector3, ::System::Single>* GKDEHDKBFLO, ::System::Single& FBCNNPLFAAG, ::System::Single& GOKEGHENOGP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::FNINLLPJNKK>, ::System::Single, ::System::Single, ::System::Func_2<::UnityEngine::Vector3, ::System::Single>*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + JLKMMJJKOPC_NCHIECGLAKF_OFFSET))(this, PMAMMGFJAJL, BFPDDMILKBF, CDMKODJJBKH, GKDEHDKBFLO, FBCNNPLFAAG, GOKEGHENOGP);
	}

	static ::System::String* JJALLEJAAOH(::System::Single EGEGIMGMJHN, ::System::Boolean CLPCPPDNLFM)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + JLKMMJJKOPC_JJALLEJAAOH_OFFSET))(EGEGIMGMJHN, CLPCPPDNLFM);
	}

	static ::System::Void EDANDHCJOGC(::System::Single& FBCNNPLFAAG, ::System::Single& GOKEGHENOGP)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + JLKMMJJKOPC_EDANDHCJOGC_OFFSET))(FBCNNPLFAAG, GOKEGHENOGP);
	}

	::System::Void MAMHEGHJAKD_1(::System::Single BEKLCLFIDKF, ::UnityEngine::Quaternion& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + JLKMMJJKOPC_MAMHEGHJAKD_1_OFFSET))(this, BEKLCLFIDKF, LJBPECKCCEA);
	}
};
