#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KBOHMMAOIJI;
namespace System { class Action; }

#define KBOHMMAOIJI_EEGBAJMADMB_MKJBFGNBJBE_OFFSET UNITYSDK_OFFSET(0x186093F0)
#define KBOHMMAOIJI_EEGBAJMADMB_ONMDOOPLMOL_OFFSET UNITYSDK_OFFSET(0x18609400)
#define KBOHMMAOIJI_EEGBAJMADMB__CTOR_OFFSET UNITYSDK_OFFSET(0x186093E0)

inline static constexpr unsigned int KBOHMMAOIJI_EEGBAJMADMB_TypeDefinitionIndex = 72551;

class KBOHMMAOIJI_EEGBAJMADMB : public ::System::Object
{
public:
	::System::Action* HKEBHFKHBCC; // 0x10
	::KBOHMMAOIJI* KLHPEBKNIFB; // 0x18
	::System::Boolean GJAKJPAHIFJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOHMMAOIJI_EEGBAJMADMB__CTOR_OFFSET))(this);
	}

	::System::Void MKJBFGNBJBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOHMMAOIJI_EEGBAJMADMB_MKJBFGNBJBE_OFFSET))(this);
	}

	::System::Void ONMDOOPLMOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOHMMAOIJI_EEGBAJMADMB_ONMDOOPLMOL_OFFSET))(this);
	}
};
