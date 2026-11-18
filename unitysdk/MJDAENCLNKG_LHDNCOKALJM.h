#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MJDAENCLNKG_LHDNCOKALJM_HCDMMJLJLAL_OFFSET UNITYSDK_OFFSET(0x1A65E070)
#define MJDAENCLNKG_LHDNCOKALJM_KBAFCIJONFJ_OFFSET UNITYSDK_OFFSET(0x1A65E080)
#define MJDAENCLNKG_LHDNCOKALJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65E060)

inline static constexpr unsigned int MJDAENCLNKG_LHDNCOKALJM_TypeDefinitionIndex = 61515;

class MJDAENCLNKG_LHDNCOKALJM : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10
	::System::Action* KCNFHMFDOHI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDAENCLNKG_LHDNCOKALJM__CTOR_OFFSET))(this);
	}

	::System::Void HCDMMJLJLAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDAENCLNKG_LHDNCOKALJM_HCDMMJLJLAL_OFFSET))(this);
	}

	::System::Void KBAFCIJONFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDAENCLNKG_LHDNCOKALJM_KBAFCIJONFJ_OFFSET))(this);
	}
};
