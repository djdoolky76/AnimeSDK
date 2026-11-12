#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define ABKHJBACHOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEFB0)

inline static constexpr unsigned int ABKHJBACHOO_TypeDefinitionIndex = 76696;

	struct alignas(4) ABKHJBACHOO
	{
		::System::UInt32 LLDCHLHNADA; // 0x10
		::System::UInt32 GDBJDAOOCOH; // 0x14
		::System::UInt32 ODMPMJCAHPN; // 0x18
		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKHJBACHOO_TOSTRING_OFFSET))(this);
		}

	};
