#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPLAOIGCPBH.h"

namespace System { class String; }

#define AFLFFHNMCCG__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBE110)

inline static constexpr unsigned int AFLFFHNMCCG_TypeDefinitionIndex = 49197;

class AFLFFHNMCCG : public ::PPLAOIGCPBH
{
public:
	::System::String* JKBLDFBGBPK; // 0x28
	::System::String* JPLKKOHBBKC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLFFHNMCCG__CTOR_OFFSET))(this);
	}
};
