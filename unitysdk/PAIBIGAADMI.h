#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define PAIBIGAADMI_CTOR_OFFSET UNITYSDK_OFFSET(0xBFCA150)
#define PAIBIGAADMI_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xBFC9F90)

	class PAIBIGAADMI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIBIGAADMI_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + PAIBIGAADMI_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
