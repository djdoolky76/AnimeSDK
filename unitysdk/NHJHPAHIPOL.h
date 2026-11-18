#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"

namespace System { class String; }

#define NHJHPAHIPOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1728A650)

inline static constexpr unsigned int NHJHPAHIPOL_TypeDefinitionIndex = 88318;

class NHJHPAHIPOL : public ::System::Object
{
public:
	::System::String* KEKLFCCONCL; // 0x10
	::System::Single EEKENHBPKGO; // 0x18
	::UnityEngine::Timeline::KFrameFieldType PGBEMEPAPLD; // 0x1C

	::System::Void _ctor(::UnityEngine::Timeline::KFrameFieldType PGBEMEPAPLD, ::System::String* KEKLFCCONCL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::KFrameFieldType, ::System::String*))((::PBYTE)hIl2Cpp + NHJHPAHIPOL__CTOR_OFFSET))(this, PGBEMEPAPLD, KEKLFCCONCL);
	}
};
