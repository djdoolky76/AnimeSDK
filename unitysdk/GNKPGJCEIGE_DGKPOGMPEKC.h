#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IGMFJGHFNGB.h"

namespace System { class Action; }

#define GNKPGJCEIGE_DGKPOGMPEKC_FJLELNPOILF_OFFSET UNITYSDK_OFFSET(0x1CCB9480)
#define GNKPGJCEIGE_DGKPOGMPEKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB9470)

inline static constexpr unsigned int GNKPGJCEIGE_DGKPOGMPEKC_TypeDefinitionIndex = 93281;

class GNKPGJCEIGE_DGKPOGMPEKC : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKPGJCEIGE_DGKPOGMPEKC__CTOR_OFFSET))(this);
	}

	::System::Void FJLELNPOILF(::IGMFJGHFNGB PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::IGMFJGHFNGB))((::PBYTE)hIl2Cpp + GNKPGJCEIGE_DGKPOGMPEKC_FJLELNPOILF_OFFSET))(this, PIIPCLCCOIG);
	}
};
