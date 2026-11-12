#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LDIHJENNBEE.h"

#define EHABKALGJOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D780700)
#define EHABKALGJOF_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1D7806C0)
#define EHABKALGJOF_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1D7803F0)

inline static constexpr unsigned int EHABKALGJOF_TypeDefinitionIndex = 38070;

	class EHABKALGJOF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHABKALGJOF_CTOR_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::LDIHJENNBEE a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDIHJENNBEE))((::PBYTE)hIl2Cpp + EHABKALGJOF_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHABKALGJOF_HADOHLNHHGB_OFFSET))(this);
		}

	};
