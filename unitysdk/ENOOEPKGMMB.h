#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ENOOEPKGMMB_CTOR_OFFSET UNITYSDK_OFFSET(0x18815700)

inline static constexpr unsigned int ENOOEPKGMMB_TypeDefinitionIndex = 50824;

	class ENOOEPKGMMB : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOOEPKGMMB_CTOR_OFFSET))(this);
		}

	};
