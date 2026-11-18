#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LDJDLNCAOBC_MPIPDAINIPC_OPDDKCINPGL_OFFSET UNITYSDK_OFFSET(0x1683BF30)
#define LDJDLNCAOBC_MPIPDAINIPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1683BF20)

inline static constexpr unsigned int LDJDLNCAOBC_MPIPDAINIPC_TypeDefinitionIndex = 60084;

class LDJDLNCAOBC_MPIPDAINIPC : public ::System::Object
{
public:
	::System::Boolean HDLPGMNKOBP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDLNCAOBC_MPIPDAINIPC__CTOR_OFFSET))(this);
	}

	::System::Void OPDDKCINPGL(::System::UInt32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDJDLNCAOBC_MPIPDAINIPC_OPDDKCINPGL_OFFSET))(this, PIIPCLCCOIG);
	}
};
