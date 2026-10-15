#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EGMIDBKFOLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA504F0)

inline static constexpr unsigned int EGMIDBKFOLB_TypeDefinitionIndex = 42456;

	class EGMIDBKFOLB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMIDBKFOLB_CTOR_OFFSET))(this);
		}

	};
