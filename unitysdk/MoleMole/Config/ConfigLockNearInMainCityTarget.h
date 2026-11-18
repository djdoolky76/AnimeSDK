#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLockTarget.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OAMAMDGEJKH;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_AFCDNAPKLFC_OFFSET UNITYSDK_OFFSET(0x19B1BB00)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_AHLDBDIKPJD_OFFSET UNITYSDK_OFFSET(0x19B19690)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_BGJAKDDIJND_OFFSET UNITYSDK_OFFSET(0x19B1B0E0)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_HOKMODKPIJM_OFFSET UNITYSDK_OFFSET(0x19B1A0E0)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_NLLENAPEDIF_OFFSET UNITYSDK_OFFSET(0x19B19570)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1BA40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockNearInMainCityTarget_TypeDefinitionIndex = 59440;

	class ConfigLockNearInMainCityTarget : public ::MoleMole::Config::ConfigLockTarget
	{
	public:
		::System::Single LockOnRadius; // 0x40
		::System::Single LockOnAngle; // 0x44
		::UnityEngine::AnimationCurve* DistanceWeight; // 0x48
		::UnityEngine::AnimationCurve* EntityAngleWeight; // 0x50
		::UnityEngine::AnimationCurve* CameraAngleWeight; // 0x58
		::UnityEngine::AnimationCurve* DragDirectModeOverrideEntityAngleWeight; // 0x60
		::UnityEngine::AnimationCurve* DragDirectModeOverrideCameraAngleWeight; // 0x68
		::System::Func_5<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::Single>* GetOverrideRadius; // 0x70
		::System::Func_5<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::Single>* GetOverrideAngle; // 0x78
		::System::Func_3<::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single>* GetWeight; // 0x80
		::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* finalCandicateList; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET__CTOR_OFFSET))(this);
		}

		::MGHNAPKHBOG NLLENAPEDIF(::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean IMNFFBEOLCD, ::System::Boolean GDBMNPFHEMF, ::System::Boolean GHCOJHODPLJ, ::System::Boolean JCKGCHEOBCA, ::System::Boolean LLOOEPCHLBN, ::System::Boolean KCFDOHCLAKL, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* JCLLEIHKKMA, ::MoleMole::Battle::Entity* HGLDEJMEIBC)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_NLLENAPEDIF_OFFSET))(this, AMNIHACKELI, IMNFFBEOLCD, GDBMNPFHEMF, GHCOJHODPLJ, JCKGCHEOBCA, LLOOEPCHLBN, KCFDOHCLAKL, JCLLEIHKKMA, HGLDEJMEIBC);
		}

		::OAMAMDGEJKH* HOKMODKPIJM(::MoleMole::Battle::Entity* CBCNBLOFPLO, ::UnityEngine::Vector3 GKOEEJHILPG, ::UnityEngine::Vector3 PIAJFHFLAAD, ::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* NMLHOFLPLCD, ::System::Single GANKIIECJHF, ::System::Single KNGCNADHHFO, ::System::Boolean FNEDONOJBON)
		{
			return ((::OAMAMDGEJKH*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::OAMAMDGEJKH*>*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_HOKMODKPIJM_OFFSET))(this, CBCNBLOFPLO, GKOEEJHILPG, PIAJFHFLAAD, NMLHOFLPLCD, GANKIIECJHF, KNGCNADHHFO, FNEDONOJBON);
		}

		::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* BGJAKDDIJND(::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Collections::Generic::List_1<::System::UInt32>* NMLHOFLPLCD, ::System::Single KGKGLNJAJGN, ::UnityEngine::Vector3 MDEICMIHPPC, ::System::Boolean& OKJLNMAKEML)
		{
			return ((::System::Collections::Generic::List_1<::OAMAMDGEJKH*>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_BGJAKDDIJND_OFFSET))(this, AMNIHACKELI, NMLHOFLPLCD, KGKGLNJAJGN, MDEICMIHPPC, OKJLNMAKEML);
		}

		::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* AFCDNAPKLFC(::MoleMole::Battle::Entity* MIALFKCCCPI, ::System::Collections::Generic::List_1<::System::UInt32>* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::UnityEngine::Vector3 MPBJAGIKPJM, ::System::Boolean& DDMDINPGCFI)
		{
			return ((::System::Collections::Generic::List_1<::OAMAMDGEJKH*>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_AFCDNAPKLFC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI);
		}

		::MGHNAPKHBOG AHLDBDIKPJD(::MoleMole::Battle::Entity* CBCNBLOFPLO, ::System::Single KNGCNADHHFO, ::System::Boolean IMNFFBEOLCD, ::System::Boolean GDBMNPFHEMF, ::System::Boolean GHCOJHODPLJ, ::System::Boolean JCKGCHEOBCA, ::System::Boolean LLOOEPCHLBN, ::System::Boolean KCFDOHCLAKL, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* JCLLEIHKKMA)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET_AHLDBDIKPJD_OFFSET))(this, CBCNBLOFPLO, KNGCNADHHFO, IMNFFBEOLCD, GDBMNPFHEMF, GHCOJHODPLJ, JCKGCHEOBCA, LLOOEPCHLBN, KCFDOHCLAKL, JCLLEIHKKMA);
		}
	};
}
