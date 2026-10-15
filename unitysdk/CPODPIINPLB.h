#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define CPODPIINPLB_CTOR_OFFSET UNITYSDK_OFFSET(0xDCDD750)
#define CPODPIINPLB_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xDCDD670)

	class CPODPIINPLB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPODPIINPLB_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + CPODPIINPLB_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
