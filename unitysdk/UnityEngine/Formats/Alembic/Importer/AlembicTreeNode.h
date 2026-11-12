#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicElement; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicStream; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicTreeNode; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_CTOR_OFFSET UNITYSDK_OFFSET(0x20423110)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20424CC0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_FINDNODE_OFFSET UNITYSDK_OFFSET(0x20428E60)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_ABCOBJECT_OFFSET UNITYSDK_OFFSET(0x2042A0E0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x2042A100)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x2042A0C0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x2042A0A0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_REMOVEALEMBICOBJECT_OFFSET UNITYSDK_OFFSET(0x2041AAE0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_RESETTREE_OFFSET UNITYSDK_OFFSET(0x2042A110)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_SET_ABCOBJECT_OFFSET UNITYSDK_OFFSET(0x2042A0F0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x2042A0D0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x2042A0B0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_VISITRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x2042A270)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicTreeNode_TypeDefinitionIndex = 46903;

	class AlembicTreeNode : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _gameObject_k__BackingField; // 0x10
		::UnityEngine::Formats::Alembic::Importer::AlembicStream* _stream_k__BackingField; // 0x18
		::UnityEngine::Formats::Alembic::Importer::AlembicElement* _abcObject_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*>* children; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_CTOR_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Importer::AlembicStream* get_stream()
		{
			return ((::UnityEngine::Formats::Alembic::Importer::AlembicStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_stream(::UnityEngine::Formats::Alembic::Importer::AlembicStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicStream*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_SET_STREAM_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_GAMEOBJECT_OFFSET))(this);
		}

		::System::Void set_gameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_SET_GAMEOBJECT_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Importer::AlembicElement* get_abcObject()
		{
			return ((::UnityEngine::Formats::Alembic::Importer::AlembicElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_ABCOBJECT_OFFSET))(this);
		}

		::System::Void set_abcObject(::UnityEngine::Formats::Alembic::Importer::AlembicElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_SET_ABCOBJECT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*>* get_Children()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_RESETTREE_OFFSET))(this);
		}

		::System::Void RemoveAlembicObject(::UnityEngine::Formats::Alembic::Importer::AlembicElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_REMOVEALEMBICOBJECT_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* FindNode(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_FINDNODE_OFFSET))(this, a1);
		}

		::System::Void VisitRecursively(::System::Action_1<::UnityEngine::Formats::Alembic::Importer::AlembicElement*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Formats::Alembic::Importer::AlembicElement*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_VISITRECURSIVELY_OFFSET))(this, a1);
		}

	};
}
