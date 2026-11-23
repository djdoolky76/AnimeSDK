#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;
class BEA28DEB03A23C6C;

#define AA81322F22419B05__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AA81322F22419B05_TypeDefinitionIndex = 10047;

class AA81322F22419B05 : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* A76513460B029719; // 0x38
	::BEA28DEB03A23C6C* BA8BC044A4243CD5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA81322F22419B05__CTOR_OFFSET))(this);
	}
};
