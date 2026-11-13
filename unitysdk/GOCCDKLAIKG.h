#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GOCCDKLAIKG_CLEAR_OFFSET UNITYSDK_OFFSET(0x187ADFE0)
#define GOCCDKLAIKG_CTOR_OFFSET UNITYSDK_OFFSET(0x187AE030)

inline static constexpr unsigned int GOCCDKLAIKG_TypeDefinitionIndex = 56025;

	class GOCCDKLAIKG : public ::System::Object
	{
	public:
		::System::Boolean MNDLIALMKGO; // 0x10
		::System::Boolean IIPDCIMHGGH; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCDKLAIKG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCDKLAIKG_CLEAR_OFFSET))(this);
		}

	};
