#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/FNINLLPJNKK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class JOPCOBDEFGN;
namespace PipelineCamera { template <typename T> class CircularBuffer_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CNBICBLHLDC_BFNNPAKHKNO_OFFSET UNITYSDK_OFFSET(0x1687F4F0)
#define CNBICBLHLDC_DKCCELBNBLM_1_OFFSET UNITYSDK_OFFSET(0x1687FAB0)
#define CNBICBLHLDC_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x1687F5F0)
#define CNBICBLHLDC_EDANDHCJOGC_OFFSET UNITYSDK_OFFSET(0x16881CD0)
#define CNBICBLHLDC_ENADCIEBIBL_OFFSET UNITYSDK_OFFSET(0x1687FF10)
#define CNBICBLHLDC_GAABLLDKDOG_1_OFFSET UNITYSDK_OFFSET(0x16881D60)
#define CNBICBLHLDC_GAABLLDKDOG_OFFSET UNITYSDK_OFFSET(0x16881B70)
#define CNBICBLHLDC_JBIKJGNPEAA_OFFSET UNITYSDK_OFFSET(0x16881A80)
#define CNBICBLHLDC_MOAHEPGLEEN_OFFSET UNITYSDK_OFFSET(0x16881BE0)
#define CNBICBLHLDC_NCHIECGLAKF_OFFSET UNITYSDK_OFFSET(0x16881580)
#define CNBICBLHLDC_NDJEKEJKPLF_OFFSET UNITYSDK_OFFSET(0x1687F570)
#define CNBICBLHLDC__CCTOR_OFFSET UNITYSDK_OFFSET(0x16881560)
#define CNBICBLHLDC__CTOR_OFFSET UNITYSDK_OFFSET(0x16881510)

inline static constexpr unsigned int CNBICBLHLDC_TypeDefinitionIndex = 88275;

class CNBICBLHLDC : public ::System::Object
{
public:
	static ::UnityEngine::Color32* StaticGet_AAAJFKMABPD()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(CNBICBLHLDC_TypeDefinitionIndex)->GetStaticField(0x13300);
	}
	static ::UnityEngine::Color32* StaticGet_GOGPMKDPFOF()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(CNBICBLHLDC_TypeDefinitionIndex)->GetStaticField(0x13304);
	}
	::PipelineCamera::CircularBuffer_1<::System::Object*>* EJBNGAHODJJ; // 0x10
	::System::Single KKJKPJEGKJC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBICBLHLDC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNBICBLHLDC__CCTOR_OFFSET))();
	}

	::System::Void BFNNPAKHKNO(::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNBICBLHLDC_BFNNPAKHKNO_OFFSET))(this, MDPPNMIPDMP);
	}

	::System::Single NDJEKEJKPLF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBICBLHLDC_NDJEKEJKPLF_OFFSET))(this);
	}

	::System::Void DKCCELBNBLM(::UnityEngine::Vector2& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CNBICBLHLDC_DKCCELBNBLM_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void DKCCELBNBLM_1(::System::Single BEKLCLFIDKF, ::UnityEngine::Vector2& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CNBICBLHLDC_DKCCELBNBLM_1_OFFSET))(this, BEKLCLFIDKF, LJBPECKCCEA);
	}

	::System::Void ENADCIEBIBL(::JOPCOBDEFGN* LLOIGKNKHAH, ::System::Int32 LBPIPEAKPDG, ::System::Single BFPDDMILKBF, ::System::Single MDPPNMIPDMP, ::System::Single EFEODALHHOI, ::System::Nullable_1<::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>> OKPOHIHEJEE)
	{
		return ((::System::Void(*)(::PVOID, ::JOPCOBDEFGN*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Nullable_1<::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>))((::PBYTE)hIl2Cpp + CNBICBLHLDC_ENADCIEBIBL_OFFSET))(this, LLOIGKNKHAH, LBPIPEAKPDG, BFPDDMILKBF, MDPPNMIPDMP, EFEODALHHOI, OKPOHIHEJEE);
	}

	::System::Int32 NCHIECGLAKF(::System::Span_1_9011FAD97750D224<::FNINLLPJNKK> PMAMMGFJAJL, ::System::Single BFPDDMILKBF, ::System::Single CDMKODJJBKH, ::System::Func_2<::UnityEngine::Vector2, ::System::Single>* GKDEHDKBFLO, ::System::Single& FBCNNPLFAAG, ::System::Single& GOKEGHENOGP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::FNINLLPJNKK>, ::System::Single, ::System::Single, ::System::Func_2<::UnityEngine::Vector2, ::System::Single>*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CNBICBLHLDC_NCHIECGLAKF_OFFSET))(this, PMAMMGFJAJL, BFPDDMILKBF, CDMKODJJBKH, GKDEHDKBFLO, FBCNNPLFAAG, GOKEGHENOGP);
	}

	static ::System::String* JBIKJGNPEAA(::System::Single EGEGIMGMJHN, ::System::Boolean CLPCPPDNLFM)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CNBICBLHLDC_JBIKJGNPEAA_OFFSET))(EGEGIMGMJHN, CLPCPPDNLFM);
	}

	::System::Void GAABLLDKDOG(::System::Single BEKLCLFIDKF, ::UnityEngine::Vector2& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CNBICBLHLDC_GAABLLDKDOG_OFFSET))(this, BEKLCLFIDKF, LJBPECKCCEA);
	}

	static ::System::String* MOAHEPGLEEN(::System::Single EGEGIMGMJHN, ::System::Boolean CLPCPPDNLFM)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CNBICBLHLDC_MOAHEPGLEEN_OFFSET))(EGEGIMGMJHN, CLPCPPDNLFM);
	}

	static ::System::Void EDANDHCJOGC(::System::Single& FBCNNPLFAAG, ::System::Single& GOKEGHENOGP)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CNBICBLHLDC_EDANDHCJOGC_OFFSET))(FBCNNPLFAAG, GOKEGHENOGP);
	}

	::System::Void GAABLLDKDOG_1(::UnityEngine::Vector2& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CNBICBLHLDC_GAABLLDKDOG_1_OFFSET))(this, LJBPECKCCEA);
	}
};
