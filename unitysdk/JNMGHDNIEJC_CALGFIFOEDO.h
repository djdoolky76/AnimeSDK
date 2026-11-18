#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDAFJHICLOF.h"
#include "unitysdk/System/Object.h"

class JNMGHDNIEJC;
namespace System { class Action; }

#define JNMGHDNIEJC_CALGFIFOEDO_MCPCLJDCPNA_OFFSET UNITYSDK_OFFSET(0x18A27390)
#define JNMGHDNIEJC_CALGFIFOEDO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A27380)

inline static constexpr unsigned int JNMGHDNIEJC_CALGFIFOEDO_TypeDefinitionIndex = 58203;

class JNMGHDNIEJC_CALGFIFOEDO : public ::System::Object
{
public:
	::System::Action* OHMDPKKLNFA; // 0x10
	::JNMGHDNIEJC* KLHPEBKNIFB; // 0x18
	::System::Int32 EGKGLCIDEHC; // 0x20
	::EDAFJHICLOF JIPPMBKLFHE; // 0x24
	::System::Boolean PPHOPLMGNGO; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 KLEKANDNPDJ; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMGHDNIEJC_CALGFIFOEDO__CTOR_OFFSET))(this);
	}

	::System::Void MCPCLJDCPNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMGHDNIEJC_CALGFIFOEDO_MCPCLJDCPNA_OFFSET))(this);
	}
};
