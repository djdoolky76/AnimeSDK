#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPLAOIGCPBH.h"

namespace System { class String; }

#define NEADCLHFNIB__CTOR_OFFSET UNITYSDK_OFFSET(0x12FDF970)

inline static constexpr unsigned int NEADCLHFNIB_TypeDefinitionIndex = 48893;

class NEADCLHFNIB : public ::PPLAOIGCPBH
{
public:
	::System::String* AKFLHEBLBOB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEADCLHFNIB__CTOR_OFFSET))(this);
	}
};
