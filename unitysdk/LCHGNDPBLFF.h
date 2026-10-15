#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define LCHGNDPBLFF_CTOR_OFFSET UNITYSDK_OFFSET(0xB6153B0)
#define LCHGNDPBLFF_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xB615320)

	class LCHGNDPBLFF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHGNDPBLFF_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + LCHGNDPBLFF_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
