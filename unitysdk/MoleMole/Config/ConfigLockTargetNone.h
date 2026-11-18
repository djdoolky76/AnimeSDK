#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLockTarget.h"
#include "unitysdk/MGHNAPKHBOG.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define MOLEMOLE_CONFIG_CONFIGLOCKTARGETNONE_NLLENAPEDIF_OFFSET UNITYSDK_OFFSET(0x1A765E00)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGETNONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A765FE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockTargetNone_TypeDefinitionIndex = 58967;

	class ConfigLockTargetNone : public ::MoleMole::Config::ConfigLockTarget
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGETNONE__CTOR_OFFSET))(this);
		}

		::MGHNAPKHBOG NLLENAPEDIF(::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean IMNFFBEOLCD, ::System::Boolean GDBMNPFHEMF, ::System::Boolean GHCOJHODPLJ, ::System::Boolean JCKGCHEOBCA, ::System::Boolean LLOOEPCHLBN, ::System::Boolean KCFDOHCLAKL, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* JCLLEIHKKMA, ::MoleMole::Battle::Entity* HGLDEJMEIBC)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGETNONE_NLLENAPEDIF_OFFSET))(this, AMNIHACKELI, IMNFFBEOLCD, GDBMNPFHEMF, GHCOJHODPLJ, JCKGCHEOBCA, LLOOEPCHLBN, KCFDOHCLAKL, JCLLEIHKKMA, HGLDEJMEIBC);
		}
	};
}
