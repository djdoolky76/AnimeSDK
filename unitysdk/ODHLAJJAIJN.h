#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCDPJHKCLAE;

#define ODHLAJJAIJN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C98C4E0)
#define ODHLAJJAIJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98C560)

	class ODHLAJJAIJN : public ::System::Object
	{
	public:
		::FCDPJHKCLAE* BPAPBAFOMCH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHLAJJAIJN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHLAJJAIJN_CLEAR_OFFSET))(this);
		}

	};
