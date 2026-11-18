#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPLAOIGCPBH.h"

namespace System { class String; }

#define NBCBDFCMEAK__CTOR_OFFSET UNITYSDK_OFFSET(0xE177E80)

inline static constexpr unsigned int NBCBDFCMEAK_TypeDefinitionIndex = 73854;

class NBCBDFCMEAK : public ::PPLAOIGCPBH
{
public:
	::System::String* FFHJLMAOEHH; // 0x28
	::System::String* OOONELGGOKM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCBDFCMEAK__CTOR_OFFSET))(this);
	}
};
