#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PAJHIBDCGDG_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC3EF0)

inline static constexpr unsigned int PAJHIBDCGDG_TypeDefinitionIndex = 57034;

	class PAJHIBDCGDG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJHIBDCGDG_CTOR_OFFSET))(this);
		}

	};
