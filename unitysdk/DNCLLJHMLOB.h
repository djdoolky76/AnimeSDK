#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DNCLLJHMLOB__CTOR_OFFSET UNITYSDK_OFFSET(0x7FD3810)

inline static constexpr unsigned int DNCLLJHMLOB_TypeDefinitionIndex = 80161;

class DNCLLJHMLOB : public ::System::Object
{
public:
	::System::Action* MGAKJHJAGJI; // 0x10
	::System::Int32 LPIFLOABACF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCLLJHMLOB__CTOR_OFFSET))(this);
	}
};
