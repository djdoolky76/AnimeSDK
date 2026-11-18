#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAKHNGJJI.h"
#include "unitysdk/IHOEGNKCFEO_LEOKLMDMHEK.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ShakeAtom.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

namespace System { class Object; }

#define IHOEGNKCFEO_OKMHCJHKIND_OFFSET UNITYSDK_OFFSET(0x153AAD70)
#define IHOEGNKCFEO_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x153AA750)
#define IHOEGNKCFEO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x153AA1D0)
#define IHOEGNKCFEO__CTOR_OFFSET UNITYSDK_OFFSET(0x153AA0D0)

inline static constexpr unsigned int IHOEGNKCFEO_TypeDefinitionIndex = 71344;

class IHOEGNKCFEO : public ::HOAAKHNGJJI
{
public:
	::Il2CppArray<::System::Object*>* HJIJJHNELFO; // 0x20
	::Il2CppArray<::System::Object*>* NKMLDLJDJMB; // 0x28
	::Il2CppArray<::System::Single>* BGCKMCHAANJ; // 0x30

	::System::Void _ctor(::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom HKNNBOGBIGA, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom HDDNPCGAOGD, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom LKLJGBMLAEK, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom FJOAFFMKBNA, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom GOPHBKFEMIB, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom MKGBOEDNKEB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom))((::PBYTE)hIl2Cpp + IHOEGNKCFEO__CTOR_OFFSET))(this, HKNNBOGBIGA, HDDNPCGAOGD, LKLJGBMLAEK, FJOAFFMKBNA, GOPHBKFEMIB, MKGBOEDNKEB);
	}

	::System::Void _ctor_1(::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom HKNNBOGBIGA, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom HDDNPCGAOGD, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom LKLJGBMLAEK, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom FJOAFFMKBNA, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom GOPHBKFEMIB, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom MKGBOEDNKEB, ::System::Boolean EPGLPGPOOJN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::System::Boolean))((::PBYTE)hIl2Cpp + IHOEGNKCFEO__CTOR_1_OFFSET))(this, HKNNBOGBIGA, HDDNPCGAOGD, LKLJGBMLAEK, FJOAFFMKBNA, GOPHBKFEMIB, MKGBOEDNKEB, EPGLPGPOOJN);
	}

	::MoleMole::UICameraAtom PKAFJHDJEDO(::System::Single IMLLDOHDCNC, ::System::Single PBCAAADNEPK, ::MoleMole::UICameraAtom AIGOOKNCCNH)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + IHOEGNKCFEO_PKAFJHDJEDO_OFFSET))(this, IMLLDOHDCNC, PBCAAADNEPK, AIGOOKNCCNH);
	}

	static ::System::Single OKMHCJHKIND(::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom DFMKILICPFB, ::System::Single& PENCLEDOJLL, ::IHOEGNKCFEO_LEOKLMDMHEK& param_2)
	{
		return ((::System::Single(*)(::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::System::Single&, ::IHOEGNKCFEO_LEOKLMDMHEK&))((::PBYTE)hIl2Cpp + IHOEGNKCFEO_OKMHCJHKIND_OFFSET))(DFMKILICPFB, PENCLEDOJLL, param_2);
	}
};
