#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/PhysicsAnimatorInterpolation.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CNJDEEHGMNN;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x130E7430)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_DGILFDAFMKM_OFFSET UNITYSDK_OFFSET(0x130E81D0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_EJPJAADBFNE_OFFSET UNITYSDK_OFFSET(0x130E9560)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_FIXANIMBONE_OFFSET UNITYSDK_OFFSET(0x130E8950)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_GETANIMATORINSTANCEID_OFFSET UNITYSDK_OFFSET(0x130E9BA0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_HIBDDBLFPJA_OFFSET UNITYSDK_OFFSET(0x130E9A10)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ISANIMATORVISIBLE_OFFSET UNITYSDK_OFFSET(0x130E9C00)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x130E9E10)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_LATEUPDATETHREADSAFE_OFFSET UNITYSDK_OFFSET(0x130E8CE0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_LNMBAEJENCH_OFFSET UNITYSDK_OFFSET(0x130E9A90)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x130E7AB0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x130E7860)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x130E7610)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x130E73F0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x130E7C90)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_PHJEAJCFPJB_OFFSET UNITYSDK_OFFSET(0x130E8B20)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_PIELOOPAMHL_OFFSET UNITYSDK_OFFSET(0x130E88B0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_SHOULDSKIP_OFFSET UNITYSDK_OFFSET(0x130E7B00)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x130E9D80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBuddyStairAnimCorrector_TypeDefinitionIndex = 45969;

	class MonoBuddyStairAnimCorrector : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Single* StaticGet_deltaTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonoBuddyStairAnimCorrector_TypeDefinitionIndex)->GetStaticField(0xB1A0);
		}
		static ::System::Int32* StaticGet_frameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoBuddyStairAnimCorrector_TypeDefinitionIndex)->GetStaticField(0xB1A4);
		}
		static ::UnityEngine::PhysicsAnimatorInterpolation* StaticGet_interpolatePhysicsAnimator()
		{
			return (::UnityEngine::PhysicsAnimatorInterpolation*)Il2CppClass::FromTypeDefinitionIndex(MonoBuddyStairAnimCorrector_TypeDefinitionIndex)->GetStaticField(0xB1A8);
		}
		static ::UnityEngine::PhysicsScene* StaticGet_physicsScene()
		{
			return (::UnityEngine::PhysicsScene*)Il2CppClass::FromTypeDefinitionIndex(MonoBuddyStairAnimCorrector_TypeDefinitionIndex)->GetStaticField(0xB1AC);
		}
		::UnityEngine::Transform* RootTransform; // 0x18
		::UnityEngine::Transform* Pelvis; // 0x20
		::System::Single BubbyLegHeight; // 0x28
		::System::Int32 ConfigLayers; // 0x2C
		::System::String* ConfigTag; // 0x30
		::System::Single DampingHalfLife; // 0x38
		::System::Single BubbyFootRadius; // 0x3C
		::UnityEngine::Vector3 Offset; // 0x40
		::System::Boolean MPHNHOIEMBF; // 0x4C
		::System::Byte _padding0[0x3];
		::UnityEngine::Animator* FPGIEMNHLEF; // 0x50
		::System::Single ANNCACIDEAC; // 0x58
		::System::Byte _padding1[0x4];
		::Il2CppArray<::UnityEngine::RaycastHit>* KJLGLAIABIB; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR__CTOR_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean ShouldSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_SHOULDSKIP_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void FixAnimBone(::UnityEngine::Vector3 GHCJBAELHMG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_FIXANIMBONE_OFFSET))(this, GHCJBAELHMG);
		}

		::System::Void LateUpdateThreadSafe(::CNJDEEHGMNN* OBKICKGGFEO)
		{
			return ((::System::Void(*)(::PVOID, ::CNJDEEHGMNN*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_LATEUPDATETHREADSAFE_OFFSET))(this, OBKICKGGFEO);
		}

		::System::Int32 GetAnimatorInstanceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_GETANIMATORINSTANCEID_OFFSET))(this);
		}

		::System::Boolean IsAnimatorVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ISANIMATORVISIBLE_OFFSET))(this);
		}

		::System::Single PIELOOPAMHL(::System::Single MJODFDBNJIP, ::System::Single BOEJJMLJEDP, ::System::Single PBCAAADNEPK)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_PIELOOPAMHL_OFFSET))(this, MJODFDBNJIP, BOEJJMLJEDP, PBCAAADNEPK);
		}

		::UnityEngine::RaycastHit EJPJAADBFNE(::UnityEngine::Vector3 EIIDOADGOIF, ::UnityEngine::Vector3 DAAEHEHLLLD, ::UnityEngine::Vector3 KBHFBLJPFJH, ::System::Boolean& JOFMKKJDJGJ, ::System::Int32 FDPLLMAKMHH)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean&, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_EJPJAADBFNE_OFFSET))(this, EIIDOADGOIF, DAAEHEHLLLD, KBHFBLJPFJH, JOFMKKJDJGJ, FDPLLMAKMHH);
		}

		static ::System::Boolean LNMBAEJENCH(::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_LNMBAEJENCH_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}

		static ::System::Void HIBDDBLFPJA(::CNJDEEHGMNN* OBKICKGGFEO, ::UnityEngine::Vector3 BOGPAHGJOJK)
		{
			return ((::System::Void(*)(::CNJDEEHGMNN*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_HIBDDBLFPJA_OFFSET))(OBKICKGGFEO, BOGPAHGJOJK);
		}

		::System::Void PHJEAJCFPJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_PHJEAJCFPJB_OFFSET))(this);
		}

		::UnityEngine::RaycastHit DGILFDAFMKM(::UnityEngine::Vector3 EIIDOADGOIF, ::UnityEngine::Vector3 DAAEHEHLLLD, ::UnityEngine::Vector3 KBHFBLJPFJH, ::System::Boolean& JOFMKKJDJGJ)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_DGILFDAFMKM_OFFSET))(this, EIIDOADGOIF, DAAEHEHLLLD, KBHFBLJPFJH, JOFMKKJDJGJ);
		}

		static ::System::Void JPOLBPCHLHK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_JPOLBPCHLHK_OFFSET))();
		}
	};
}
