#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_HIERARCHY_ADDANCESTORS_OFFSET UNITYSDK_OFFSET(0xB719CD0)
#define ROOTMOTION_HIERARCHY_CONTAINSCHILD_OFFSET UNITYSDK_OFFSET(0xB719AB0)
#define ROOTMOTION_HIERARCHY_CONTAINSDUPLICATE_OFFSET UNITYSDK_OFFSET(0xB717650)
#define ROOTMOTION_HIERARCHY_CTOR_OFFSET UNITYSDK_OFFSET(0xB71A420)
#define ROOTMOTION_HIERARCHY_GETANCESTOR_OFFSET UNITYSDK_OFFSET(0xB719FD0)
#define ROOTMOTION_HIERARCHY_GETFIRSTCOMMONANCESTORRECURSIVE_OFFSET UNITYSDK_OFFSET(0xB71A3A0)
#define ROOTMOTION_HIERARCHY_GETFIRSTCOMMONANCESTOR_1_OFFSET UNITYSDK_OFFSET(0xB71A170)
#define ROOTMOTION_HIERARCHY_GETFIRSTCOMMONANCESTOR_OFFSET UNITYSDK_OFFSET(0xB71A050)
#define ROOTMOTION_HIERARCHY_HIERARCHYISVALID_OFFSET UNITYSDK_OFFSET(0xB7199E0)
#define ROOTMOTION_HIERARCHY_ISANCESTOR_OFFSET UNITYSDK_OFFSET(0xB712970)
#define ROOTMOTION_HIERARCHY_ISCOMMONANCESTOR_OFFSET UNITYSDK_OFFSET(0xB71A260)

namespace RootMotion
{
	inline static constexpr unsigned int Hierarchy_TypeDefinitionIndex = 47003;

	class Hierarchy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_CTOR_OFFSET))(this);
		}

		static ::System::Boolean HierarchyIsValid(::Il2CppArray<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_HIERARCHYISVALID_OFFSET))(a1);
		}

		static ::UnityEngine::Object* ContainsDuplicate(::Il2CppArray<::UnityEngine::Object*>* a1)
		{
			return ((::UnityEngine::Object*(*)(::Il2CppArray<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_CONTAINSDUPLICATE_OFFSET))(a1);
		}

		static ::System::Boolean IsAncestor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_ISANCESTOR_OFFSET))(a1, a2);
		}

		static ::System::Boolean ContainsChild(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_CONTAINSCHILD_OFFSET))(a1, a2);
		}

		static ::System::Void AddAncestors(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_ADDANCESTORS_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Transform* GetAncestor(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_GETANCESTOR_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Transform* GetFirstCommonAncestor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_GETFIRSTCOMMONANCESTOR_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Transform* GetFirstCommonAncestor_1(::Il2CppArray<::UnityEngine::Transform*>* a1)
		{
			return ((::UnityEngine::Transform*(*)(::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_GETFIRSTCOMMONANCESTOR_1_OFFSET))(a1);
		}

		static ::UnityEngine::Transform* GetFirstCommonAncestorRecursive(::UnityEngine::Transform* a1, ::Il2CppArray<::UnityEngine::Transform*>* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_GETFIRSTCOMMONANCESTORRECURSIVE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsCommonAncestor(::UnityEngine::Transform* a1, ::Il2CppArray<::UnityEngine::Transform*>* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_ISCOMMONANCESTOR_OFFSET))(a1, a2);
		}

	};
}
