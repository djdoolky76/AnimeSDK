#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define LKNOMEIAOIA_CTOR_OFFSET UNITYSDK_OFFSET(0xB75BB70)
#define LKNOMEIAOIA_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xB75A820)

inline static constexpr unsigned int LKNOMEIAOIA_TypeDefinitionIndex = 80534;

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
