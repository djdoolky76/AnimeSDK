#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define FFPBKKGHNJH_CTOR_OFFSET UNITYSDK_OFFSET(0x157423D0)
#define FFPBKKGHNJH_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x15742130)

inline static constexpr unsigned int FFPBKKGHNJH_TypeDefinitionIndex = 79168;

	class FFPBKKGHNJH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPBKKGHNJH_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + FFPBKKGHNJH_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
