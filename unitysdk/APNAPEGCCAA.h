#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define APNAPEGCCAA_CTOR_OFFSET UNITYSDK_OFFSET(0x15BBF1A0)

	class APNAPEGCCAA : public ::System::Object
	{
	public:
		::System::String* BIOPPFFJPGI; // 0x10
		::System::Boolean CALHKPIPJOD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNAPEGCCAA_CTOR_OFFSET))(this);
		}

	};
