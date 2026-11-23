#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/EC6AEFB76F53077E.h"

#define F7E93062202EE43A_B27F490973E78275_OFFSET UNITYSDK_OFFSET(0x1F10050)
#define F7E93062202EE43A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F7E93062202EE43A_TypeDefinitionIndex = 7526;

class F7E93062202EE43A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7E93062202EE43A__CTOR_OFFSET))(this);
	}

	::System::Void B27F490973E78275(::E865F6F8B8B44C1E F6F616F38D3C178C, ::EC6AEFB76F53077E E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::E865F6F8B8B44C1E, ::EC6AEFB76F53077E))((::PBYTE)hIl2Cpp + F7E93062202EE43A_B27F490973E78275_OFFSET))(this, F6F616F38D3C178C, E04D2BE64FCE9814);
	}
};
