#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B2056DB406ABE865;

#define EC523C9B928764E5_B72F107924A0D7FF_OFFSET UNITYSDK_OFFSET(0x1D2FBF0)
#define EC523C9B928764E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EC523C9B928764E5_TypeDefinitionIndex = 10030;

class EC523C9B928764E5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC523C9B928764E5__CTOR_OFFSET))(this);
	}

	static ::EC523C9B928764E5* B72F107924A0D7FF(::B2056DB406ABE865* ACDE58E97E37D13C)
	{
		return ((::EC523C9B928764E5*(*)(::B2056DB406ABE865*))((::PBYTE)hIl2Cpp + EC523C9B928764E5_B72F107924A0D7FF_OFFSET))(ACDE58E97E37D13C);
	}
};
