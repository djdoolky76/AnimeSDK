#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"

#define MAJABIBGFKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C923410)

	class MAJABIBGFKH : public ::System::Object
	{
	public:
		::System::Int32 GNOKDJHJJAB; // 0x10
		::System::Int32 DKOOHFBFJPL; // 0x14
		::System::Int32 MCLLALGABAB; // 0x18
		::System::ValueTuple KPAKGDIIPHD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJABIBGFKH_CTOR_OFFSET))(this);
		}

	};
