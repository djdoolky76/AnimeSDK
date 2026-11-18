#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OAMAMDGEJKH;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityFitlerGroup; }
namespace MoleMole::Config { class ConfigTargetSelector; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_BGJAKDDIJND_OFFSET UNITYSDK_OFFSET(0x121C1ED0)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_CLDMMLKAJNH_OFFSET UNITYSDK_OFFSET(0x121C3150)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_HLBICAJCONK_OFFSET UNITYSDK_OFFSET(0x121C2B70)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_IAGAHGGEADC_OFFSET UNITYSDK_OFFSET(0x121C36F0)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_KCHABHAOHFE_OFFSET UNITYSDK_OFFSET(0x121C34F0)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_LEFBCBONKDF_OFFSET UNITYSDK_OFFSET(0x121AB2A0)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_MANELMPCGKA_OFFSET UNITYSDK_OFFSET(0x121C3A40)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET_OKPIFHOADOF_OFFSET UNITYSDK_OFFSET(0x121C3810)
#define MOLEMOLE_CONFIG_CONFIGLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x121C2970)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockTarget_TypeDefinitionIndex = 39786;

	class ConfigLockTarget : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigEntityFitlerGroup* filterGroup; // 0x10
		::MoleMole::Config::ConfigTargetSelector* targetSelector; // 0x18
		::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* debugCandidateList; // 0x20
		::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* candidateListByDistance; // 0x28
		::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* candidateListByDistancePerEntity; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* filteredCandidateList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* BGJAKDDIJND(::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Collections::Generic::List_1<::System::UInt32>* NMLHOFLPLCD, ::System::Single KGKGLNJAJGN, ::UnityEngine::Vector3 MDEICMIHPPC, ::System::Boolean& OKJLNMAKEML)
		{
			return ((::System::Collections::Generic::List_1<::OAMAMDGEJKH*>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_BGJAKDDIJND_OFFSET))(this, AMNIHACKELI, NMLHOFLPLCD, KGKGLNJAJGN, MDEICMIHPPC, OKJLNMAKEML);
		}

		::System::Void HLBICAJCONK(::System::Collections::Generic::List_1<::System::UInt32>* NMLHOFLPLCD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_HLBICAJCONK_OFFSET))(this, NMLHOFLPLCD);
		}

		::MGHNAPKHBOG CLDMMLKAJNH(::MGHNAPKHBOG HCOKBKFECIC)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_CLDMMLKAJNH_OFFSET))(this, HCOKBKFECIC);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* KCHABHAOHFE(::MoleMole::Battle::Entity* OMPHGGCEIBD)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_KCHABHAOHFE_OFFSET))(this, OMPHGGCEIBD);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* OKPIFHOADOF(::MoleMole::Battle::Entity* OMPHGGCEIBD)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_OKPIFHOADOF_OFFSET))(this, OMPHGGCEIBD);
		}

		::MGHNAPKHBOG LEFBCBONKDF(::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean IMNFFBEOLCD, ::System::Boolean GDBMNPFHEMF, ::System::Boolean GHCOJHODPLJ, ::System::Boolean JCKGCHEOBCA, ::System::Boolean LLOOEPCHLBN, ::System::Boolean KCFDOHCLAKL, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* JCLLEIHKKMA, ::MoleMole::Battle::Entity* HGLDEJMEIBC)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_LEFBCBONKDF_OFFSET))(this, AMNIHACKELI, IMNFFBEOLCD, GDBMNPFHEMF, GHCOJHODPLJ, JCKGCHEOBCA, LLOOEPCHLBN, KCFDOHCLAKL, JCLLEIHKKMA, HGLDEJMEIBC);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* IAGAHGGEADC(::MoleMole::Battle::Entity* AMNIHACKELI)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_IAGAHGGEADC_OFFSET))(this, AMNIHACKELI);
		}

		::System::Boolean MANELMPCGKA(::MoleMole::Battle::Entity* HOLFNDIMGJJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGET_MANELMPCGKA_OFFSET))(this, HOLFNDIMGJJ);
		}
	};
}
