#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEIMDJMJAPJ.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define KNHFMNFLBAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1634CD60)

inline static constexpr unsigned int KNHFMNFLBAP_TypeDefinitionIndex = 80013;

class KNHFMNFLBAP : public ::System::Object
{
public:
	::System::Action* OPMGJBEGFBL; // 0x10
	::GEIMDJMJAPJ JFHFNPIDIOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHFMNFLBAP__CTOR_OFFSET))(this);
	}
};
