#pragma once
#include "unitysdk/unitysdk.h"

#define JGLBEAKJCEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x19350890)
#define JGLBEAKJCEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define JGLBEAKJCEJ_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x3E36E40)

inline static constexpr unsigned int JGLBEAKJCEJ_TypeDefinitionIndex = 50102;

	struct alignas(4) JGLBEAKJCEJ
	{
		::System::Int32 IGCDCFGJMCL; // 0x10
		static ::JGLBEAKJCEJ* StaticGet_OJPLDOMGBHI()
		{
			return (::JGLBEAKJCEJ*)UnitySDK::FromName("", "JGLBEAKJCEJ")->GetStaticField(0x13FC0);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JGLBEAKJCEJ_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGLBEAKJCEJ_CCTOR_OFFSET))();
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLBEAKJCEJ_LDAMHBBILAD_OFFSET))(this);
		}

	};
