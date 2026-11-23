#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B7E88DD5E624206A;
namespace System { class EC00AF6EBD418F0F; }

#define AD687A2886842468_BD9CD726F874B523_OFFSET UNITYSDK_OFFSET(0x3EEEC90)
#define AD687A2886842468__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AD687A2886842468_TypeDefinitionIndex = 15253;

class AD687A2886842468 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD687A2886842468__CTOR_OFFSET))(this);
	}

	::B7E88DD5E624206A* BD9CD726F874B523(::System::EC00AF6EBD418F0F* A5E13DE10579BB67)
	{
		return ((::B7E88DD5E624206A*(*)(::PVOID, ::System::EC00AF6EBD418F0F*))((::PBYTE)hIl2Cpp + AD687A2886842468_BD9CD726F874B523_OFFSET))(this, A5E13DE10579BB67);
	}
};
