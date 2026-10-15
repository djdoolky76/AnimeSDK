#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LDIHJENNBEE.h"

#define IAIABEIKOMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C68A9D0)
#define IAIABEIKOMJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C68A990)
#define IAIABEIKOMJ_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1C68A750)

	class IAIABEIKOMJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIABEIKOMJ_CTOR_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::LDIHJENNBEE a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDIHJENNBEE))((::PBYTE)hIl2Cpp + IAIABEIKOMJ_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIABEIKOMJ_HADOHLNHHGB_OFFSET))(this);
		}

	};
