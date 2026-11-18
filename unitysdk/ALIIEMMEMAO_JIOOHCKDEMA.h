#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define ALIIEMMEMAO_JIOOHCKDEMA_KBJBOJFIPJL_OFFSET UNITYSDK_OFFSET(0x17CE0440)
#define ALIIEMMEMAO_JIOOHCKDEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE0430)

inline static constexpr unsigned int ALIIEMMEMAO_JIOOHCKDEMA_TypeDefinitionIndex = 93265;

class ALIIEMMEMAO_JIOOHCKDEMA : public ::System::Object
{
public:
	::System::Action* KBBNHDMAPGG; // 0x10
	::System::Action* AMHGBGMOMLL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIIEMMEMAO_JIOOHCKDEMA__CTOR_OFFSET))(this);
	}

	::System::Void KBJBOJFIPJL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIIEMMEMAO_JIOOHCKDEMA_KBJBOJFIPJL_OFFSET))(this);
	}
};
