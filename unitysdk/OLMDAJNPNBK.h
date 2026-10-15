#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OLMDAJNPNBK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF10DB0)

inline static constexpr unsigned int OLMDAJNPNBK_TypeDefinitionIndex = 81261;

	class OLMDAJNPNBK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMDAJNPNBK_CTOR_OFFSET))(this);
		}

	};
