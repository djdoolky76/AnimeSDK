#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDECLIJNPCB.h"
#include "unitysdk/System/Object.h"

class MOHDBDOMBPN;
namespace System { class String; }

#define MOHDBDOMBPN_NBINNPPFAMP_CPNJLJGIOMG_OFFSET UNITYSDK_OFFSET(0x11F67ED0)
#define MOHDBDOMBPN_NBINNPPFAMP_OHPEAKFHHEN_OFFSET UNITYSDK_OFFSET(0x11F67FE0)
#define MOHDBDOMBPN_NBINNPPFAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x11F67EC0)

inline static constexpr unsigned int MOHDBDOMBPN_NBINNPPFAMP_TypeDefinitionIndex = 69263;

class MOHDBDOMBPN_NBINNPPFAMP : public ::System::Object
{
public:
	::MOHDBDOMBPN* KLHPEBKNIFB; // 0x10
	::Il2CppArray<::HDECLIJNPCB>* JKPADLFDNOI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHDBDOMBPN_NBINNPPFAMP__CTOR_OFFSET))(this);
	}

	::System::Boolean CPNJLJGIOMG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHDBDOMBPN_NBINNPPFAMP_CPNJLJGIOMG_OFFSET))(this);
	}

	::System::String* OHPEAKFHHEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHDBDOMBPN_NBINNPPFAMP_OHPEAKFHHEN_OFFSET))(this);
	}
};
