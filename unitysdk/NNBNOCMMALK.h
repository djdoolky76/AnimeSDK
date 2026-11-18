#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Mathematics/float2.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/Unity/Mathematics/float4x4.h"

namespace UnityEngine { class Camera; }

#define NNBNOCMMALK_BPOBJBANKFE_OFFSET UNITYSDK_OFFSET(0xE0AA4B0)
#define NNBNOCMMALK_DNGEDJOJDJE_OFFSET UNITYSDK_OFFSET(0xE0AA5E0)
#define NNBNOCMMALK_EFKAAGGIDNM_OFFSET UNITYSDK_OFFSET(0xE0AA8E0)
#define NNBNOCMMALK_FCPPNKOKIOL_OFFSET UNITYSDK_OFFSET(0xE0AAAA0)
#define NNBNOCMMALK_FPMIDJLCDPL_OFFSET UNITYSDK_OFFSET(0xE0AAB30)
#define NNBNOCMMALK_IIGAAKLFHDJ_OFFSET UNITYSDK_OFFSET(0xE0AA2F0)
#define NNBNOCMMALK_KLECJBEHHAH_OFFSET UNITYSDK_OFFSET(0xE0AA840)
#define NNBNOCMMALK_LJHGGEEPPML_OFFSET UNITYSDK_OFFSET(0xE0AA760)
#define NNBNOCMMALK_LMJHGIHOBMG_OFFSET UNITYSDK_OFFSET(0xE0AAC60)

inline static constexpr unsigned int NNBNOCMMALK_TypeDefinitionIndex = 48506;

class NNBNOCMMALK : public ::System::Object
{
public:
	static ::Unity::Mathematics::float4x4 IIGAAKLFHDJ(::UnityEngine::Camera* LLFDABJAHII)
	{
		return ((::Unity::Mathematics::float4x4(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + NNBNOCMMALK_IIGAAKLFHDJ_OFFSET))(LLFDABJAHII);
	}

	static ::System::Boolean BPOBJBANKFE(::Unity::Mathematics::float4x4& JGPIGFLIDOJ, ::Unity::Mathematics::float3 BAECLPHLLHO)
	{
		return ((::System::Boolean(*)(::Unity::Mathematics::float4x4&, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + NNBNOCMMALK_BPOBJBANKFE_OFFSET))(JGPIGFLIDOJ, BAECLPHLLHO);
	}

	static ::Unity::Mathematics::float2 DNGEDJOJDJE(::Unity::Mathematics::float4x4& JGPIGFLIDOJ, ::Unity::Mathematics::float3 BAECLPHLLHO, ::Unity::Mathematics::float2 BNCHENOPKCB)
	{
		return ((::Unity::Mathematics::float2(*)(::Unity::Mathematics::float4x4&, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + NNBNOCMMALK_DNGEDJOJDJE_OFFSET))(JGPIGFLIDOJ, BAECLPHLLHO, BNCHENOPKCB);
	}

	static ::System::Boolean LJHGGEEPPML(::Unity::Mathematics::float3 GGDJGOLJAHC, ::System::Single JNOMOFOMFEK, ::System::Single FINIAEFOGIK, ::System::Single BGPJHNJKHIN, ::System::Single PMEHNJABPAN)
	{
		return ((::System::Boolean(*)(::Unity::Mathematics::float3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NNBNOCMMALK_LJHGGEEPPML_OFFSET))(GGDJGOLJAHC, JNOMOFOMFEK, FINIAEFOGIK, BGPJHNJKHIN, PMEHNJABPAN);
	}

	static ::System::Single KLECJBEHHAH(::Unity::Mathematics::float3 EJCBEJMGFAJ, ::Unity::Mathematics::float3 EBFCACIEKBC)
	{
		return ((::System::Single(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + NNBNOCMMALK_KLECJBEHHAH_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::Unity::Mathematics::float2 EFKAAGGIDNM(::Unity::Mathematics::float4x4& JGPIGFLIDOJ, ::Unity::Mathematics::float3 BAECLPHLLHO, ::Unity::Mathematics::float2 BNCHENOPKCB, ::Unity::Mathematics::float2 EHCEHPABKMJ, ::Unity::Mathematics::float2 OEMOADBHGCJ)
	{
		return ((::Unity::Mathematics::float2(*)(::Unity::Mathematics::float4x4&, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + NNBNOCMMALK_EFKAAGGIDNM_OFFSET))(JGPIGFLIDOJ, BAECLPHLLHO, BNCHENOPKCB, EHCEHPABKMJ, OEMOADBHGCJ);
	}

	static ::System::Single FCPPNKOKIOL(::Unity::Mathematics::float3 EJCBEJMGFAJ, ::Unity::Mathematics::float3 EBFCACIEKBC)
	{
		return ((::System::Single(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + NNBNOCMMALK_FCPPNKOKIOL_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::Unity::Mathematics::float3 FPMIDJLCDPL(::Unity::Mathematics::float4x4& JGPIGFLIDOJ, ::Unity::Mathematics::float3 BAECLPHLLHO)
	{
		return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float4x4&, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + NNBNOCMMALK_FPMIDJLCDPL_OFFSET))(JGPIGFLIDOJ, BAECLPHLLHO);
	}

	static ::Unity::Mathematics::float2 LMJHGIHOBMG(::Unity::Mathematics::float2 ILOHHLNGEHM, ::Unity::Mathematics::float2 BNCHENOPKCB, ::Unity::Mathematics::float2 EHCEHPABKMJ, ::Unity::Mathematics::float2 OEMOADBHGCJ)
	{
		return ((::Unity::Mathematics::float2(*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + NNBNOCMMALK_LMJHGIHOBMG_OFFSET))(ILOHHLNGEHM, BNCHENOPKCB, EHCEHPABKMJ, OEMOADBHGCJ);
	}
};
