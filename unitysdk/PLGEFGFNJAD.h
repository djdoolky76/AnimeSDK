#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLLBGBCAMCH.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AEMCAOEICDG;
class GEIHCPAOKKK;

#define PLGEFGFNJAD_ACALKPGHILE_OFFSET UNITYSDK_OFFSET(0x70ABD0)
#define PLGEFGFNJAD_AJMDOICPNIM_OFFSET UNITYSDK_OFFSET(0x70A5F0)
#define PLGEFGFNJAD_DAJDECALBOM_OFFSET UNITYSDK_OFFSET(0x70A710)
#define PLGEFGFNJAD_DMKJINNODLI_OFFSET UNITYSDK_OFFSET(0x70A920)
#define PLGEFGFNJAD_ECACLCCKDHB_OFFSET UNITYSDK_OFFSET(0x70ACA0)
#define PLGEFGFNJAD_EKJGODCFCGE_OFFSET UNITYSDK_OFFSET(0x70AA40)
#define PLGEFGFNJAD_FKMOKFNLFOA_OFFSET UNITYSDK_OFFSET(0x70AAF0)
#define PLGEFGFNJAD_FLCNHNDGPNI_OFFSET UNITYSDK_OFFSET(0x70A900)
#define PLGEFGFNJAD_GGJHFNDGDOC_OFFSET UNITYSDK_OFFSET(0x70AA20)
#define PLGEFGFNJAD_GJOHBNFPABC_OFFSET UNITYSDK_OFFSET(0x70A6A0)
#define PLGEFGFNJAD_IJHGGNKINHO_OFFSET UNITYSDK_OFFSET(0x70AB20)
#define PLGEFGFNJAD_IKJCDONBGAF_OFFSET UNITYSDK_OFFSET(0x70A860)
#define PLGEFGFNJAD_IMJIEIFFHJE_OFFSET UNITYSDK_OFFSET(0x70A540)
#define PLGEFGFNJAD_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x70AA00)
#define PLGEFGFNJAD_JPPNFBOFPLA_OFFSET UNITYSDK_OFFSET(0x70AC00)
#define PLGEFGFNJAD_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x70A9E0)
#define PLGEFGFNJAD_NLDHJLBPLHC_OFFSET UNITYSDK_OFFSET(0x70A6F0)
#define PLGEFGFNJAD_NLPAGMOKLHE_OFFSET UNITYSDK_OFFSET(0x70A6D0)
#define PLGEFGFNJAD__CTOR_OFFSET UNITYSDK_OFFSET(0x3F0CD0)

inline static constexpr unsigned int PLGEFGFNJAD_TypeDefinitionIndex = 65739;

struct alignas(8) PLGEFGFNJAD
{
	::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32> BHAMJDPEBGN; // 0x10
	::System::Byte _padding0[0x8];
	::Unity::Collections::NativeList_1<::HLLBGBCAMCH> DLJBMPBHGNK; // 0x20

	::System::Void _ctor(::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32> PPFDDJIJPAG, ::Unity::Collections::NativeList_1<::HLLBGBCAMCH> GBIMKAAOEBJ)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32>, ::Unity::Collections::NativeList_1<::HLLBGBCAMCH>))((::PBYTE)hIl2Cpp + PLGEFGFNJAD__CTOR_OFFSET))(this, PPFDDJIJPAG, GBIMKAAOEBJ);
	}

	::UnityEngine::Vector3 IMJIEIFFHJE(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Int32 KKIIJGFNHOD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::GEIHCPAOKKK*, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_IMJIEIFFHJE_OFFSET))(this, OHPJHPEOFLD, KKIIJGFNHOD);
	}

	::UnityEngine::Vector3 AJMDOICPNIM(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Int32 KKIIJGFNHOD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::GEIHCPAOKKK*, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_AJMDOICPNIM_OFFSET))(this, OHPJHPEOFLD, KKIIJGFNHOD);
	}

	::System::Void GJOHBNFPABC(::System::Int32 KKIIJGFNHOD, ::UnityEngine::Vector3 DLJDBOIFHIH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_GJOHBNFPABC_OFFSET))(this, KKIIJGFNHOD, DLJDBOIFHIH);
	}

	::UnityEngine::Vector3 NLPAGMOKLHE(::System::Int32 KKIIJGFNHOD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_NLPAGMOKLHE_OFFSET))(this, KKIIJGFNHOD);
	}

	::UnityEngine::Vector3 NLDHJLBPLHC(::System::Int32 KKIIJGFNHOD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_NLDHJLBPLHC_OFFSET))(this, KKIIJGFNHOD);
	}

	::UnityEngine::Vector3 DAJDECALBOM(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Int32 KKIIJGFNHOD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::GEIHCPAOKKK*, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_DAJDECALBOM_OFFSET))(this, OHPJHPEOFLD, KKIIJGFNHOD);
	}

	::UnityEngine::Quaternion IKJCDONBGAF(::AEMCAOEICDG* OHPJHPEOFLD, ::System::Int32 KKIIJGFNHOD)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::AEMCAOEICDG*, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_IKJCDONBGAF_OFFSET))(this, OHPJHPEOFLD, KKIIJGFNHOD);
	}

	::UnityEngine::Vector3 FLCNHNDGPNI(::System::Int32 KKIIJGFNHOD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_FLCNHNDGPNI_OFFSET))(this, KKIIJGFNHOD);
	}

	::HLLBGBCAMCH& DMKJINNODLI(::System::Int32 KKIIJGFNHOD)
	{
		return ((::HLLBGBCAMCH&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_DMKJINNODLI_OFFSET))(this, KKIIJGFNHOD);
	}

	::UnityEngine::Vector3 LBCBPEJEHNB(::System::Int32 KKIIJGFNHOD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_LBCBPEJEHNB_OFFSET))(this, KKIIJGFNHOD);
	}

	::UnityEngine::Quaternion INMGLPLEEIK(::System::Int32 KKIIJGFNHOD)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_INMGLPLEEIK_OFFSET))(this, KKIIJGFNHOD);
	}

	::UnityEngine::Vector3 GGJHFNDGDOC(::System::Int32 KKIIJGFNHOD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_GGJHFNDGDOC_OFFSET))(this, KKIIJGFNHOD);
	}

	::UnityEngine::Vector3 EKJGODCFCGE(::AEMCAOEICDG* OHPJHPEOFLD, ::System::Int32 KKIIJGFNHOD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::AEMCAOEICDG*, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_EKJGODCFCGE_OFFSET))(this, OHPJHPEOFLD, KKIIJGFNHOD);
	}

	::System::Void FKMOKFNLFOA(::System::Int32 KKIIJGFNHOD, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_FKMOKFNLFOA_OFFSET))(this, KKIIJGFNHOD, BFBELMDIAHI);
	}

	::UnityEngine::Vector3 IJHGGNKINHO(::AEMCAOEICDG* OHPJHPEOFLD, ::System::Int32 KKIIJGFNHOD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::AEMCAOEICDG*, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_IJHGGNKINHO_OFFSET))(this, OHPJHPEOFLD, KKIIJGFNHOD);
	}

	::System::Void ACALKPGHILE(::System::Int32 KKIIJGFNHOD, ::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_ACALKPGHILE_OFFSET))(this, KKIIJGFNHOD, OHOGDOMNHNK);
	}

	::UnityEngine::Quaternion JPPNFBOFPLA(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Int32 KKIIJGFNHOD)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::GEIHCPAOKKK*, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_JPPNFBOFPLA_OFFSET))(this, OHPJHPEOFLD, KKIIJGFNHOD);
	}

	::UnityEngine::Vector3 ECACLCCKDHB(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Int32 KKIIJGFNHOD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::GEIHCPAOKKK*, ::System::Int32))((::PBYTE)hIl2Cpp + PLGEFGFNJAD_ECACLCCKDHB_OFFSET))(this, OHPJHPEOFLD, KKIIJGFNHOD);
	}
};
