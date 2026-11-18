#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLockTarget.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MoleMole/Config/ConfigLockNearTarget_JDFNFHLGJDN.h"
#include "unitysdk/MoleMole/Config/ConfigLockNearTarget_JMBFHFCBPOM.h"
#include "unitysdk/MoleMole/Config/ConfigLockNearTarget_MIGNEKMGNDG.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ACNLKLCDALA;
class CAPAFILOMGC;
class HAFLGNENJDI;
class OAMAMDGEJKH;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_AHLDBDIKPJD_OFFSET UNITYSDK_OFFSET(0x16411F90)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_CAPCJFGPJKP_OFFSET UNITYSDK_OFFSET(0x16415D30)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_EFMCGNNHLOP_OFFSET UNITYSDK_OFFSET(0x16414730)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_EJLIFGDOKGH_OFFSET UNITYSDK_OFFSET(0x16415A70)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_FLHGDDHPPPH_OFFSET UNITYSDK_OFFSET(0x16415250)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_HOKMODKPIJM_OFFSET UNITYSDK_OFFSET(0x16412A80)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_IFANKJFNPAD_OFFSET UNITYSDK_OFFSET(0x16415060)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_IGNLCAOMPOC_OFFSET UNITYSDK_OFFSET(0x16414CB0)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_LKIHOOHPNAI_OFFSET UNITYSDK_OFFSET(0x16415700)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_MPCLKAKBFAP_OFFSET UNITYSDK_OFFSET(0x16414900)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_NHANIMFANIC_OFFSET UNITYSDK_OFFSET(0x164145D0)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_NLLENAPEDIF_OFFSET UNITYSDK_OFFSET(0x16411E60)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_OBPHODDCAOF_OFFSET UNITYSDK_OFFSET(0x16415C80)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x16414640)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockNearTarget_TypeDefinitionIndex = 65939;

	class ConfigLockNearTarget : public ::MoleMole::Config::ConfigLockTarget
	{
	public:
		::System::Single LockOnRadiusFar; // 0x40
		::System::Single LockOnRadiusNear; // 0x44
		::System::Single LockOnAngleUnderControlSteer; // 0x48
		::System::Single LockOnAngleInIdle; // 0x4C
		::System::Single LockOnCameraAngle; // 0x50
		::System::Single stillAngle; // 0x54
		::System::Single AimAngle; // 0x58
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* DistanceWeight; // 0x60
		::UnityEngine::AnimationCurve* EntityAngleWeight; // 0x68
		::UnityEngine::AnimationCurve* CameraAngleWeight; // 0x70
		::UnityEngine::AnimationCurve* DragDirectModeOverrideEntityAngleWeight; // 0x78
		::UnityEngine::AnimationCurve* DragDirectModeOverrideCameraAngleWeight; // 0x80
		::System::Single BeyondCamViewWeight; // 0x88
		::System::Single BeyondCamViewWeightWithJoystickControl; // 0x8C
		::System::Boolean StunEntityApplyBeyondCamViewWeight; // 0x90
		::System::Byte _padding1[0x3];
		::System::Single StunEntityExtraScore; // 0x94
		::System::Boolean isLockInBack; // 0x98
		::System::Byte _padding2[0x3];
		::System::Single lookIKSameWeight; // 0x9C
		::System::Boolean ignoreSteer; // 0xA0
		::System::Boolean PreferLastAttackTarget; // 0xA1
		::System::Boolean PreferManualLockTarget; // 0xA2
		::System::Boolean IgnoreAISelectTarget; // 0xA3
		::System::UInt32 _lookIKPrecedenceEntityID; // 0xA4
		::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* _finalCandidateList; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET__CTOR_OFFSET))(this);
		}

		::MGHNAPKHBOG NLLENAPEDIF(::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean IMNFFBEOLCD, ::System::Boolean GDBMNPFHEMF, ::System::Boolean GHCOJHODPLJ, ::System::Boolean JCKGCHEOBCA, ::System::Boolean LLOOEPCHLBN, ::System::Boolean KCFDOHCLAKL, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* JCLLEIHKKMA, ::MoleMole::Battle::Entity* HGLDEJMEIBC)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_NLLENAPEDIF_OFFSET))(this, AMNIHACKELI, IMNFFBEOLCD, GDBMNPFHEMF, GHCOJHODPLJ, JCKGCHEOBCA, LLOOEPCHLBN, KCFDOHCLAKL, JCLLEIHKKMA, HGLDEJMEIBC);
		}

		::OAMAMDGEJKH* HOKMODKPIJM(::MoleMole::Battle::Entity* CBCNBLOFPLO, ::UnityEngine::Vector3 GKOEEJHILPG, ::UnityEngine::Vector3 PIAJFHFLAAD, ::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* NMLHOFLPLCD, ::System::Single GANKIIECJHF, ::System::Single KNGCNADHHFO, ::HAFLGNENJDI* AEOIHGKHAIL, ::System::Boolean FNEDONOJBON)
		{
			return ((::OAMAMDGEJKH*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::OAMAMDGEJKH*>*, ::System::Single, ::System::Single, ::HAFLGNENJDI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_HOKMODKPIJM_OFFSET))(this, CBCNBLOFPLO, GKOEEJHILPG, PIAJFHFLAAD, NMLHOFLPLCD, GANKIIECJHF, KNGCNADHHFO, AEOIHGKHAIL, FNEDONOJBON);
		}

		::System::Single EFMCGNNHLOP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_EFMCGNNHLOP_OFFSET))(this);
		}

		::System::Boolean MPCLKAKBFAP(::UnityEngine::Vector3 MDEICMIHPPC, ::UnityEngine::Vector3 DFDIKCJJCCD, ::OAMAMDGEJKH* HODAIDNDKHD)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_MPCLKAKBFAP_OFFSET))(this, MDEICMIHPPC, DFDIKCJJCCD, HODAIDNDKHD);
		}

		::System::Boolean IGNLCAOMPOC(::UnityEngine::Vector3 MDEICMIHPPC, ::UnityEngine::Vector3 DFDIKCJJCCD, ::OAMAMDGEJKH* HODAIDNDKHD)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_IGNLCAOMPOC_OFFSET))(this, MDEICMIHPPC, DFDIKCJJCCD, HODAIDNDKHD);
		}

		::UnityEngine::Vector3 IFANKJFNPAD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_IFANKJFNPAD_OFFSET))(this);
		}

		::System::Boolean FLHGDDHPPPH(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::OAMAMDGEJKH* FDFGNNAJLDN, ::System::Collections::Generic::List_1<::System::UInt32>* PNJOCIIDHOE, ::UnityEngine::Vector3 MDEICMIHPPC, ::UnityEngine::Vector3 DFDIKCJJCCD, ::System::Single ICJDDEMGCOP, ::System::Boolean FNEDONOJBON, ::System::Boolean PLMEOAMMAGN)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::OAMAMDGEJKH*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_FLHGDDHPPPH_OFFSET))(this, OMPHGGCEIBD, HODAIDNDKHD, FDFGNNAJLDN, PNJOCIIDHOE, MDEICMIHPPC, DFDIKCJJCCD, ICJDDEMGCOP, FNEDONOJBON, PLMEOAMMAGN);
		}

		::System::Void OBPHODDCAOF(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_OBPHODDCAOF_OFFSET))(this, KECKGDFIALJ);
		}

		::System::Boolean LKIHOOHPNAI(::UnityEngine::Vector3 MDEICMIHPPC, ::UnityEngine::Vector3 DFDIKCJJCCD, ::OAMAMDGEJKH* HODAIDNDKHD, ::System::Boolean FNEDONOJBON)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::OAMAMDGEJKH*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_LKIHOOHPNAI_OFFSET))(this, MDEICMIHPPC, DFDIKCJJCCD, HODAIDNDKHD, FNEDONOJBON);
		}

		::MGHNAPKHBOG AHLDBDIKPJD(::MoleMole::Battle::Entity* CBCNBLOFPLO, ::System::Single KNGCNADHHFO, ::System::Boolean IMNFFBEOLCD, ::System::Boolean GDBMNPFHEMF, ::System::Boolean GHCOJHODPLJ, ::System::Boolean JCKGCHEOBCA, ::System::Boolean LLOOEPCHLBN, ::System::Boolean KCFDOHCLAKL, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* JCLLEIHKKMA, ::MoleMole::Battle::Entity* HGLDEJMEIBC)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_AHLDBDIKPJD_OFFSET))(this, CBCNBLOFPLO, KNGCNADHHFO, IMNFFBEOLCD, GDBMNPFHEMF, GHCOJHODPLJ, JCKGCHEOBCA, LLOOEPCHLBN, KCFDOHCLAKL, JCLLEIHKKMA, HGLDEJMEIBC);
		}

		static ::System::Void NHANIMFANIC(::MoleMole::Config::ConfigLockNearTarget_JDFNFHLGJDN& param_0, ::MoleMole::Config::ConfigLockNearTarget_MIGNEKMGNDG& param_1, ::MoleMole::Config::ConfigLockNearTarget_JMBFHFCBPOM& param_2)
		{
			return ((::System::Void(*)(::MoleMole::Config::ConfigLockNearTarget_JDFNFHLGJDN&, ::MoleMole::Config::ConfigLockNearTarget_MIGNEKMGNDG&, ::MoleMole::Config::ConfigLockNearTarget_JMBFHFCBPOM&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_NHANIMFANIC_OFFSET))(param_0, param_1, param_2);
		}

		static ::System::Boolean EJLIFGDOKGH(::OAMAMDGEJKH* HODAIDNDKHD, ::UnityEngine::Vector3 MDEICMIHPPC, ::UnityEngine::Vector3 DFDIKCJJCCD, ::System::Single NFHLODHMCHC)
		{
			return ((::System::Boolean(*)(::OAMAMDGEJKH*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_EJLIFGDOKGH_OFFSET))(HODAIDNDKHD, MDEICMIHPPC, DFDIKCJJCCD, NFHLODHMCHC);
		}

		::MGHNAPKHBOG CAPCJFGPJKP(::MoleMole::Battle::Entity* CBCNBLOFPLO, ::CAPAFILOMGC* JPMBBNEMEDD, ::HAFLGNENJDI* AEOIHGKHAIL, ::ACNLKLCDALA* CCAPFHEOCPJ, ::System::Collections::Generic::List_1<::System::UInt32>* PNJOCIIDHOE, ::UnityEngine::Vector3 MDEICMIHPPC, ::UnityEngine::Vector3 DFDIKCJJCCD, ::System::Single HHHIKNNFLPM, ::System::Single ICJDDEMGCOP, ::System::Boolean FNEDONOJBON, ::System::Single KNGCNADHHFO, ::System::Boolean JCKGCHEOBCA, ::System::Boolean PDLDKFJJOIB, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>* JCLLEIHKKMA)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::CAPAFILOMGC*, ::HAFLGNENJDI*, ::ACNLKLCDALA*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Func_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET_CAPCJFGPJKP_OFFSET))(this, CBCNBLOFPLO, JPMBBNEMEDD, AEOIHGKHAIL, CCAPFHEOCPJ, PNJOCIIDHOE, MDEICMIHPPC, DFDIKCJJCCD, HHHIKNNFLPM, ICJDDEMGCOP, FNEDONOJBON, KNGCNADHHFO, JCKGCHEOBCA, PDLDKFJJOIB, JCLLEIHKKMA);
		}
	};
}
