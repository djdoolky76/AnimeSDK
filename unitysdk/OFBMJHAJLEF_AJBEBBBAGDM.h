#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OFBMJHAJLEF;
namespace System { class Action; }

#define OFBMJHAJLEF_AJBEBBBAGDM_FGIDBGDBPDB_OFFSET UNITYSDK_OFFSET(0xF17F960)
#define OFBMJHAJLEF_AJBEBBBAGDM__CTOR_OFFSET UNITYSDK_OFFSET(0xF17F950)

inline static constexpr unsigned int OFBMJHAJLEF_AJBEBBBAGDM_TypeDefinitionIndex = 56491;

class OFBMJHAJLEF_AJBEBBBAGDM : public ::System::Object
{
public:
	::OFBMJHAJLEF* KLHPEBKNIFB; // 0x10
	::System::Action* HKEBHFKHBCC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_AJBEBBBAGDM__CTOR_OFFSET))(this);
	}

	::System::Void FGIDBGDBPDB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_AJBEBBBAGDM_FGIDBGDBPDB_OFFSET))(this);
	}
};
