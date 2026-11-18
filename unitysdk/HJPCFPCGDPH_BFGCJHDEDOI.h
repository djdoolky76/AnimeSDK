#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HJPCFPCGDPH_BFGCJHDEDOI_FFODNLHBION_OFFSET UNITYSDK_OFFSET(0x16CF6D60)
#define HJPCFPCGDPH_BFGCJHDEDOI__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF6D50)

inline static constexpr unsigned int HJPCFPCGDPH_BFGCJHDEDOI_TypeDefinitionIndex = 56975;

class HJPCFPCGDPH_BFGCJHDEDOI : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_BFGCJHDEDOI__CTOR_OFFSET))(this);
	}

	::System::Void FFODNLHBION()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_BFGCJHDEDOI_FFODNLHBION_OFFSET))(this);
	}
};
