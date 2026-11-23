#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

#define BD2E7EA1967E8CD1_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x288A4C0)
#define BD2E7EA1967E8CD1__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BD2E7EA1967E8CD1_TypeDefinitionIndex = 16159;

class BD2E7EA1967E8CD1 : public ::ABEBA93AD61764EF
{
public:
	::UnityEngine::E46B881AA2636190 AFF02FCB42AE2AD1; // 0x18
	::UnityEngine::E46B881AA2636190 F42EE5181E4ABC54; // 0x28

	::System::Boolean FC3208D7B8C7EE04(::BD2E7EA1967E8CD1* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::BD2E7EA1967E8CD1*))((::PBYTE)hIl2Cpp + BD2E7EA1967E8CD1_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD2E7EA1967E8CD1__CTOR_OFFSET))(this);
	}
};
