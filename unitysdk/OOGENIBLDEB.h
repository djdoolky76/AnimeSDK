#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define OOGENIBLDEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1969C390)
#define OOGENIBLDEB_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x1969C300)

inline static constexpr unsigned int OOGENIBLDEB_TypeDefinitionIndex = 84984;

	class OOGENIBLDEB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOGENIBLDEB_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + OOGENIBLDEB_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
