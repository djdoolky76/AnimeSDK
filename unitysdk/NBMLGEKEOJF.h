#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define NBMLGEKEOJF_CTOR_OFFSET UNITYSDK_OFFSET(0x150C8490)
#define NBMLGEKEOJF_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x150C7FD0)

inline static constexpr unsigned int NBMLGEKEOJF_TypeDefinitionIndex = 84840;

	class NBMLGEKEOJF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMLGEKEOJF_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + NBMLGEKEOJF_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
