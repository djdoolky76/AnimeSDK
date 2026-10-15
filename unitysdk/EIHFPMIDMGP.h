#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define EIHFPMIDMGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5C3C0)

inline static constexpr unsigned int EIHFPMIDMGP_TypeDefinitionIndex = 25027;

	class EIHFPMIDMGP : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHFPMIDMGP_CTOR_OFFSET))(this);
		}

	};
