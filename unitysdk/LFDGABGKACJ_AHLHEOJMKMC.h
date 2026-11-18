#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class GEIHCPAOKKK;

#define LFDGABGKACJ_AHLHEOJMKMC_OGGBEIPEPDH_OFFSET UNITYSDK_OFFSET(0x15658450)
#define LFDGABGKACJ_AHLHEOJMKMC__CTOR_OFFSET UNITYSDK_OFFSET(0x15658440)

inline static constexpr unsigned int LFDGABGKACJ_AHLHEOJMKMC_TypeDefinitionIndex = 38971;

class LFDGABGKACJ_AHLHEOJMKMC : public ::System::Object
{
public:
	::MoleMole::EntityHandle HPADNAEINPK; // 0x10
	::GEIHCPAOKKK* OHPJHPEOFLD; // 0x20
	::System::Int32 JOFINIIEAIA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDGABGKACJ_AHLHEOJMKMC__CTOR_OFFSET))(this);
	}

	::System::Void OGGBEIPEPDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDGABGKACJ_AHLHEOJMKMC_OGGBEIPEPDH_OFFSET))(this);
	}
};
