#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define LKNOMEIAOIA_CTOR_OFFSET UNITYSDK_OFFSET(0xBFFAEA0)
#define LKNOMEIAOIA_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xBFF9B50)

inline static constexpr unsigned int LKNOMEIAOIA_TypeDefinitionIndex = 83314;

	class LKNOMEIAOIA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKNOMEIAOIA_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + LKNOMEIAOIA_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
