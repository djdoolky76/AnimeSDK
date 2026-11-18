#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MdbComponent; }

#define MOLEMOLE_UIBASEANIMATOR_ELCJOJDGAAM_OFFSET UNITYSDK_OFFSET(0x19BCA490)
#define MOLEMOLE_UIBASEANIMATOR_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x19BCB400)
#define MOLEMOLE_UIBASEANIMATOR_GETANIMATOR_OFFSET UNITYSDK_OFFSET(0x19BCA440)
#define MOLEMOLE_UIBASEANIMATOR_IMOGKADDEPP_OFFSET UNITYSDK_OFFSET(0x19BCB620)
#define MOLEMOLE_UIBASEANIMATOR_INITIALIZEFORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x19BCB440)
#define MOLEMOLE_UIBASEANIMATOR_PLAYALLLAYERANIMATION_OFFSET UNITYSDK_OFFSET(0x19BCACC0)
#define MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_1_OFFSET UNITYSDK_OFFSET(0x19BCB030)
#define MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_2_OFFSET UNITYSDK_OFFSET(0x19BCB210)
#define MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x19BCAE70)
#define MOLEMOLE_UIBASEANIMATOR_SETBOOL_OFFSET UNITYSDK_OFFSET(0x19BCA7B0)
#define MOLEMOLE_UIBASEANIMATOR_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x19BCA960)
#define MOLEMOLE_UIBASEANIMATOR_SETINT_OFFSET UNITYSDK_OFFSET(0x19BCAB10)
#define MOLEMOLE_UIBASEANIMATOR_SETTRIGGER_OFFSET UNITYSDK_OFFSET(0x19BCA610)
#define MOLEMOLE_UIBASEANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19BCB5D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseAnimator_TypeDefinitionIndex = 64220;

	class UIBaseAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* FPGIEMNHLEF; // 0x18
		::UnityEngine::MdbComponent* NJDNGLKGLLL; // 0x20
		::System::Boolean HIJFPLLAMCJ; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animator* GetAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_GETANIMATOR_OFFSET))(this);
		}

		::System::Void SetTrigger(::System::String* JNPDFEGBIOL)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_SETTRIGGER_OFFSET))(this, JNPDFEGBIOL);
		}

		::System::Void SetBool(::System::String* OHJHONPLADG, ::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_SETBOOL_OFFSET))(this, OHJHONPLADG, EGEGIMGMJHN);
		}

		::System::Void SetFloat(::System::String* GCLJMFIJOJG, ::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_SETFLOAT_OFFSET))(this, GCLJMFIJOJG, EGEGIMGMJHN);
		}

		::System::Void SetInt(::System::String* GCCJNDBPDLK, ::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_SETINT_OFFSET))(this, GCCJNDBPDLK, EGEGIMGMJHN);
		}

		::System::Void PlayAllLayerAnimation(::System::String* LKPAAMLMJBP)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_PLAYALLLAYERANIMATION_OFFSET))(this, LKPAAMLMJBP);
		}

		::System::Void PlayAnimation(::System::String* LKPAAMLMJBP, ::System::Int32 EEGBEFGJJBM)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_OFFSET))(this, LKPAAMLMJBP, EEGBEFGJJBM);
		}

		::System::Void PlayAnimation_1(::System::String* LKPAAMLMJBP, ::System::String* EEGBEFGJJBM)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_1_OFFSET))(this, LKPAAMLMJBP, EEGBEFGJJBM);
		}

		::System::Void PlayAnimation_2(::System::String* LKPAAMLMJBP, ::System::String* EEGBEFGJJBM, ::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_2_OFFSET))(this, LKPAAMLMJBP, EEGBEFGJJBM, AHAFNGEDPLI);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void InitializeForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_INITIALIZEFORCEUPDATE_OFFSET))(this);
		}

		::UnityEngine::MdbComponent* IMOGKADDEPP()
		{
			return ((::UnityEngine::MdbComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_IMOGKADDEPP_OFFSET))(this);
		}

		::UnityEngine::Animator* ELCJOJDGAAM()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_ELCJOJDGAAM_OFFSET))(this);
		}
	};
}
