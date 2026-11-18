#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class GEIHCPAOKKK;
namespace MoleMole { class MonoEntityModelModifier_ConfigModifier; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOENTITYMODELMODIFIER_APPLYMODIFIER_OFFSET UNITYSDK_OFFSET(0x15ABF120)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_BGFPOGGNIDP_1_OFFSET UNITYSDK_OFFSET(0x15AC0C70)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_BGFPOGGNIDP_OFFSET UNITYSDK_OFFSET(0x15AC0A00)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_EMPTY_OFFSET UNITYSDK_OFFSET(0x15ABEC50)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x15ABED60)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_IMBGLAACLLB_OFFSET UNITYSDK_OFFSET(0x15ABF3C0)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15ABEFA0)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15ABEE90)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_REMOVEMODIFIER_OFFSET UNITYSDK_OFFSET(0x15AC0B00)
#define MOLEMOLE_MONOENTITYMODELMODIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AC0BD0)
#define MOLEMOLE_MONOENTITYMODELMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC0B40)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityModelModifier_TypeDefinitionIndex = 45077;

	class MonoEntityModelModifier : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityModelModifier*>** StaticGet_KNIFKCGJHNF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityModelModifier*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityModelModifier_TypeDefinitionIndex)->GetStaticField(0x4F8C0);
		}
		::System::String* _originPoint; // 0x18
		::System::String* _controlPoint1; // 0x20
		::System::String* _controlPoint2; // 0x28
		::Il2CppArray<::System::Object*>* _colliderInfos; // 0x30
		::MoleMole::MonoEntityModelModifier_ConfigModifier* _configModifier; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER__CCTOR_OFFSET))();
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_EMPTY_OFFSET))();
		}

		static ::MoleMole::MonoEntityModelModifier* GetComponentSafely(::System::Int32 HLJEFIIDMFA)
		{
			return ((::MoleMole::MonoEntityModelModifier*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_GETCOMPONENTSAFELY_OFFSET))(HLJEFIIDMFA);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_ONDISABLE_OFFSET))(this);
		}

		::System::Void ApplyModifier(::GEIHCPAOKKK* BIEHMPHDGCO)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_APPLYMODIFIER_OFFSET))(this, BIEHMPHDGCO);
		}

		::System::Void RemoveModifier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_REMOVEMODIFIER_OFFSET))(this);
		}

		::System::Void BGFPOGGNIDP(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Transform* LPPGDECAAPM, ::UnityEngine::Transform* OIPGLPFLFIP, ::UnityEngine::Transform* NKDFOLHACDD)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_BGFPOGGNIDP_OFFSET))(this, KECKGDFIALJ, LPPGDECAAPM, OIPGLPFLFIP, NKDFOLHACDD);
		}

		::System::Void IMBGLAACLLB(::UnityEngine::Transform* LPPGDECAAPM, ::UnityEngine::Transform* OIPGLPFLFIP, ::UnityEngine::Transform* NKDFOLHACDD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_IMBGLAACLLB_OFFSET))(this, LPPGDECAAPM, OIPGLPFLFIP, NKDFOLHACDD);
		}

		::System::Void BGFPOGGNIDP_1(::UnityEngine::Collider* EHHHMFKHNAI, ::UnityEngine::Transform* LPPGDECAAPM, ::UnityEngine::Transform* OIPGLPFLFIP, ::UnityEngine::Transform* NKDFOLHACDD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_BGFPOGGNIDP_1_OFFSET))(this, EHHHMFKHNAI, LPPGDECAAPM, OIPGLPFLFIP, NKDFOLHACDD);
		}
	};
}
