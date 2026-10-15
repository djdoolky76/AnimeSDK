#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NMGFDDJBCHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D237510)

inline static constexpr unsigned int NMGFDDJBCHP_TypeDefinitionIndex = 25032;

	class NMGFDDJBCHP : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGFDDJBCHP_CTOR_OFFSET))(this);
		}

	};
