#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BIJKIKKNHEO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE41390)

inline static constexpr unsigned int BIJKIKKNHEO_TypeDefinitionIndex = 74960;

	class BIJKIKKNHEO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJKIKKNHEO_CTOR_OFFSET))(this);
		}

	};
