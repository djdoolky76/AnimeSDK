#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NKOOKDOKLMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C9280)

inline static constexpr unsigned int NKOOKDOKLMK_TypeDefinitionIndex = 74474;

	class NKOOKDOKLMK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOOKDOKLMK_CTOR_OFFSET))(this);
		}

	};
