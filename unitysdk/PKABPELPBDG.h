#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOONMNPCCNF.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define PKABPELPBDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CE900)

inline static constexpr unsigned int PKABPELPBDG_TypeDefinitionIndex = 81746;

class PKABPELPBDG : public ::IOONMNPCCNF
{
public:
	::System::Single JBFOAKELCNK; // 0x18
	::UnityEngine::Vector2 MPLDDNMCECG; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKABPELPBDG__CTOR_OFFSET))(this);
	}
};
