#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define FFPBKKGHNJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1666CC60)
#define FFPBKKGHNJH_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x1666C9C0)

inline static constexpr unsigned int FFPBKKGHNJH_TypeDefinitionIndex = 81945;

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
