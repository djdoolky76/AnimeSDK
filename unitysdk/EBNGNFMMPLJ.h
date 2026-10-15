#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }

#define EBNGNFMMPLJ_CIMKMBDNGIK_OFFSET UNITYSDK_OFFSET(0x23064A0)
#define EBNGNFMMPLJ_DNCMPPDADOO_OFFSET UNITYSDK_OFFSET(0x23063E0)
#define EBNGNFMMPLJ_FDJEJNODIOB_OFFSET UNITYSDK_OFFSET(0x23062D0)
#define EBNGNFMMPLJ_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xC200)
#define EBNGNFMMPLJ_JDHECGCJKLE_OFFSET UNITYSDK_OFFSET(0x1D10)
#define EBNGNFMMPLJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x2306370)
#define EBNGNFMMPLJ_NNJCFFGFKAB_OFFSET UNITYSDK_OFFSET(0x2306410)
#define EBNGNFMMPLJ_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x23062E0)
#define EBNGNFMMPLJ_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xE7630)

	struct alignas(8) EBNGNFMMPLJ
	{
		::System::Boolean _IsInitialized_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single HBDJCFFDGDD; // 0x14
		::UnityEngine::AnimationCurve* PNOHBBMHGLB; // 0x18
		::System::Single NCFGEFEFDFA; // 0x20
		::System::Single BJBOBFEIKJM; // 0x24
		::UnityEngine::Vector3 OIKIGJKPDBO; // 0x28
		::System::Void FDJEJNODIOB(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + EBNGNFMMPLJ_FDJEJNODIOB_OFFSET))(this, a1, a2);
		}

		::System::Void OINBDMGFFJL(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EBNGNFMMPLJ_OINBDMGFFJL_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBNGNFMMPLJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 DNCMPPDADOO(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EBNGNFMMPLJ_DNCMPPDADOO_OFFSET))(this, a1);
		}

		::System::Single NNJCFFGFKAB(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBNGNFMMPLJ_NNJCFFGFKAB_OFFSET))(this, a1);
		}

		::System::Boolean CIMKMBDNGIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNGNFMMPLJ_CIMKMBDNGIK_OFFSET))(this);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNGNFMMPLJ_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Void set_IsInitialized(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBNGNFMMPLJ_SET_ISINITIALIZED_OFFSET))(this, a1);
		}

		::System::Single JDHECGCJKLE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNGNFMMPLJ_JDHECGCJKLE_OFFSET))(this);
		}

	};
