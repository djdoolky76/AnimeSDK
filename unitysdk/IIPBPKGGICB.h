#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define IIPBPKGGICB_CTOR_OFFSET UNITYSDK_OFFSET(0x193F86D0)
#define IIPBPKGGICB_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x193F8640)

inline static constexpr unsigned int IIPBPKGGICB_TypeDefinitionIndex = 68639;

	class IIPBPKGGICB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPBPKGGICB_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + IIPBPKGGICB_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
