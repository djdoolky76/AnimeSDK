#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NMIGMOHJEKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A447480)

inline static constexpr unsigned int NMIGMOHJEKK_TypeDefinitionIndex = 83383;

	class NMIGMOHJEKK : public ::System::Object
	{
	public:
		::System::Boolean IHBKOPMKIJF; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMIGMOHJEKK_CTOR_OFFSET))(this, a1);
		}

	};
