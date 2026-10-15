#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define CPODPIINPLB_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD6810)
#define CPODPIINPLB_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xDCD6730)

inline static constexpr unsigned int CPODPIINPLB_TypeDefinitionIndex = 81645;

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
