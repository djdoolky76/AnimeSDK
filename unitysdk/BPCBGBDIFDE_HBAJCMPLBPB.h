#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GLAAJLGNEGP;

#define BPCBGBDIFDE_HBAJCMPLBPB_FGGIAJDKOOC_OFFSET UNITYSDK_OFFSET(0x7D62C0)

inline static constexpr unsigned int BPCBGBDIFDE_HBAJCMPLBPB_TypeDefinitionIndex = 78649;

struct alignas(8) BPCBGBDIFDE_HBAJCMPLBPB
{
	::GLAAJLGNEGP* JLEKIOBFKMP; // 0x10
	::UnityEngine::Vector3 BDIEDFPGFHF; // 0x18
	::System::Int32 HLBKHEFJAPH; // 0x24

	::System::Int32 FGGIAJDKOOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_HBAJCMPLBPB_FGGIAJDKOOC_OFFSET))(this);
	}
};
