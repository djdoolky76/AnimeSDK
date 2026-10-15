#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IAOFEGDCKCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD34810)

inline static constexpr unsigned int IAOFEGDCKCF_TypeDefinitionIndex = 6561;

	class IAOFEGDCKCF : public ::System::Object
	{
	public:
		::System::Byte HEMBEDOKMEI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOFEGDCKCF_CTOR_OFFSET))(this);
		}

	};
