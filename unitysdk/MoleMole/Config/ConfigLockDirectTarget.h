#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLockTarget.h"
#include "unitysdk/MGHNAPKHBOG.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define MOLEMOLE_CONFIG_CONFIGLOCKDIRECTTARGET_HKAPCBFPKCG_OFFSET UNITYSDK_OFFSET(0x11E98820)
#define MOLEMOLE_CONFIG_CONFIGLOCKDIRECTTARGET_IGAMDHACECC_OFFSET UNITYSDK_OFFSET(0x11E98580)
#define MOLEMOLE_CONFIG_CONFIGLOCKDIRECTTARGET_NLLENAPEDIF_OFFSET UNITYSDK_OFFSET(0x11E983C0)
#define MOLEMOLE_CONFIG_CONFIGLOCKDIRECTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x11E989F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockDirectTarget_TypeDefinitionIndex = 90612;

	class ConfigLockDirectTarget : public ::MoleMole::Config::ConfigLockTarget
	{
	public:
		::System::String* FallbackLockTargetID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKDIRECTTARGET__CTOR_OFFSET))(this);
		}

		::MGHNAPKHBOG NLLENAPEDIF(::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean IMNFFBEOLCD, ::System::Boolean GDBMNPFHEMF, ::System::Boolean GHCOJHODPLJ, ::System::Boolean JCKGCHEOBCA, ::System::Boolean LLOOEPCHLBN, ::System::Boolean KCFDOHCLAKL, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* JCLLEIHKKMA, ::MoleMole::Battle::Entity* HGLDEJMEIBC)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKDIRECTTARGET_NLLENAPEDIF_OFFSET))(this, AMNIHACKELI, IMNFFBEOLCD, GDBMNPFHEMF, GHCOJHODPLJ, JCKGCHEOBCA, LLOOEPCHLBN, KCFDOHCLAKL, JCLLEIHKKMA, HGLDEJMEIBC);
		}

		::System::Boolean IGAMDHACECC(::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* JCLLEIHKKMA, ::MGHNAPKHBOG& CHDHDONHOLC)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*, ::MGHNAPKHBOG&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKDIRECTTARGET_IGAMDHACECC_OFFSET))(this, AMNIHACKELI, JCLLEIHKKMA, CHDHDONHOLC);
		}

		static ::MGHNAPKHBOG HKAPCBFPKCG(::MoleMole::Battle::Entity* AMNIHACKELI, ::MGHNAPKHBOG CHDHDONHOLC, ::System::Boolean IMNFFBEOLCD, ::System::Boolean GDBMNPFHEMF, ::System::Boolean JCKGCHEOBCA, ::System::Boolean KCFDOHCLAKL)
		{
			return ((::MGHNAPKHBOG(*)(::MoleMole::Battle::Entity*, ::MGHNAPKHBOG, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKDIRECTTARGET_HKAPCBFPKCG_OFFSET))(AMNIHACKELI, CHDHDONHOLC, IMNFFBEOLCD, GDBMNPFHEMF, JCKGCHEOBCA, KCFDOHCLAKL);
		}
	};
}
