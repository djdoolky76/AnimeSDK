#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define KEPOEINAOJB_CTOR_OFFSET UNITYSDK_OFFSET(0xB37F6E0)
#define KEPOEINAOJB_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xB37F1E0)

inline static constexpr unsigned int KEPOEINAOJB_TypeDefinitionIndex = 82063;

	class KEPOEINAOJB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPOEINAOJB_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + KEPOEINAOJB_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
