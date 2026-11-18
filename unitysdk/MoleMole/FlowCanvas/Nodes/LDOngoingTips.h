#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class OCMAPKJMHOF;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1465F0E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1465EF50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_WAITFORPLAYING_OFFSET UNITYSDK_OFFSET(0x1465F050)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1465F140)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1465F180)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1465F5A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1465F5E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDOngoingTips_TypeDefinitionIndex = 83005;

	class LDOngoingTips : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _finish; // 0xA8
		::UnityEngine::Coroutine* _waitStartCoroutine; // 0xB0
		::FlowCanvas::FlowOutput* _out; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* _groupID; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_REGISTERPORTS_OFFSET))(this);
		}

		static ::System::Collections::IEnumerator* WaitForPlaying(::OCMAPKJMHOF* inLevel, ::System::Int32 groupID, ::FlowCanvas::FlowOutput* finish)
		{
			return ((::System::Collections::IEnumerator*(*)(::OCMAPKJMHOF*, ::System::Int32, ::FlowCanvas::FlowOutput*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_WAITFORPLAYING_OFFSET))(inLevel, groupID, finish);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__REGISTERPORTS_B__4_1_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
