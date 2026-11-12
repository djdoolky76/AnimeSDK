#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HDIFJLMFKLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC82790)

inline static constexpr unsigned int HDIFJLMFKLF_TypeDefinitionIndex = 44342;

	class HDIFJLMFKLF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIFJLMFKLF_CTOR_OFFSET))(this);
		}

	};
