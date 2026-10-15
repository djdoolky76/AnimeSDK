#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define DNKDEAPFJFE_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD38C0)
#define DNKDEAPFJFE_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x11FD2A00)

	class DNKDEAPFJFE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKDEAPFJFE_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + DNKDEAPFJFE_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
