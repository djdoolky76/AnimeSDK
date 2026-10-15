#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define EIHFPMIDMGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8A400)

	class EIHFPMIDMGP : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHFPMIDMGP_CTOR_OFFSET))(this);
		}

	};
