#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HDIFJLMFKLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA8F940)

inline static constexpr unsigned int HDIFJLMFKLF_TypeDefinitionIndex = 43361;

	class HDIFJLMFKLF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIFJLMFKLF_CTOR_OFFSET))(this);
		}

	};
