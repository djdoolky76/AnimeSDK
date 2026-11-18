#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

#define PLCFJKEHGII_FDFHELACBAO__CTOR_OFFSET UNITYSDK_OFFSET(0x14BAF8E0)

inline static constexpr unsigned int PLCFJKEHGII_FDFHELACBAO_TypeDefinitionIndex = 56277;

class PLCFJKEHGII_FDFHELACBAO : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle NBCLKPICOAD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCFJKEHGII_FDFHELACBAO__CTOR_OFFSET))(this);
	}
};
