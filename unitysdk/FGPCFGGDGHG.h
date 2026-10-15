#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FGPCFGGDGHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA6E5A0)

	class FGPCFGGDGHG : public ::System::Object
	{
	public:
		::System::Boolean KKGDNLAGGEL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPCFGGDGHG_CTOR_OFFSET))(this);
		}

	};
