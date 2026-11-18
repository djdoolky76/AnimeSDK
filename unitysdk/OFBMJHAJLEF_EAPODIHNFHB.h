#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define OFBMJHAJLEF_EAPODIHNFHB_OHGENOLKCCF_OFFSET UNITYSDK_OFFSET(0xE0F3880)
#define OFBMJHAJLEF_EAPODIHNFHB__CTOR_OFFSET UNITYSDK_OFFSET(0xE0F3870)

inline static constexpr unsigned int OFBMJHAJLEF_EAPODIHNFHB_TypeDefinitionIndex = 56492;

class OFBMJHAJLEF_EAPODIHNFHB : public ::System::Object
{
public:
	::System::Action* HKEBHFKHBCC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_EAPODIHNFHB__CTOR_OFFSET))(this);
	}

	::System::Void OHGENOLKCCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_EAPODIHNFHB_OHGENOLKCCF_OFFSET))(this);
	}
};
