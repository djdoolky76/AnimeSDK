#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define KPIDEFIIFKK_CTOR_OFFSET UNITYSDK_OFFSET(0xB5BFD30)
#define KPIDEFIIFKK_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xB5BFAD0)

	class KPIDEFIIFKK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIDEFIIFKK_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + KPIDEFIIFKK_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
