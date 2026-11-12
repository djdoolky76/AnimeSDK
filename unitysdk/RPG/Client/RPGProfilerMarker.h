#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/Unity/Profiling/ProfilerMarkerWithIntData.h"
namespace RPG::Client { class RPGProfilerMarkerLevel; }
namespace System { class String; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_RPGPROFILERMARKER_BEGIN_1_OFFSET UNITYSDK_OFFSET(0x1FE69FB0)
#define RPG_CLIENT_RPGPROFILERMARKER_BEGIN_OFFSET UNITYSDK_OFFSET(0x1FE69DD0)
#define RPG_CLIENT_RPGPROFILERMARKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE69CB0)
#define RPG_CLIENT_RPGPROFILERMARKER_END_OFFSET UNITYSDK_OFFSET(0x1FE6A0B0)
#define RPG_CLIENT_RPGPROFILERMARKER__BUDGETMARKERBEGIN_OFFSET UNITYSDK_OFFSET(0x1FE6A220)
#define RPG_CLIENT_RPGPROFILERMARKER__INTMARKEREND_OFFSET UNITYSDK_OFFSET(0x1FE6A3A0)
#define RPG_CLIENT_RPGPROFILERMARKER__ISBUDGETMARKERACTIVATED_OFFSET UNITYSDK_OFFSET(0x1FE6A210)
#define RPG_CLIENT_RPGPROFILERMARKER__ISBUDGETMARKER_OFFSET UNITYSDK_OFFSET(0x1FE6A200)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGProfilerMarker_TypeDefinitionIndex = 36088;

	class RPGProfilerMarker : public ::System::Object
	{
	public:
		::RPG::Client::RPGProfilerMarkerLevel* m_MarkerLevel; // 0x10
		::System::Diagnostics::Stopwatch* m_Stopwatch; // 0x18
		::System::Int32 m_ActivatedMs; // 0x20
		::System::Int32 m_BudgetCoolDownMax; // 0x24
		::Unity::Profiling::ProfilerMarkerWithIntData m_IntMarker; // 0x28
		::System::Int32 m_BudgetCoolDownCurrent; // 0x38
		::System::Int32 m_BudgetMs; // 0x3C
		::Unity::Profiling::ProfilerMarker m_Marker; // 0x40
		// static const ::System::String* _INT_MARKER_P1_NAME; // 0x0
		// static const ::System::String* _INT_MARKER_P2_NAME; // 0x0
		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Begin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER_BEGIN_OFFSET))(this);
		}

		::System::Void Begin_1(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER_BEGIN_1_OFFSET))(this, a1);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER_END_OFFSET))(this);
		}

		::System::Boolean _IsBudgetMarker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER__ISBUDGETMARKER_OFFSET))(this);
		}

		::System::Boolean _IsBudgetMarkerActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER__ISBUDGETMARKERACTIVATED_OFFSET))(this);
		}

		::System::Void _BudgetMarkerBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER__BUDGETMARKERBEGIN_OFFSET))(this);
		}

		::System::Void _IntMarkerEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER__INTMARKEREND_OFFSET))(this);
		}

	};
}
