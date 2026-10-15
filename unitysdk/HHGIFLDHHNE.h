#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define HHGIFLDHHNE_CTOR_OFFSET UNITYSDK_OFFSET(0x15CCC580)
#define HHGIFLDHHNE_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x15CCC3F0)

inline static constexpr unsigned int HHGIFLDHHNE_TypeDefinitionIndex = 61888;

	class HHGIFLDHHNE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGIFLDHHNE_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + HHGIFLDHHNE_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
