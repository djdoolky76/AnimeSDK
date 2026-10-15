#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KOLCCPKBMKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FBFB0)

inline static constexpr unsigned int KOLCCPKBMKK_TypeDefinitionIndex = 42153;

	class KOLCCPKBMKK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCCPKBMKK_CTOR_OFFSET))(this);
		}

	};
