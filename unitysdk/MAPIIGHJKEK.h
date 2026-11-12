#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MAPIIGHJKEK_CTOR_OFFSET UNITYSDK_OFFSET(0xC0B82D0)

inline static constexpr unsigned int MAPIIGHJKEK_TypeDefinitionIndex = 81979;

	class MAPIIGHJKEK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAPIIGHJKEK_CTOR_OFFSET))(this);
		}

	};
