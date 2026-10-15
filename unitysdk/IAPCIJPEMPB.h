#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define IAPCIJPEMPB_CTOR_OFFSET UNITYSDK_OFFSET(0x15E23D60)
#define IAPCIJPEMPB_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x15E23C30)

inline static constexpr unsigned int IAPCIJPEMPB_TypeDefinitionIndex = 63290;

	class IAPCIJPEMPB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPCIJPEMPB_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + IAPCIJPEMPB_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
