#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KAAAFGJHDEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD79EE0)

inline static constexpr unsigned int KAAAFGJHDEG_TypeDefinitionIndex = 43317;

	class KAAAFGJHDEG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAAFGJHDEG_CTOR_OFFSET))(this);
		}

	};
