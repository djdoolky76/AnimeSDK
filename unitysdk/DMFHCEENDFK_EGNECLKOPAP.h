#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DMFHCEENDFK_EGNECLKOPAP_HCDMMJLJLAL_OFFSET UNITYSDK_OFFSET(0x12BBA6B0)
#define DMFHCEENDFK_EGNECLKOPAP_KBAFCIJONFJ_OFFSET UNITYSDK_OFFSET(0x12BBA6C0)
#define DMFHCEENDFK_EGNECLKOPAP__CTOR_OFFSET UNITYSDK_OFFSET(0x12BBA6A0)

inline static constexpr unsigned int DMFHCEENDFK_EGNECLKOPAP_TypeDefinitionIndex = 81549;

class DMFHCEENDFK_EGNECLKOPAP : public ::System::Object
{
public:
	::System::Action* KCNFHMFDOHI; // 0x10
	::System::Action* POCANNAFFOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFHCEENDFK_EGNECLKOPAP__CTOR_OFFSET))(this);
	}

	::System::Void HCDMMJLJLAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFHCEENDFK_EGNECLKOPAP_HCDMMJLJLAL_OFFSET))(this);
	}

	::System::Void KBAFCIJONFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFHCEENDFK_EGNECLKOPAP_KBAFCIJONFJ_OFFSET))(this);
	}
};
