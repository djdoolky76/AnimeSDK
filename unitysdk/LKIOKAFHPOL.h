#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LKIOKAFHPOL_CTOR_OFFSET UNITYSDK_OFFSET(0x18CF2670)

inline static constexpr unsigned int LKIOKAFHPOL_TypeDefinitionIndex = 74957;

	class LKIOKAFHPOL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIOKAFHPOL_CTOR_OFFSET))(this);
		}

	};
