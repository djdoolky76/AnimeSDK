#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NIGJNOOIALN_OOADFCPKEOH_OFFSET UNITYSDK_OFFSET(0x11597110)
#define NIGJNOOIALN__CTOR_OFFSET UNITYSDK_OFFSET(0x11597100)

inline static constexpr unsigned int NIGJNOOIALN_TypeDefinitionIndex = 87466;

class NIGJNOOIALN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJNOOIALN__CTOR_OFFSET))(this);
	}

	static ::System::Boolean OOADFCPKEOH(::System::Boolean HOODDDHCJCF, ::System::Boolean PCELFKENBEE)
	{
		return ((::System::Boolean(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NIGJNOOIALN_OOADFCPKEOH_OFFSET))(HOODDDHCJCF, PCELFKENBEE);
	}
};
