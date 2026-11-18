#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define NHEPPDKDPPD_BDHMMOECCEP_OFFSET UNITYSDK_OFFSET(0x7A3920)
#define NHEPPDKDPPD_BIENLHEKMCD_OFFSET UNITYSDK_OFFSET(0x359720)
#define NHEPPDKDPPD_CNGIDOLAFCE_OFFSET UNITYSDK_OFFSET(0x7A39F0)
#define NHEPPDKDPPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7A37A0)
#define NHEPPDKDPPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x7A36E0)
#define NHEPPDKDPPD_FLFDAKGMMKJ_OFFSET UNITYSDK_OFFSET(0x1728A5A0)
#define NHEPPDKDPPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7A37B0)
#define NHEPPDKDPPD_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1728A4E0)
#define NHEPPDKDPPD_JPPEEOLOGGP_1_OFFSET UNITYSDK_OFFSET(0x1728A340)
#define NHEPPDKDPPD_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x1728A320)
#define NHEPPDKDPPD_LCDHLCCAPOJ_OFFSET UNITYSDK_OFFSET(0x359720)
#define NHEPPDKDPPD_LIFOEILACPJ_OFFSET UNITYSDK_OFFSET(0x7A3AF0)
#define NHEPPDKDPPD_LPFDAJEBCDK_OFFSET UNITYSDK_OFFSET(0x7A3840)
#define NHEPPDKDPPD_NJDCIELMFPJ_OFFSET UNITYSDK_OFFSET(0x1728A360)
#define NHEPPDKDPPD_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1728A420)
#define NHEPPDKDPPD_OJPLNGOJDIJ_OFFSET UNITYSDK_OFFSET(0x3D6F30)
#define NHEPPDKDPPD_PMHOGKFMFDA_OFFSET UNITYSDK_OFFSET(0x1728A090)
#define NHEPPDKDPPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7A3830)
#define NHEPPDKDPPD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7A35F0)
#define NHEPPDKDPPD__CTOR_OFFSET UNITYSDK_OFFSET(0x3593F0)

inline static constexpr unsigned int NHEPPDKDPPD_TypeDefinitionIndex = 56882;

struct alignas(4) NHEPPDKDPPD
{
	::Foundation::Unreal::FTransform ACDOKEGBJAO; // 0x10

	::System::Void _ctor(::Foundation::Unreal::FTransform GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform))((::PBYTE)hIl2Cpp + NHEPPDKDPPD__CTOR_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Void _ctor_1(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI, ::UnityEngine::Vector3 CLMNLPKFBFA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NHEPPDKDPPD__CTOR_1_OFFSET))(this, OHOGDOMNHNK, BFBELMDIAHI, CLMNLPKFBFA);
	}

	::System::Int32 OJPLNGOJDIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_OJPLNGOJDIJ_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform LCDHLCCAPOJ(::System::Int32 LAPCGCGEPNN)
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_LCDHLCCAPOJ_OFFSET))(this, LAPCGCGEPNN);
	}

	/*
	::System::Boolean Equals(::NHEPPDKDPPD LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::NHEPPDKDPPD))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_TOSTRING_OFFSET))(this);
	}

	/*
	::NHEPPDKDPPD LPFDAJEBCDK(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::NHEPPDKDPPD(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_LPFDAJEBCDK_OFFSET))(this, OHOGDOMNHNK);
	}
	*/

	/*
	static ::NHEPPDKDPPD PMHOGKFMFDA(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::NHEPPDKDPPD(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_PMHOGKFMFDA_OFFSET))(OHOGDOMNHNK);
	}
	*/

	/*
	::NHEPPDKDPPD BDHMMOECCEP(::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::NHEPPDKDPPD(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_BDHMMOECCEP_OFFSET))(this, BFBELMDIAHI);
	}
	*/

	/*
	::NHEPPDKDPPD CNGIDOLAFCE(::UnityEngine::Vector3 CLMNLPKFBFA)
	{
		return ((::NHEPPDKDPPD(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_CNGIDOLAFCE_OFFSET))(this, CLMNLPKFBFA);
	}
	*/

	/*
	static ::Foundation::Unreal::FTransform JPPEEOLOGGP(::NHEPPDKDPPD MOEKEKKJGBB)
	{
		return ((::Foundation::Unreal::FTransform(*)(::NHEPPDKDPPD))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_JPPEEOLOGGP_OFFSET))(MOEKEKKJGBB);
	}
	*/

	/*
	static ::NHEPPDKDPPD JPPEEOLOGGP_1(::Foundation::Unreal::FTransform GKBJOPJKCLB)
	{
		return ((::NHEPPDKDPPD(*)(::Foundation::Unreal::FTransform))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_JPPEEOLOGGP_1_OFFSET))(GKBJOPJKCLB);
	}
	*/

	/*
	static ::NHEPPDKDPPD NJDCIELMFPJ(::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::NHEPPDKDPPD(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_NJDCIELMFPJ_OFFSET))(BFBELMDIAHI);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::NHEPPDKDPPD KILPCOMOCMD, ::NHEPPDKDPPD BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::NHEPPDKDPPD, ::NHEPPDKDPPD))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::NHEPPDKDPPD KILPCOMOCMD, ::NHEPPDKDPPD BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::NHEPPDKDPPD, ::NHEPPDKDPPD))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::NHEPPDKDPPD FLFDAKGMMKJ()
	{
		return ((::NHEPPDKDPPD(*)())((::PBYTE)hIl2Cpp + NHEPPDKDPPD_FLFDAKGMMKJ_OFFSET))();
	}
	*/

	::Foundation::Unreal::FTransform BIENLHEKMCD()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_BIENLHEKMCD_OFFSET))(this);
	}

	/*
	::NHEPPDKDPPD LIFOEILACPJ(::Foundation::Unreal::FTransform GKBJOPJKCLB)
	{
		return ((::NHEPPDKDPPD(*)(::PVOID, ::Foundation::Unreal::FTransform))((::PBYTE)hIl2Cpp + NHEPPDKDPPD_LIFOEILACPJ_OFFSET))(this, GKBJOPJKCLB);
	}
	*/
};
