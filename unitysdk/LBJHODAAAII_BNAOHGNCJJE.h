#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define LBJHODAAAII_BNAOHGNCJJE_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define LBJHODAAAII_BNAOHGNCJJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17750)

inline static constexpr unsigned int LBJHODAAAII_BNAOHGNCJJE_TypeDefinitionIndex = 47271;

	struct alignas(4) LBJHODAAAII_BNAOHGNCJJE
	{
		::System::Int32 GAOAMKBNDPN; // 0x10
		::System::Int32 KIBPKPGDECO; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LBJHODAAAII_BNAOHGNCJJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHODAAAII_BNAOHGNCJJE_TOSTRING_OFFSET))(this);
		}

	};
