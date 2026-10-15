#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIJALLBOCAM.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GHGAFNHHPAB_AMLHHCKLMGK_OFFSET UNITYSDK_OFFSET(0x2E7B9A0)
#define GHGAFNHHPAB_CPEAOCBKIFL_OFFSET UNITYSDK_OFFSET(0x2E7B990)
#define GHGAFNHHPAB_DJFHHOJCHLN_OFFSET UNITYSDK_OFFSET(0x2E7B980)
#define GHGAFNHHPAB_GFLCDMJONEM_OFFSET UNITYSDK_OFFSET(0x2E7B890)
#define GHGAFNHHPAB_OOGFMJBJEGC_OFFSET UNITYSDK_OFFSET(0x2E7B950)
#define GHGAFNHHPAB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x2E7B8D0)

inline static constexpr unsigned int GHGAFNHHPAB_TypeDefinitionIndex = 68486;

	struct alignas(8) GHGAFNHHPAB
	{
		::RootMotion::IKJob::IKTransformRef OILKGMEPLAE; // 0x10
		::RootMotion::IKJob::IKTransformRef DEGIGKHCIAP; // 0x20
		::RootMotion::IKJob::IKTransformRef FCNBPDILDDO; // 0x30
		::System::Boolean BEMJMAKPPFC; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single IDHNCJHPHJJ; // 0x44
		::System::Single PBIKFHGHPPM; // 0x48
		::System::Single MONAJOELDDK; // 0x4C
		::System::Single KOGDNPPFJIG; // 0x50
		::System::Single CAHDCGOAJGL; // 0x54
		::System::Single PIGAAKBFDKM; // 0x58
		::System::Single OMHJEIBOKDB; // 0x5C
		::System::Single GHONKNOMHDB; // 0x60
		::System::Single KCAJPAGGFAM; // 0x64
		::Il2CppArray<::System::Single>* PLGKCBNAPJK; // 0x68
		::Il2CppArray<::System::Single>* LKFEDNLEPCP; // 0x70
		::FIJALLBOCAM LKLKLBHCNDC; // 0x78
		::Il2CppArray<::FIJALLBOCAM>* KBFCHBFFFNP; // 0xD8
		::Il2CppArray<::UnityEngine::Vector3>* DEIGLKJJNKM; // 0xE0
		::Il2CppArray<::UnityEngine::Vector3>* JAMAMGMLPON; // 0xE8
		::System::Int32 HDONFJBIGBL; // 0xF0
		::System::Single OIAOGCDLEPA; // 0xF4
		::UnityEngine::Vector3 EEHGJFGHAOM; // 0xF8
		::UnityEngine::Vector3 DMNJEMLPAAJ; // 0x104
		::UnityEngine::Vector3 CFENCLKEAPC; // 0x110
		::UnityEngine::Vector3 CLNJDHFIPHJ; // 0x11C
		::System::Boolean JINIKEGDEIP; // 0x128
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 OGPGKENOJMO; // 0x12C
		::System::Void GFLCDMJONEM(::RootMotion::IKJob::IKTransformRef a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHGAFNHHPAB_GFLCDMJONEM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PAGKOAEOLKA(::RootMotion::IKJob::IKTransformRef a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + GHGAFNHHPAB_PAGKOAEOLKA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Vector3 OOGFMJBJEGC(::RootMotion::IKJob::IKTransformRef a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef, ::System::Single))((::PBYTE)hIl2Cpp + GHGAFNHHPAB_OOGFMJBJEGC_OFFSET))(this, a1, a2);
		}

		::System::Void DJFHHOJCHLN(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + GHGAFNHHPAB_DJFHHOJCHLN_OFFSET))(this, a1, a2);
		}

		::System::Void CPEAOCBKIFL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHGAFNHHPAB_CPEAOCBKIFL_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* AMLHHCKLMGK(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GHGAFNHHPAB_AMLHHCKLMGK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
