#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define MJBMFJMAIGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB963F40)
#define MJBMFJMAIGL_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xB9631E0)

	class MJBMFJMAIGL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMFJMAIGL_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + MJBMFJMAIGL_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
