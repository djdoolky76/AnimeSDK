#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

#define KLELCPBGJNI_IKCOGIEMDJK_OJIEDKCOOPB_OFFSET UNITYSDK_OFFSET(0x1A2D0950)
#define KLELCPBGJNI_IKCOGIEMDJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D0940)

inline static constexpr unsigned int KLELCPBGJNI_IKCOGIEMDJK_TypeDefinitionIndex = 74907;

class KLELCPBGJNI_IKCOGIEMDJK : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle DBMEFDJPDCB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLELCPBGJNI_IKCOGIEMDJK__CTOR_OFFSET))(this);
	}

	::System::Boolean OJIEDKCOOPB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLELCPBGJNI_IKCOGIEMDJK_OJIEDKCOOPB_OFFSET))(this);
	}
};
