#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JAMLOIADIDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1655B950)
#define JAMLOIADIDB_GET_SHOWBG_OFFSET UNITYSDK_OFFSET(0x1655B930)
#define JAMLOIADIDB_SET_SHOWBG_OFFSET UNITYSDK_OFFSET(0x1655B940)

	class JAMLOIADIDB : public ::System::Object
	{
	public:
		::System::Boolean _ShowBg_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMLOIADIDB_CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShowBg()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMLOIADIDB_GET_SHOWBG_OFFSET))(this);
		}

		::System::Void set_ShowBg(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAMLOIADIDB_SET_SHOWBG_OFFSET))(this, a1);
		}

	};
