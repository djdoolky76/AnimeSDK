#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/HollowSystemType.h"
#include "unitysdk/ProtoScript/HollowSystemUIState.h"
#include "unitysdk/System/Object.h"

#define FLGGCIIJELC__CTOR_OFFSET UNITYSDK_OFFSET(0x142A3910)

inline static constexpr unsigned int FLGGCIIJELC_TypeDefinitionIndex = 88864;

class FLGGCIIJELC : public ::System::Object
{
public:
	::ProtoScript::HollowSystemType KIICJDBLIMJ; // 0x10
	::ProtoScript::HollowSystemUIState NOOLOILNGPL; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGGCIIJELC__CTOR_OFFSET))(this);
	}
};
