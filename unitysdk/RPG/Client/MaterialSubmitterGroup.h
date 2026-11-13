#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MaterialSubmissionType.h"
#include "unitysdk/System/Object.h"
class PNKOJKOOLNO;
namespace RPG::Client { class MaterialSubmitter; }
namespace RPG::Client { class MaterialSubmitterGroup; }
namespace RPG::GameCore { class MaterialSubmitterGroupRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKCANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1D72ECE0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASENDED_OFFSET UNITYSDK_OFFSET(0x1D731E60)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASNEWSUBMITTER_OFFSET UNITYSDK_OFFSET(0x1D72EDF0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1D730720)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKISFIRST_OFFSET UNITYSDK_OFFSET(0x1D730BD0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKISLAST_OFFSET UNITYSDK_OFFSET(0x1D730D40)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D732160)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x1D731970)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D731A90)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_FILLSUBMITTERIDSTO_OFFSET UNITYSDK_OFFSET(0x1D731C90)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_FILLSUBMITTERSTO_OFFSET UNITYSDK_OFFSET(0x1D72FCF0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GETPRESUBMITTERID_OFFSET UNITYSDK_OFFSET(0x1D731F70)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1D731B40)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTERIDS_OFFSET UNITYSDK_OFFSET(0x1D731BF0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTER_OFFSET UNITYSDK_OFFSET(0x1D72F500)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D731820)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1D7318B0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D72FCA0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_SUBMITTERIDS_OFFSET UNITYSDK_OFFSET(0x1D7317D0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D72E740)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1D732050)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP__CREATESUBMITTERS_OFFSET UNITYSDK_OFFSET(0x1D7321C0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP__INIT_OFFSET UNITYSDK_OFFSET(0x1D731AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialSubmitterGroup_TypeDefinitionIndex = 63204;

	class MaterialSubmitterGroup : public ::System::Object
	{
	public:
		::RPG::GameCore::MaterialSubmitterGroupRow* _Meta; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MaterialSubmitter*>* _Submitters; // 0x18
		::System::Void _ctor(::RPG::GameCore::MaterialSubmitterGroupRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MaterialSubmitterGroupRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_ID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SubmitterIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_SUBMITTERIDS_OFFSET))(this);
		}

		::RPG::GameCore::MaterialSubmissionType get_Type()
		{
			return ((::RPG::GameCore::MaterialSubmissionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_TYPE_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_COUNT_OFFSET))(this);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		static ::RPG::Client::MaterialSubmitterGroup* Create(::RPG::GameCore::MaterialSubmitterGroupRow* a1, ::PNKOJKOOLNO* a2)
		{
			return ((::RPG::Client::MaterialSubmitterGroup*(*)(::RPG::GameCore::MaterialSubmitterGroupRow*, ::PNKOJKOOLNO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CREATE_OFFSET))(a1, a2);
		}

		::System::Int32 GetSubmittedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTEDCOUNT_OFFSET))(this);
		}

		::RPG::Client::MaterialSubmitter* GetSubmitter(::System::UInt32 a1)
		{
			return ((::RPG::Client::MaterialSubmitter*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSubmitterIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTERIDS_OFFSET))(this);
		}

		::System::Boolean CheckHasEnded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASENDED_OFFSET))(this);
		}

		::System::Boolean CheckCanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKCANTAKEREWARD_OFFSET))(this);
		}

		::System::Boolean CheckHasNewSubmitter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASNEWSUBMITTER_OFFSET))(this);
		}

		::System::Void FillSubmitterIDsTo(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_FILLSUBMITTERIDSTO_OFFSET))(this, a1);
		}

		::System::Void FillSubmittersTo(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MaterialSubmitter*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MaterialSubmitter*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_FILLSUBMITTERSTO_OFFSET))(this, a1);
		}

		::System::UInt32 GetPreSubmitterID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GETPRESUBMITTERID_OFFSET))(this, a1);
		}

		::System::Boolean CheckHasUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean Contains(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CONTAINS_OFFSET))(this, a1);
		}

		::System::Int32 IndexOf(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_INDEXOF_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsFirst(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKISFIRST_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsLast(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKISLAST_OFFSET))(this, a1);
		}

		::System::Void _Init(::PNKOJKOOLNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNKOJKOOLNO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP__INIT_OFFSET))(this, a1);
		}

		::System::Void _CreateSubmitters(::PNKOJKOOLNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNKOJKOOLNO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP__CREATESUBMITTERS_OFFSET))(this, a1);
		}

	};
}
