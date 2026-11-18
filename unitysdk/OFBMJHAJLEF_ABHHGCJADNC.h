#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define OFBMJHAJLEF_ABHHGCJADNC_GDHCONJBMHP_OFFSET UNITYSDK_OFFSET(0x114F3A40)
#define OFBMJHAJLEF_ABHHGCJADNC__CTOR_OFFSET UNITYSDK_OFFSET(0x114F2C10)

inline static constexpr unsigned int OFBMJHAJLEF_ABHHGCJADNC_TypeDefinitionIndex = 56496;

class OFBMJHAJLEF_ABHHGCJADNC : public ::System::Object
{
public:
	::System::Action* HKEBHFKHBCC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_ABHHGCJADNC__CTOR_OFFSET))(this);
	}

	::System::Void GDHCONJBMHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_ABHHGCJADNC_GDHCONJBMHP_OFFSET))(this);
	}
};
