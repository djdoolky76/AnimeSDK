#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HDNPHHNEPIF_MDGPJBCBEIE_HCDMMJLJLAL_OFFSET UNITYSDK_OFFSET(0x146F23D0)
#define HDNPHHNEPIF_MDGPJBCBEIE_KBAFCIJONFJ_OFFSET UNITYSDK_OFFSET(0x146F23E0)
#define HDNPHHNEPIF_MDGPJBCBEIE__CTOR_OFFSET UNITYSDK_OFFSET(0x146F23C0)

inline static constexpr unsigned int HDNPHHNEPIF_MDGPJBCBEIE_TypeDefinitionIndex = 77429;

class HDNPHHNEPIF_MDGPJBCBEIE : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10
	::System::Action* KCNFHMFDOHI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNPHHNEPIF_MDGPJBCBEIE__CTOR_OFFSET))(this);
	}

	::System::Void HCDMMJLJLAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNPHHNEPIF_MDGPJBCBEIE_HCDMMJLJLAL_OFFSET))(this);
	}

	::System::Void KBAFCIJONFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNPHHNEPIF_MDGPJBCBEIE_KBAFCIJONFJ_OFFSET))(this);
	}
};
