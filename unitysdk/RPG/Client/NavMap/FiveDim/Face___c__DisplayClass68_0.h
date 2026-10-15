#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCMOLHGOPEK;

#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__DISPLAYCLASS68_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD943FA0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__DISPLAYCLASS68_0__GETSURFACE_B__0_OFFSET UNITYSDK_OFFSET(0xD944410)

namespace RPG::Client::NavMap::FiveDim
{
	class Face___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::System::UInt32 surfaceID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__DISPLAYCLASS68_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSurface_b__0(::BCMOLHGOPEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCMOLHGOPEK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__DISPLAYCLASS68_0__GETSURFACE_B__0_OFFSET))(this, a1);
		}

	};
}
