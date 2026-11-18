#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { class IGraphNode; }
namespace NodeGraph { class IGraphPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace System { class Exception; }
namespace System { class String; }

#define NODEGRAPH_GRAPHLOGUTIL_LOGEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0xE12C190)
#define NODEGRAPH_GRAPHLOGUTIL_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0xE12C140)
#define NODEGRAPH_GRAPHLOGUTIL_LOG_1_OFFSET UNITYSDK_OFFSET(0xE12C0F0)
#define NODEGRAPH_GRAPHLOGUTIL_LOG_OFFSET UNITYSDK_OFFSET(0xE12C0A0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphLogUtil_TypeDefinitionIndex = 68763;

	class GraphLogUtil : public ::System::Object
	{
	public:
		static ::System::Void Log(::NodeGraph::NodeGraphBase* graphBase, ::System::String* log)
		{
			return ((::System::Void(*)(::NodeGraph::NodeGraphBase*, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGUTIL_LOG_OFFSET))(graphBase, log);
		}

		static ::System::Void Log_1(::NodeGraph::IGraphNode* node, ::System::String* log)
		{
			return ((::System::Void(*)(::NodeGraph::IGraphNode*, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGUTIL_LOG_1_OFFSET))(node, log);
		}

		static ::System::Void LogException(::NodeGraph::IGraphNode* node, ::System::Exception* e)
		{
			return ((::System::Void(*)(::NodeGraph::IGraphNode*, ::System::Exception*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGUTIL_LOGEXCEPTION_OFFSET))(node, e);
		}

		static ::System::Void LogException_1(::NodeGraph::IGraphPort* port, ::System::Exception* e)
		{
			return ((::System::Void(*)(::NodeGraph::IGraphPort*, ::System::Exception*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGUTIL_LOGEXCEPTION_1_OFFSET))(port, e);
		}
	};
}
