#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DGDNKBFMHME_MGMGJFOELOE_OLAPPAAIEIE_OFFSET UNITYSDK_OFFSET(0x147C91E0)
#define DGDNKBFMHME_MGMGJFOELOE__CTOR_OFFSET UNITYSDK_OFFSET(0x147C91D0)

inline static constexpr unsigned int DGDNKBFMHME_MGMGJFOELOE_TypeDefinitionIndex = 70206;

class DGDNKBFMHME_MGMGJFOELOE : public ::System::Object
{
public:
	::System::Action* NHIJMEGJIAM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_MGMGJFOELOE__CTOR_OFFSET))(this);
	}

	::System::Void OLAPPAAIEIE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_MGMGJFOELOE_OLAPPAAIEIE_OFFSET))(this);
	}
};
