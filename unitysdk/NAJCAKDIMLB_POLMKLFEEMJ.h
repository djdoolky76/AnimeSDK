#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NAJCAKDIMLB_POLMKLFEEMJ_HCDMMJLJLAL_OFFSET UNITYSDK_OFFSET(0x18F8D0E0)
#define NAJCAKDIMLB_POLMKLFEEMJ_KBAFCIJONFJ_OFFSET UNITYSDK_OFFSET(0x18F8D0D0)
#define NAJCAKDIMLB_POLMKLFEEMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18F8D0C0)

inline static constexpr unsigned int NAJCAKDIMLB_POLMKLFEEMJ_TypeDefinitionIndex = 53239;

class NAJCAKDIMLB_POLMKLFEEMJ : public ::System::Object
{
public:
	::System::Action* KCNFHMFDOHI; // 0x10
	::System::Action* POCANNAFFOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJCAKDIMLB_POLMKLFEEMJ__CTOR_OFFSET))(this);
	}

	::System::Void KBAFCIJONFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJCAKDIMLB_POLMKLFEEMJ_KBAFCIJONFJ_OFFSET))(this);
	}

	::System::Void HCDMMJLJLAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJCAKDIMLB_POLMKLFEEMJ_HCDMMJLJLAL_OFFSET))(this);
	}
};
