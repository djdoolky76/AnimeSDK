#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define INANCDLHPHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3EEF0)

inline static constexpr unsigned int INANCDLHPHF_TypeDefinitionIndex = 43259;

	class INANCDLHPHF : public ::System::Object
	{
	public:
		::System::Boolean CLJEPDCOEDG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INANCDLHPHF_CTOR_OFFSET))(this);
		}

	};
