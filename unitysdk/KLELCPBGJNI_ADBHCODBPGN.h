#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

#define KLELCPBGJNI_ADBHCODBPGN_PEHFDEDPICG_OFFSET UNITYSDK_OFFSET(0x126976B0)
#define KLELCPBGJNI_ADBHCODBPGN__CTOR_OFFSET UNITYSDK_OFFSET(0x126976A0)

inline static constexpr unsigned int KLELCPBGJNI_ADBHCODBPGN_TypeDefinitionIndex = 74909;

class KLELCPBGJNI_ADBHCODBPGN : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle DBMEFDJPDCB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLELCPBGJNI_ADBHCODBPGN__CTOR_OFFSET))(this);
	}

	::System::Boolean PEHFDEDPICG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLELCPBGJNI_ADBHCODBPGN_PEHFDEDPICG_OFFSET))(this);
	}
};
