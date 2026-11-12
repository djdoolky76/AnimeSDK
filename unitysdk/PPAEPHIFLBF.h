#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PPAEPHIFLBF_CTOR_OFFSET UNITYSDK_OFFSET(0xCCACA20)

inline static constexpr unsigned int PPAEPHIFLBF_TypeDefinitionIndex = 74487;

	class PPAEPHIFLBF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAEPHIFLBF_CTOR_OFFSET))(this);
		}

	};
