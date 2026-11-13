#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EDFBMEIGFGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB371A0)

inline static constexpr unsigned int EDFBMEIGFGL_TypeDefinitionIndex = 43938;

	class EDFBMEIGFGL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFBMEIGFGL_CTOR_OFFSET))(this);
		}

	};
