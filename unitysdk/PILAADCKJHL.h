#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCAPBNKINLK.h"
#include "unitysdk/HAEBAPECCGC.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PILAADCKJHL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62A860)

inline static constexpr unsigned int PILAADCKJHL_TypeDefinitionIndex = 40040;

class PILAADCKJHL : public ::System::Object
{
public:
	::System::Action* PEGBHJCNKJG; // 0x10
	::System::Int32 IHOJNIIBOEL; // 0x18
	::CCAPBNKINLK GPJOGFBOCJH; // 0x1C
	::HAEBAPECCGC ILPJGGPNNDA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PILAADCKJHL__CTOR_OFFSET))(this);
	}
};
