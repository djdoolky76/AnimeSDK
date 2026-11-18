#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define KFGCLOPEGJO_PMCODHCMPCN_BGEPGIPBICB_OFFSET UNITYSDK_OFFSET(0x12994260)
#define KFGCLOPEGJO_PMCODHCMPCN__CTOR_OFFSET UNITYSDK_OFFSET(0x12985C60)

inline static constexpr unsigned int KFGCLOPEGJO_PMCODHCMPCN_TypeDefinitionIndex = 78954;

class KFGCLOPEGJO_PMCODHCMPCN : public ::System::Object
{
public:
	::System::Action* EONNLLKMEAB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_PMCODHCMPCN__CTOR_OFFSET))(this);
	}

	::System::Boolean BGEPGIPBICB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_PMCODHCMPCN_BGEPGIPBICB_OFFSET))(this);
	}
};
