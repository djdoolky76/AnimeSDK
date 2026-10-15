#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define IFCNJNLOGIF_CTOR_OFFSET UNITYSDK_OFFSET(0x15F09890)
#define IFCNJNLOGIF_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x15F097B0)

	class IFCNJNLOGIF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCNJNLOGIF_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + IFCNJNLOGIF_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
