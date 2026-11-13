#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DFFJLIFMENE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B38C410)

inline static constexpr unsigned int DFFJLIFMENE_TypeDefinitionIndex = 66338;

	class DFFJLIFMENE : public ::System::Object
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFJLIFMENE_CTOR_OFFSET))(this);
		}

	};
