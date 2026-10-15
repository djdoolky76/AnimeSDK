#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JGDJANDMKOB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB192980)
#define JGDJANDMKOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x10410)
#define JGDJANDMKOB_CTOR_OFFSET UNITYSDK_OFFSET(0x10400)
#define JGDJANDMKOB_LCJMKJPECAP_1_OFFSET UNITYSDK_OFFSET(0x10540)
#define JGDJANDMKOB_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x104B0)
#define JGDJANDMKOB_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x10450)

inline static constexpr unsigned int JGDJANDMKOB_TypeDefinitionIndex = 60649;

	struct alignas(4) JGDJANDMKOB
	{
		::UnityEngine::Vector2 EFNAJMADAHM; // 0x10
		::UnityEngine::Vector2 NKAACMGNNPK; // 0x18
		static ::JGDJANDMKOB* StaticGet_IGCMPJGPOND()
		{
			return (::JGDJANDMKOB*)UnitySDK::FromName("", "JGDJANDMKOB")->GetStaticField(0x36F0);
		}

		static ::JGDJANDMKOB* StaticGet_COAHELMPGLI()
		{
			return (::JGDJANDMKOB*)UnitySDK::FromName("", "JGDJANDMKOB")->GetStaticField(0x3700);
		}

		::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JGDJANDMKOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + JGDJANDMKOB_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGDJANDMKOB_CCTOR_OFFSET))();
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDJANDMKOB_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean LCJMKJPECAP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JGDJANDMKOB_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP_1(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JGDJANDMKOB_LCJMKJPECAP_1_OFFSET))(this, a1);
		}

	};
