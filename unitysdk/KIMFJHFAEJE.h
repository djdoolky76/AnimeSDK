#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOHNIMLCODA.h"
class FJKMGCKMNNA;
namespace System { class String; }

#define KIMFJHFAEJE_MJKMLOELJHO_OFFSET UNITYSDK_OFFSET(0xB435A80)
#define KIMFJHFAEJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14ED0)

inline static constexpr unsigned int KIMFJHFAEJE_TypeDefinitionIndex = 64034;

	struct alignas(4) KIMFJHFAEJE
	{
		::MOHNIMLCODA DCMLEEPIBNA; // 0x10
		::System::UInt32 IOCPEGNKDMA; // 0x14
		/*
		static ::KIMFJHFAEJE MJKMLOELJHO(::FJKMGCKMNNA* a1)
		{
			return ((::KIMFJHFAEJE(*)(::FJKMGCKMNNA*))((::PBYTE)hIl2Cpp + KIMFJHFAEJE_MJKMLOELJHO_OFFSET))(a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIMFJHFAEJE_TOSTRING_OFFSET))(this);
		}

	};
