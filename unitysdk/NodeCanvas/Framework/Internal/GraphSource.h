#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class CanvasGroup; }
namespace NodeCanvas::Framework { class Connection; }
namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class Node; }
namespace NodeCanvas::Framework { class Task; }
namespace NodeCanvas::Framework::Internal { class BlackboardSource; }
namespace ParadoxNotion::Serialization::FullSerializer { class ISerializationCollectable; }
namespace ParadoxNotion::Serialization::FullSerializer { class ISerializationCollector; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_ALLPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1EF66DD0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_ALLTASKS_OFFSET UNITYSDK_OFFSET(0x1EF66DB0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_CANVASGROUPS_OFFSET UNITYSDK_OFFSET(0x1EF670C0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1EF66FE0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_COMMENTS_OFFSET UNITYSDK_OFFSET(0x1EF67000)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_CONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1EF670A0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_DERIVEDDATA_OFFSET UNITYSDK_OFFSET(0x1EF67100)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_LOCALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1EF670E0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_NODES_OFFSET UNITYSDK_OFFSET(0x1EF67080)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x1EF67020)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1EF67060)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1EF66FC0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_ZOOMFACTOR_OFFSET UNITYSDK_OFFSET(0x1EF67040)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_PACK_OFFSET UNITYSDK_OFFSET(0x1EF672D0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_ISERIALIZATIONCOLLECTOR_ONCOLLECT_OFFSET UNITYSDK_OFFSET(0x1EF66EC0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_ISERIALIZATIONCOLLECTOR_ONPOP_OFFSET UNITYSDK_OFFSET(0x1EF66FB0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_ISERIALIZATIONCOLLECTOR_ONPUSH_OFFSET UNITYSDK_OFFSET(0x1EF66DF0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_PURGEREDUNDANTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1EF678C0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SETMETADATA_OFFSET UNITYSDK_OFFSET(0x1EF67880)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_ALLPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1EF66DE0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_ALLTASKS_OFFSET UNITYSDK_OFFSET(0x1EF66DC0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_CANVASGROUPS_OFFSET UNITYSDK_OFFSET(0x1EF670D0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1EF66FF0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_COMMENTS_OFFSET UNITYSDK_OFFSET(0x1EF67010)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_CONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1EF670B0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_DERIVEDDATA_OFFSET UNITYSDK_OFFSET(0x1EF67110)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_LOCALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1EF670F0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_NODES_OFFSET UNITYSDK_OFFSET(0x1EF67090)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x1EF67030)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1EF67070)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1EF66FD0)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_ZOOMFACTOR_OFFSET UNITYSDK_OFFSET(0x1EF67050)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_UNPACK_OFFSET UNITYSDK_OFFSET(0x1EF67590)
#define NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF67120)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int GraphSource_TypeDefinitionIndex = 30060;

	class GraphSource : public ::System::Object
	{
	public:
		// static const ::System::Single FRAMEWORK_VERSION; // 0x0
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Task*>* _allTasks_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::BBParameter*>* _allParameters_k__BackingField; // 0x18
		::System::Single _version; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* _category; // 0x28
		::System::String* _comments; // 0x30
		::UnityEngine::Vector2 _translation; // 0x38
		::System::Single _zoomFactor; // 0x40
		::System::Byte _padding1[0x4];
		::System::String* _type; // 0x48
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Node*>* _nodes; // 0x50
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>* _connections; // 0x58
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::CanvasGroup*>* _canvasGroups; // 0x60
		::NodeCanvas::Framework::Internal::BlackboardSource* _localBlackboard; // 0x68
		::System::Object* _derivedData; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Task*>* get_allTasks()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::Task*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_ALLTASKS_OFFSET))(this);
		}

		::System::Void set_allTasks(::System::Collections::Generic::List_1<::NodeCanvas::Framework::Task*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NodeCanvas::Framework::Task*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_ALLTASKS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::BBParameter*>* get_allParameters()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::BBParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_ALLPARAMETERS_OFFSET))(this);
		}

		::System::Void set_allParameters(::System::Collections::Generic::List_1<::NodeCanvas::Framework::BBParameter*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NodeCanvas::Framework::BBParameter*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_ALLPARAMETERS_OFFSET))(this, value);
		}

		::System::Void ParadoxNotion_Serialization_FullSerializer_ISerializationCollector_OnPush(::ParadoxNotion::Serialization::FullSerializer::ISerializationCollector* parent)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::ISerializationCollector*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_ISERIALIZATIONCOLLECTOR_ONPUSH_OFFSET))(this, parent);
		}

		::System::Void ParadoxNotion_Serialization_FullSerializer_ISerializationCollector_OnCollect(::ParadoxNotion::Serialization::FullSerializer::ISerializationCollectable* child, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::ISerializationCollectable*, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_ISERIALIZATIONCOLLECTOR_ONCOLLECT_OFFSET))(this, child, depth);
		}

		::System::Void ParadoxNotion_Serialization_FullSerializer_ISerializationCollector_OnPop(::ParadoxNotion::Serialization::FullSerializer::ISerializationCollector* parent)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::ISerializationCollector*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_ISERIALIZATIONCOLLECTOR_ONPOP_OFFSET))(this, parent);
		}

		::System::Single get_version()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_version(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_VERSION_OFFSET))(this, value);
		}

		::System::String* get_category()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_category(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_CATEGORY_OFFSET))(this, value);
		}

		::System::String* get_comments()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_COMMENTS_OFFSET))(this);
		}

		::System::Void set_comments(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_COMMENTS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_translation()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_TRANSLATION_OFFSET))(this);
		}

		::System::Void set_translation(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_TRANSLATION_OFFSET))(this, value);
		}

		::System::Single get_zoomFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_ZOOMFACTOR_OFFSET))(this);
		}

		::System::Void set_zoomFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_ZOOMFACTOR_OFFSET))(this, value);
		}

		::System::String* get_type()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_TYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Node*>* get_nodes()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::Node*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_NODES_OFFSET))(this);
		}

		::System::Void set_nodes(::System::Collections::Generic::List_1<::NodeCanvas::Framework::Node*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NodeCanvas::Framework::Node*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_NODES_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>* get_connections()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_CONNECTIONS_OFFSET))(this);
		}

		::System::Void set_connections(::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_CONNECTIONS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::CanvasGroup*>* get_canvasGroups()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::CanvasGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_CANVASGROUPS_OFFSET))(this);
		}

		::System::Void set_canvasGroups(::System::Collections::Generic::List_1<::NodeCanvas::Framework::CanvasGroup*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NodeCanvas::Framework::CanvasGroup*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_CANVASGROUPS_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Internal::BlackboardSource* get_localBlackboard()
		{
			return ((::NodeCanvas::Framework::Internal::BlackboardSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_LOCALBLACKBOARD_OFFSET))(this);
		}

		::System::Void set_localBlackboard(::NodeCanvas::Framework::Internal::BlackboardSource* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Internal::BlackboardSource*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_LOCALBLACKBOARD_OFFSET))(this, value);
		}

		::System::Object* get_derivedData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_GET_DERIVEDDATA_OFFSET))(this);
		}

		::System::Void set_derivedData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SET_DERIVEDDATA_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Internal::GraphSource* Pack(::NodeCanvas::Framework::Graph* graph)
		{
			return ((::NodeCanvas::Framework::Internal::GraphSource*(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_PACK_OFFSET))(this, graph);
		}

		::NodeCanvas::Framework::Internal::GraphSource* Unpack(::NodeCanvas::Framework::Graph* graph)
		{
			return ((::NodeCanvas::Framework::Internal::GraphSource*(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_UNPACK_OFFSET))(this, graph);
		}

		::NodeCanvas::Framework::Internal::GraphSource* SetMetaData(::NodeCanvas::Framework::Internal::GraphSource* source)
		{
			return ((::NodeCanvas::Framework::Internal::GraphSource*(*)(::PVOID, ::NodeCanvas::Framework::Internal::GraphSource*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_SETMETADATA_OFFSET))(this, source);
		}

		::System::Void PurgeRedundantReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_GRAPHSOURCE_PURGEREDUNDANTREFERENCES_OFFSET))(this);
		}
	};
}
