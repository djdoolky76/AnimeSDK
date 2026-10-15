#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMNMPNOPKEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB562C20)

inline static constexpr unsigned int KMNMPNOPKEC_TypeDefinitionIndex = 47295;

	class KMNMPNOPKEC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNMPNOPKEC_CTOR_OFFSET))(this);
		}

	};
