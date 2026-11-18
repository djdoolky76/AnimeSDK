#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class PACJAPMKBKK;

#define PACJAPMKBKK_HICIGOGPKMI_BBFJALLAMDE_OFFSET UNITYSDK_OFFSET(0xFD99A50)
#define PACJAPMKBKK_HICIGOGPKMI__CTOR_OFFSET UNITYSDK_OFFSET(0xFD99A40)

inline static constexpr unsigned int PACJAPMKBKK_HICIGOGPKMI_TypeDefinitionIndex = 63161;

class PACJAPMKBKK_HICIGOGPKMI : public ::System::Object
{
public:
	::MoleMole::EntityHandle HPOBHPLDBEF; // 0x10
	::PACJAPMKBKK* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACJAPMKBKK_HICIGOGPKMI__CTOR_OFFSET))(this);
	}

	::System::Void BBFJALLAMDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACJAPMKBKK_HICIGOGPKMI_BBFJALLAMDE_OFFSET))(this);
	}
};
