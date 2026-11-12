#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define MJBMFJMAIGL_CTOR_OFFSET UNITYSDK_OFFSET(0xC219DC0)
#define MJBMFJMAIGL_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xC219060)

inline static constexpr unsigned int MJBMFJMAIGL_TypeDefinitionIndex = 84521;

	class MJBMFJMAIGL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMFJMAIGL_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + MJBMFJMAIGL_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
