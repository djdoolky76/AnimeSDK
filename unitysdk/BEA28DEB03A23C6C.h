#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD41610DAE684581.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
class E945252ECE50FE4E;

#define BEA28DEB03A23C6C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BEA28DEB03A23C6C_TypeDefinitionIndex = 9724;

class BEA28DEB03A23C6C : public ::System::Object
{
public:
	::AB642D1382756991* EA41A921E23C2294; // 0x10
	::AD41610DAE684581 BCD1A22B9DDF4B7B; // 0x18
	::E945252ECE50FE4E* A91CB9FB3132C28A; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEA28DEB03A23C6C__CTOR_OFFSET))(this);
	}
};
