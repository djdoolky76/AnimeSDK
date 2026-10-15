#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KAAAFGJHDEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA87F0)

inline static constexpr unsigned int KAAAFGJHDEG_TypeDefinitionIndex = 42342;

	class KAAAFGJHDEG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAAFGJHDEG_CTOR_OFFSET))(this);
		}

	};
