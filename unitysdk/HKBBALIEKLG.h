#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOONMNPCCNF.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define HKBBALIEKLG__CTOR_OFFSET UNITYSDK_OFFSET(0x14D326B0)

inline static constexpr unsigned int HKBBALIEKLG_TypeDefinitionIndex = 82245;

class HKBBALIEKLG : public ::IOONMNPCCNF
{
public:
	::System::Single CLMNLPKFBFA; // 0x18
	::System::Single MHLPMPJGONL; // 0x1C
	::System::Single HKNAFPMACKM; // 0x20
	::System::Single PDPLDNECBPA; // 0x24
	::UnityEngine::Vector2 MPLDDNMCECG; // 0x28
	::System::Single JBFOAKELCNK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBBALIEKLG__CTOR_OFFSET))(this);
	}
};
