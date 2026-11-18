#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::SceneMark { class SceneMarkDataBase; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1249D100)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_COLLECTALLCHILDRENNAME_1_OFFSET UNITYSDK_OFFSET(0x1249D610)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_COLLECTALLCHILDRENNAME_OFFSET UNITYSDK_OFFSET(0x1244C2E0)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_GETMARKDATA_1_OFFSET UNITYSDK_OFFSET(0x1249D4B0)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_GETMARKDATA_OFFSET UNITYSDK_OFFSET(0x1249D360)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_CHILDMAPITERATOR_OFFSET UNITYSDK_OFFSET(0x1249CFD0)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1249D8B0)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_HASCHILDRENDATA_OFFSET UNITYSDK_OFFSET(0x1249CF70)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1249D860)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_XZPOSITION_OFFSET UNITYSDK_OFFSET(0x1249D7B0)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_TRYGETCHILD_OFFSET UNITYSDK_OFFSET(0x1249D260)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1249D0C0)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int SceneMarkNode_TypeDefinitionIndex = 80219;

	class SceneMarkNode : public ::System::Object
	{
	public:
		::System::String* ParentName; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneMark::SceneMarkNode*>* ChildrenMap; // 0x18
		::System::String* Name; // 0x20
		::Il2CppArray<::MoleMole::SceneMark::SceneMarkDataBase*>* MarkData; // 0x28
		::UnityEngine::Transform* transform; // 0x30

		::System::Void _ctor(::System::String* name, ::MoleMole::SceneMark::SceneMarkNode* parent, ::UnityEngine::Transform* transform, ::Il2CppArray<::MoleMole::SceneMark::SceneMarkDataBase*>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::SceneMark::SceneMarkNode*, ::UnityEngine::Transform*, ::Il2CppArray<::MoleMole::SceneMark::SceneMarkDataBase*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE__CTOR_OFFSET))(this, name, parent, transform, data);
		}

		::System::Boolean get_HasChildrenData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_HASCHILDRENDATA_OFFSET))(this);
		}

		::System::Object* get_ChildMapIterator()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_CHILDMAPITERATOR_OFFSET))(this);
		}

		::System::Void AddChild(::MoleMole::SceneMark::SceneMarkNode* child)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SceneMark::SceneMarkNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_ADDCHILD_OFFSET))(this, child);
		}

		::System::Boolean TryGetChild(::System::String* name, ::MoleMole::SceneMark::SceneMarkNode*& ret)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::SceneMark::SceneMarkNode*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_TRYGETCHILD_OFFSET))(this, name, ret);
		}

		::MoleMole::SceneMark::SceneMarkDataBase* GetMarkData(::System::Type* targetType, ::System::String* name)
		{
			return ((::MoleMole::SceneMark::SceneMarkDataBase*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_GETMARKDATA_OFFSET))(this, targetType, name);
		}

		::MoleMole::SceneMark::SceneMarkDataBase* GetMarkData_1(::System::Int32 targetType, ::System::String* name)
		{
			return ((::MoleMole::SceneMark::SceneMarkDataBase*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_GETMARKDATA_1_OFFSET))(this, targetType, name);
		}

		::System::Collections::Generic::List_1<::System::String*>* CollectAllChildrenName(::System::Boolean includeNest)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_COLLECTALLCHILDRENNAME_OFFSET))(this, includeNest);
		}

		static ::System::Void CollectAllChildrenName_1(::System::Collections::Generic::List_1<::System::String*>* list, ::MoleMole::SceneMark::SceneMarkNode* node, ::System::Boolean includeNest)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::SceneMark::SceneMarkNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_COLLECTALLCHILDRENNAME_1_OFFSET))(list, node, includeNest);
		}

		::UnityEngine::Vector3 get_XZPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_XZPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_FORWARD_OFFSET))(this);
		}
	};
}
