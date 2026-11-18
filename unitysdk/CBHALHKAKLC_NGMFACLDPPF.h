#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBHALHKAKLC;
namespace System { class Action; }

#define CBHALHKAKLC_NGMFACLDPPF_GAPEOFHBCEA_OFFSET UNITYSDK_OFFSET(0x16A0B830)
#define CBHALHKAKLC_NGMFACLDPPF_KJCKJHAMDOD_OFFSET UNITYSDK_OFFSET(0x16A0B7A0)
#define CBHALHKAKLC_NGMFACLDPPF__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0B790)

inline static constexpr unsigned int CBHALHKAKLC_NGMFACLDPPF_TypeDefinitionIndex = 55898;

class CBHALHKAKLC_NGMFACLDPPF : public ::System::Object
{
public:
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x10
	::System::Action* KPFKDDMENIP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_NGMFACLDPPF__CTOR_OFFSET))(this);
	}

	::System::Void KJCKJHAMDOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_NGMFACLDPPF_KJCKJHAMDOD_OFFSET))(this);
	}

	::System::Void GAPEOFHBCEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_NGMFACLDPPF_GAPEOFHBCEA_OFFSET))(this);
	}
};
