#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace EasyPBD { class EasyPBDRope; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define EASYPBD_EASYPBDSCHEDULER_COMPAREBYHIERARCHYDEPTH_OFFSET UNITYSDK_OFFSET(0x1D26EA60)
#define EASYPBD_EASYPBDSCHEDULER_CREATERUNTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D26D710)
#define EASYPBD_EASYPBDSCHEDULER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1D26DE70)
#define EASYPBD_EASYPBDSCHEDULER_GETHIERARCHYDEPTH_OFFSET UNITYSDK_OFFSET(0x1D26EB80)
#define EASYPBD_EASYPBDSCHEDULER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D26E6D0)
#define EASYPBD_EASYPBDSCHEDULER_MARKORDERDIRTY_OFFSET UNITYSDK_OFFSET(0x1D26DDF0)
#define EASYPBD_EASYPBDSCHEDULER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D26E970)
#define EASYPBD_EASYPBDSCHEDULER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1D26D980)
#define EASYPBD_EASYPBDSCHEDULER_RESETSTATICSTATE_OFFSET UNITYSDK_OFFSET(0x1D26D5C0)
#define EASYPBD_EASYPBDSCHEDULER_SORTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1D26E130)
#define EASYPBD_EASYPBDSCHEDULER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1D26DBD0)
#define EASYPBD_EASYPBDSCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D26EE40)
#define EASYPBD_EASYPBDSCHEDULER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D26EDF0)

namespace EasyPBD
{
	inline static constexpr unsigned int EasyPBDScheduler_TypeDefinitionIndex = 26197;

	class EasyPBDScheduler : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::EasyPBD::EasyPBDRope*>** StaticGet_ActiveRopeSet()
		{
			return (::System::Collections::Generic::HashSet_1<::EasyPBD::EasyPBDRope*>**)Il2CppClass::FromTypeDefinitionIndex(EasyPBDScheduler_TypeDefinitionIndex)->GetStaticField(0x23B90);
		}
		static ::System::Collections::Generic::List_1<::EasyPBD::EasyPBDRope*>** StaticGet_ActiveRopes()
		{
			return (::System::Collections::Generic::List_1<::EasyPBD::EasyPBDRope*>**)Il2CppClass::FromTypeDefinitionIndex(EasyPBDScheduler_TypeDefinitionIndex)->GetStaticField(0x23B98);
		}
		static ::EasyPBD::EasyPBDScheduler** StaticGet_runtimeInstance()
		{
			return (::EasyPBD::EasyPBDScheduler**)Il2CppClass::FromTypeDefinitionIndex(EasyPBDScheduler_TypeDefinitionIndex)->GetStaticField(0x23BA0);
		}
		static ::System::Boolean* StaticGet_orderDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EasyPBDScheduler_TypeDefinitionIndex)->GetStaticField(0x6090);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER__CCTOR_OFFSET))();
		}

		static ::System::Void ResetStaticState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_RESETSTATICSTATE_OFFSET))();
		}

		static ::System::Void CreateRuntimeInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_CREATERUNTIMEINSTANCE_OFFSET))();
		}

		static ::System::Void Register(::EasyPBD::EasyPBDRope* rope)
		{
			return ((::System::Void(*)(::EasyPBD::EasyPBDRope*))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_REGISTER_OFFSET))(rope);
		}

		static ::System::Void Unregister(::EasyPBD::EasyPBDRope* rope)
		{
			return ((::System::Void(*)(::EasyPBD::EasyPBDRope*))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_UNREGISTER_OFFSET))(rope);
		}

		static ::System::Void MarkOrderDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_MARKORDERDIRTY_OFFSET))();
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void SortIfNeeded()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_SORTIFNEEDED_OFFSET))();
		}

		static ::System::Int32 CompareByHierarchyDepth(::EasyPBD::EasyPBDRope* left, ::EasyPBD::EasyPBDRope* right)
		{
			return ((::System::Int32(*)(::EasyPBD::EasyPBDRope*, ::EasyPBD::EasyPBDRope*))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_COMPAREBYHIERARCHYDEPTH_OFFSET))(left, right);
		}

		static ::System::Int32 GetHierarchyDepth(::UnityEngine::Transform* value)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_GETHIERARCHYDEPTH_OFFSET))(value);
		}
	};
}
