#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BMPJDKHGAJP__CTOR_OFFSET UNITYSDK_OFFSET(0x14EF93E0)

inline static constexpr unsigned int BMPJDKHGAJP_TypeDefinitionIndex = 60195;

class BMPJDKHGAJP : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPJDKHGAJP__CTOR_OFFSET))(this);
	}
};
