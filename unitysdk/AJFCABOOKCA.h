#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AJFCABOOKCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C55D580)

inline static constexpr unsigned int AJFCABOOKCA_TypeDefinitionIndex = 37405;

	class AJFCABOOKCA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFCABOOKCA_CTOR_OFFSET))(this);
		}

	};
