#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NLKEJHHPFIM__CTOR_OFFSET UNITYSDK_OFFSET(0x20068360)

inline static constexpr unsigned int NLKEJHHPFIM_TypeDefinitionIndex = 6967;

class NLKEJHHPFIM : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLKEJHHPFIM__CTOR_OFFSET))(this);
	}
};
