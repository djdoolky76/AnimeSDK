#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GOCCDKLAIKG_CLEAR_OFFSET UNITYSDK_OFFSET(0x15B1DB60)
#define GOCCDKLAIKG_CTOR_OFFSET UNITYSDK_OFFSET(0x15B1DBB0)

inline static constexpr unsigned int GOCCDKLAIKG_TypeDefinitionIndex = 54855;

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
