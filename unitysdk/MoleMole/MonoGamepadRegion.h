#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCIGAHEFLF.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/MoleMole/MonoGamepadRegion_ManagedModuleConfig.h"

namespace System { class Object; }

#define MOLEMOLE_MONOGAMEPADREGION_ADDMODULE_OFFSET UNITYSDK_OFFSET(0x10434CC0)
#define MOLEMOLE_MONOGAMEPADREGION_CLEARMODULES_OFFSET UNITYSDK_OFFSET(0x104350D0)
#define MOLEMOLE_MONOGAMEPADREGION_CMJCFCMIABJ_OFFSET UNITYSDK_OFFSET(0x10435340)
#define MOLEMOLE_MONOGAMEPADREGION_FAKDONMLLKA_OFFSET UNITYSDK_OFFSET(0x10434810)
#define MOLEMOLE_MONOGAMEPADREGION_FNNGPEIIPNC_OFFSET UNITYSDK_OFFSET(0x104347C0)
#define MOLEMOLE_MONOGAMEPADREGION_IDDBBFMNJMP_OFFSET UNITYSDK_OFFSET(0x10434C50)
#define MOLEMOLE_MONOGAMEPADREGION_KMKNDCPHIHC_OFFSET UNITYSDK_OFFSET(0x10435320)
#define MOLEMOLE_MONOGAMEPADREGION_LLBDDDHHBGN_OFFSET UNITYSDK_OFFSET(0x10435330)
#define MOLEMOLE_MONOGAMEPADREGION_LPCECNCFKGJ_OFFSET UNITYSDK_OFFSET(0x10434750)
#define MOLEMOLE_MONOGAMEPADREGION_MOBAHBNLJPL_OFFSET UNITYSDK_OFFSET(0x10434560)
#define MOLEMOLE_MONOGAMEPADREGION_ODDNJDKNGBN_OFFSET UNITYSDK_OFFSET(0x104353D0)
#define MOLEMOLE_MONOGAMEPADREGION_REFRESHMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x10435210)
#define MOLEMOLE_MONOGAMEPADREGION_REMOVEMODULE_OFFSET UNITYSDK_OFFSET(0x10434F70)
#define MOLEMOLE_MONOGAMEPADREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x104352A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadRegion_TypeDefinitionIndex = 89441;

	class MonoGamepadRegion : public ::MoleMole::MonoGamepadModule
	{
	public:
		::Il2CppArray<::System::Object*>* _managedModules; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION__CTOR_OFFSET))(this);
		}

		::System::Void MOBAHBNLJPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_MOBAHBNLJPL_OFFSET))(this);
		}

		::MNCIGAHEFLF LPCECNCFKGJ(::MoleMole::InputLogicEventType MBEHILFGMGI)
		{
			return ((::MNCIGAHEFLF(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_LPCECNCFKGJ_OFFSET))(this, MBEHILFGMGI);
		}

		::System::Void FNNGPEIIPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_FNNGPEIIPNC_OFFSET))(this);
		}

		::System::Void IDDBBFMNJMP(::System::Boolean MNDGBAGHIBF, ::System::Boolean GHGCCMKDIPO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_IDDBBFMNJMP_OFFSET))(this, MNDGBAGHIBF, GHGCCMKDIPO);
		}

		::System::Void AddModule(::MoleMole::MonoGamepadRegion_ManagedModuleConfig DFMKILICPFB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadRegion_ManagedModuleConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_ADDMODULE_OFFSET))(this, DFMKILICPFB);
		}

		::System::Void RemoveModule(::MoleMole::MonoGamepadRegion_ManagedModuleConfig DFMKILICPFB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadRegion_ManagedModuleConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_REMOVEMODULE_OFFSET))(this, DFMKILICPFB);
		}

		::System::Void ClearModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_CLEARMODULES_OFFSET))(this);
		}

		::System::Void RefreshModuleFocus(::System::Boolean DCFANHOIMOB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_REFRESHMODULEFOCUS_OFFSET))(this, DCFANHOIMOB);
		}

		::System::Void FAKDONMLLKA(::System::Boolean JLGCMPJMDLO, ::System::Boolean DCFANHOIMOB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_FAKDONMLLKA_OFFSET))(this, JLGCMPJMDLO, DCFANHOIMOB);
		}

		::System::Void KMKNDCPHIHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_KMKNDCPHIHC_OFFSET))(this);
		}

		::System::Void LLBDDDHHBGN(::System::Boolean MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_LLBDDDHHBGN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::MNCIGAHEFLF CMJCFCMIABJ(::MoleMole::InputLogicEventType MIALFKCCCPI)
		{
			return ((::MNCIGAHEFLF(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_CMJCFCMIABJ_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODDNJDKNGBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_ODDNJDKNGBN_OFFSET))(this);
		}
	};
}
