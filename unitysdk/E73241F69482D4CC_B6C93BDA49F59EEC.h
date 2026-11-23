#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define E73241F69482D4CC_B6C93BDA49F59EEC__CTOR_OFFSET UNITYSDK_OFFSET(0x29EC3C0)

inline static constexpr unsigned int E73241F69482D4CC_B6C93BDA49F59EEC_TypeDefinitionIndex = 15838;

class E73241F69482D4CC_B6C93BDA49F59EEC : public ::System::Object
{
public:
	::System::String* AE1B1597A8C93139; // 0x10
	::System::Int64 E371E27518F27F06; // 0x18
	::System::Int64 E8BAAE2F50C8E590; // 0x20
	::System::Int64 B9BDFAB213AA7FB1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E73241F69482D4CC_B6C93BDA49F59EEC__CTOR_OFFSET))(this);
	}
};
