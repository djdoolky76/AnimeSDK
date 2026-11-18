#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OBBFELCMLJM_MILBHPDKMKH_OFFSET UNITYSDK_OFFSET(0x718330)
#define OBBFELCMLJM_PAINBLOIPMN_OFFSET UNITYSDK_OFFSET(0x718390)

inline static constexpr unsigned int OBBFELCMLJM_TypeDefinitionIndex = 49358;

struct alignas(8) OBBFELCMLJM
{
	::System::Nullable_1<::UnityEngine::Vector3> JOILPOPCHPB; // 0x10
	::System::Byte _padding0[0x8];
	::System::Nullable_1<::UnityEngine::Vector3> MALDOBJEKGI; // 0x20
	::System::Byte _padding1[0x8];
	::System::Nullable_1<::UnityEngine::Vector3> PPJGPICCDLO; // 0x30
	::System::Byte _padding2[0x8];
	::System::Nullable_1<::UnityEngine::Vector3> IOHDMJMBEGL; // 0x40

	::System::Boolean MILBHPDKMKH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBFELCMLJM_MILBHPDKMKH_OFFSET))(this);
	}

	::System::Boolean PAINBLOIPMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBFELCMLJM_PAINBLOIPMN_OFFSET))(this);
	}
};
