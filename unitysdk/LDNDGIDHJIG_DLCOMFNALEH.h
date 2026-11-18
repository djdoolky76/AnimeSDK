#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define LDNDGIDHJIG_DLCOMFNALEH_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0xD4230E0)
#define LDNDGIDHJIG_DLCOMFNALEH__CTOR_OFFSET UNITYSDK_OFFSET(0xD423230)

inline static constexpr unsigned int LDNDGIDHJIG_DLCOMFNALEH_TypeDefinitionIndex = 46780;

class LDNDGIDHJIG_DLCOMFNALEH : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* LLHMJCEIDCM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNDGIDHJIG_DLCOMFNALEH__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNDGIDHJIG_DLCOMFNALEH_LBJEOHBBBPN_OFFSET))(this);
	}
};
