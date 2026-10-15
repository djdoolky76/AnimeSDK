#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DLBNHDEFEHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2EAB0)

	class DLBNHDEFEHF : public ::System::Object
	{
	public:
		::System::String* BIOPPFFJPGI; // 0x10
		::System::String* CELBFEDOGKO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBNHDEFEHF_CTOR_OFFSET))(this);
		}

	};
