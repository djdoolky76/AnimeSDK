#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPlanPhaseType.h"
#include "unitysdk/System/Object.h"
class KFJKHEKMJKE;
namespace RPG::Client::LimaoNews { class LimaoNewsPlanPhaseData; }
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD3CCE80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD3CD170)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_GOALNAME_OFFSET UNITYSDK_OFFSET(0xD3CD220)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD3CD280)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_PERFORMANCEFSVLIST_OFFSET UNITYSDK_OFFSET(0xD3CD240)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_PERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xD3CD260)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_PHASEDESC_OFFSET UNITYSDK_OFFSET(0xD3CD1E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_PHASERECORD_OFFSET UNITYSDK_OFFSET(0xD3CD200)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_PLANPHASEID_OFFSET UNITYSDK_OFFSET(0xD3CD180)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_PLANPHASEPARAM_OFFSET UNITYSDK_OFFSET(0xD3CD1C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_PLANPHASETYPE_OFFSET UNITYSDK_OFFSET(0xD3CD1A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_GOALNAME_OFFSET UNITYSDK_OFFSET(0xD3CD230)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD3CD290)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_PERFORMANCEFSVLIST_OFFSET UNITYSDK_OFFSET(0xD3CD250)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_PERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xD3CD270)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_PHASEDESC_OFFSET UNITYSDK_OFFSET(0xD3CD1F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_PHASERECORD_OFFSET UNITYSDK_OFFSET(0xD3CD210)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_PLANPHASEID_OFFSET UNITYSDK_OFFSET(0xD3CD190)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_PLANPHASEPARAM_OFFSET UNITYSDK_OFFSET(0xD3CD1D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_PLANPHASETYPE_OFFSET UNITYSDK_OFFSET(0xD3CD1B0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPlanPhaseData_TypeDefinitionIndex = 80304;

	class LimaoNewsPlanPhaseData : public ::System::Object
	{
	public:
		::Il2CppArray<::KFJKHEKMJKE*>* _PerformanceFSVList_k__BackingField; // 0x10
		::System::String* _PerformanceLevelGraph_k__BackingField; // 0x18
		::System::String* _ImagePath_k__BackingField; // 0x20
		::RPG::Client::TextID _PhaseRecord_k__BackingField; // 0x28
		::RPG::GameCore::LimaoNewsPlanPhaseType _PlanPhaseType_k__BackingField; // 0x38
		::System::UInt32 _PlanPhaseParam_k__BackingField; // 0x3C
		::System::UInt32 _PlanPhaseID_k__BackingField; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _PhaseDesc_k__BackingField; // 0x48
		::RPG::Client::TextID _GoalName_k__BackingField; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_PlanPhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_PLANPHASEID_OFFSET))(this);
		}

		::System::Void set_PlanPhaseID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_PLANPHASEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::LimaoNewsPlanPhaseType get_PlanPhaseType()
		{
			return ((::RPG::GameCore::LimaoNewsPlanPhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_PLANPHASETYPE_OFFSET))(this);
		}

		::System::Void set_PlanPhaseType(::RPG::GameCore::LimaoNewsPlanPhaseType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LimaoNewsPlanPhaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_PLANPHASETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlanPhaseParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_PLANPHASEPARAM_OFFSET))(this);
		}

		::System::Void set_PlanPhaseParam(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_PLANPHASEPARAM_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PhaseDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_PHASEDESC_OFFSET))(this);
		}

		::System::Void set_PhaseDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_PHASEDESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PhaseRecord()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_PHASERECORD_OFFSET))(this);
		}

		::System::Void set_PhaseRecord(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_PHASERECORD_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_GoalName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_GOALNAME_OFFSET))(this);
		}

		::System::Void set_GoalName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_GOALNAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::KFJKHEKMJKE*>* get_PerformanceFSVList()
		{
			return ((::Il2CppArray<::KFJKHEKMJKE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_PERFORMANCEFSVLIST_OFFSET))(this);
		}

		::System::Void set_PerformanceFSVList(::Il2CppArray<::KFJKHEKMJKE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::KFJKHEKMJKE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_PERFORMANCEFSVLIST_OFFSET))(this, a1);
		}

		::System::String* get_PerformanceLevelGraph()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_PERFORMANCELEVELGRAPH_OFFSET))(this);
		}

		::System::Void set_PerformanceLevelGraph(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_PERFORMANCELEVELGRAPH_OFFSET))(this, a1);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANPHASEDATA_SET_IMAGEPATH_OFFSET))(this, a1);
		}

	};
}
