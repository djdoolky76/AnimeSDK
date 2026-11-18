#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PIFHAHFCMEL.h"

class MAFGFDMEHOG;
class MEHLONLGMGK;

#define MAFGFDMEHOG_IHAMELFONJF_IHEJEJOMHIA_OFFSET UNITYSDK_OFFSET(0x18523190)
#define MAFGFDMEHOG_IHAMELFONJF__CTOR_OFFSET UNITYSDK_OFFSET(0x18523180)

inline static constexpr unsigned int MAFGFDMEHOG_IHAMELFONJF_TypeDefinitionIndex = 46027;

class MAFGFDMEHOG_IHAMELFONJF : public ::System::Object
{
public:
	::MAFGFDMEHOG* KLHPEBKNIFB; // 0x10
	::MEHLONLGMGK* DFMKILICPFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_IHAMELFONJF__CTOR_OFFSET))(this);
	}

	::System::Void IHEJEJOMHIA(::PIFHAHFCMEL JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::PIFHAHFCMEL))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_IHAMELFONJF_IHEJEJOMHIA_OFFSET))(this, JKBLDFBGBPK);
	}
};
