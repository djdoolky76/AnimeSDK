#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EDFBMEIGFGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA33510)

inline static constexpr unsigned int EDFBMEIGFGL_TypeDefinitionIndex = 42957;

	class EDFBMEIGFGL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFBMEIGFGL_CTOR_OFFSET))(this);
		}

	};
