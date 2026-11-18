#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BNGKKHMDNNP__CTOR_OFFSET UNITYSDK_OFFSET(0x113FDB80)

inline static constexpr unsigned int BNGKKHMDNNP_TypeDefinitionIndex = 89885;

class BNGKKHMDNNP : public ::System::Object
{
public:
	::System::Int32 LLFOEDDLFAH; // 0x10
	::System::Int32 BKFCNBJAOKF; // 0x14
	::System::Int32 FJGFOOIDLOK; // 0x18
	::System::Int32 CEGGEMDFCGK; // 0x1C
	::System::Int32 IJHBHOFIFDP; // 0x20
	::System::Int32 CMBKACECLIO; // 0x24
	::System::Int32 JGKKFDBBFHB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGKKHMDNNP__CTOR_OFFSET))(this);
	}
};
