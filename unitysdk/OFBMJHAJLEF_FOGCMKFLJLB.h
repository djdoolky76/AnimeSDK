#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OFBMJHAJLEF;
namespace System { class Action; }

#define OFBMJHAJLEF_FOGCMKFLJLB_JCBAMGGGPMO_OFFSET UNITYSDK_OFFSET(0x1B77D380)
#define OFBMJHAJLEF_FOGCMKFLJLB_LOMPHLKMAGC_OFFSET UNITYSDK_OFFSET(0x1B77D350)
#define OFBMJHAJLEF_FOGCMKFLJLB_MIFHNIAPPBJ_OFFSET UNITYSDK_OFFSET(0x1B77D3C0)
#define OFBMJHAJLEF_FOGCMKFLJLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77D340)

inline static constexpr unsigned int OFBMJHAJLEF_FOGCMKFLJLB_TypeDefinitionIndex = 56497;

class OFBMJHAJLEF_FOGCMKFLJLB : public ::System::Object
{
public:
	::OFBMJHAJLEF* KLHPEBKNIFB; // 0x10
	::System::Action* HKEBHFKHBCC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_FOGCMKFLJLB__CTOR_OFFSET))(this);
	}

	::System::Void LOMPHLKMAGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_FOGCMKFLJLB_LOMPHLKMAGC_OFFSET))(this);
	}

	::System::Void JCBAMGGGPMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_FOGCMKFLJLB_JCBAMGGGPMO_OFFSET))(this);
	}

	::System::Void MIFHNIAPPBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_FOGCMKFLJLB_MIFHNIAPPBJ_OFFSET))(this);
	}
};
