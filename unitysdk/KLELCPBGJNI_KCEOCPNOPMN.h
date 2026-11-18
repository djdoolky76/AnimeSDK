#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

#define KLELCPBGJNI_KCEOCPNOPMN_MLMFJDKPNFK_OFFSET UNITYSDK_OFFSET(0x176645D0)
#define KLELCPBGJNI_KCEOCPNOPMN__CTOR_OFFSET UNITYSDK_OFFSET(0x176645C0)

inline static constexpr unsigned int KLELCPBGJNI_KCEOCPNOPMN_TypeDefinitionIndex = 74915;

class KLELCPBGJNI_KCEOCPNOPMN : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle DBMEFDJPDCB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLELCPBGJNI_KCEOCPNOPMN__CTOR_OFFSET))(this);
	}

	::System::Boolean MLMFJDKPNFK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLELCPBGJNI_KCEOCPNOPMN_MLMFJDKPNFK_OFFSET))(this);
	}
};
