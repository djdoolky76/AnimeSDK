#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define HMHGPNILBIM__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5E7C0)

inline static constexpr unsigned int HMHGPNILBIM_TypeDefinitionIndex = 88059;

class HMHGPNILBIM : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHGPNILBIM__CTOR_OFFSET))(this);
	}
};
