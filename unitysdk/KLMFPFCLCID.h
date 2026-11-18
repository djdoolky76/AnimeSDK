#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"

#define KLMFPFCLCID__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D1860)

inline static constexpr unsigned int KLMFPFCLCID_TypeDefinitionIndex = 51040;

class KLMFPFCLCID
{
public:
	::System::Void _ctor(::System::Int32 PDDFCKMAAAM, ::MoleMole::Vector2Int JCDPMKNIIPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + KLMFPFCLCID__CTOR_OFFSET))(this, PDDFCKMAAAM, JCDPMKNIIPA);
	}
};
