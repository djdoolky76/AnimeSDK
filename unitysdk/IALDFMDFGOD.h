#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define IALDFMDFGOD_CTOR_OFFSET UNITYSDK_OFFSET(0x15E19A90)
#define IALDFMDFGOD_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x15E19930)

	class IALDFMDFGOD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALDFMDFGOD_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + IALDFMDFGOD_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
