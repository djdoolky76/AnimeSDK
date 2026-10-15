#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LDIHJENNBEE.h"

#define LEDFMNLANIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C73A8E0)
#define LEDFMNLANIP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C73A8A0)
#define LEDFMNLANIP_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1C73A6F0)

	class LEDFMNLANIP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDFMNLANIP_CTOR_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::LDIHJENNBEE a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDIHJENNBEE))((::PBYTE)hIl2Cpp + LEDFMNLANIP_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDFMNLANIP_HADOHLNHHGB_OFFSET))(this);
		}

	};
