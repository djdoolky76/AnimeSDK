#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class CurveUndirectedEdge; }
namespace RPG::Client { class CurveUndirectedEdgeSetting; }
namespace RPG::Client { class MonoCurveTriggerManager; }
namespace System { class String; }

#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH_AWAKE_OFFSET UNITYSDK_OFFSET(0x1401D080)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1401DDF0)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH_FINDEDGEBYCURVE_OFFSET UNITYSDK_OFFSET(0x1401DCD0)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH_FINDEDGEBYNAME_OFFSET UNITYSDK_OFFSET(0x1401AF20)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH_MKPAMKPIGLI_OFFSET UNITYSDK_OFFSET(0x1401D150)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1401DBF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveUndirectedGraph_TypeDefinitionIndex = 70521;

	class MonoCurveUndirectedGraph : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::CurveUndirectedEdgeSetting*>* edgeSettings; // 0x18
		::Il2CppArray<::RPG::Client::CurveUndirectedEdge*>* HNKJJCIBJGD; // 0x20
		::RPG::Client::MonoCurveTriggerManager* BLBMEGEHHEC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH_ONDESTROY_OFFSET))(this);
		}

		::RPG::Client::CurveUndirectedEdge* FindEdgeByName(::System::String* a1)
		{
			return ((::RPG::Client::CurveUndirectedEdge*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH_FINDEDGEBYNAME_OFFSET))(this, a1);
		}

		::RPG::Client::CurveUndirectedEdge* FindEdgeByCurve(::BansheeGz::BGSpline::Curve::BGCurve* a1)
		{
			return ((::RPG::Client::CurveUndirectedEdge*(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH_FINDEDGEBYCURVE_OFFSET))(this, a1);
		}

		::System::Void MKPAMKPIGLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH_MKPAMKPIGLI_OFFSET))(this);
		}

	};
}
