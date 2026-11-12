#pragma once
#include "unitysdk/unitysdk.h"

#define JIECLEBBJBK_CTOR_OFFSET UNITYSDK_OFFSET(0x13290)

inline static constexpr unsigned int JIECLEBBJBK_TypeDefinitionIndex = 85126;

	struct alignas(4) JIECLEBBJBK
	{
		::System::UInt64 HOKPHCBNHNF; // 0x10
		::System::UInt64 LBAFDJKPKEP; // 0x18
		static ::JIECLEBBJBK* StaticGet_COAHELMPGLI()
		{
			return (::JIECLEBBJBK*)UnitySDK::FromName("", "JIECLEBBJBK")->GetStaticField(0x16220);
		}

		::System::Void _ctor(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + JIECLEBBJBK_CTOR_OFFSET))(this, a1, a2);
		}

	};
