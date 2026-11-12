#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
class LMKIOMMDEJI;
class PCCJNGOCLKD;
class PHCOGNHOOJP;
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardPerformViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class GrailViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class TeamRelationViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class FateRinCaseBoardBaseTeamInfo; }
namespace RPG::GameCore { class FateRinCaseBoardTeamRelationInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD91A540)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD91A420)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GETPAGEENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xD91A6E0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GETPAGEEXITCALLBACK_OFFSET UNITYSDK_OFFSET(0xD91A7B0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GETTEAMRELATIONS_OFFSET UNITYSDK_OFFSET(0xD91AB10)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GETTEAMS_OFFSET UNITYSDK_OFFSET(0xD91A9A0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GET_GRAIL_OFFSET UNITYSDK_OFFSET(0xD91A3B0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD91A390)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GET_PERFORM_OFFSET UNITYSDK_OFFSET(0xD91A400)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0xD91A960)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD91A3A0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_SET_PERFORM_OFFSET UNITYSDK_OFFSET(0xD91A410)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_TRYGETTEAMRELATION_OFFSET UNITYSDK_OFFSET(0xD91AB60)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_TRYGETTEAM_OFFSET UNITYSDK_OFFSET(0xD91A9F0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_UPDATETEAMRELATION_OFFSET UNITYSDK_OFFSET(0xD91ABD0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_UPDATETEAM_OFFSET UNITYSDK_OFFSET(0xD91AA50)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL__ONPAGEENTER_OFFSET UNITYSDK_OFFSET(0xD91A880)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL__ONPAGEEXIT_OFFSET UNITYSDK_OFFSET(0xD91A8F0)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardViewModel_TypeDefinitionIndex = 83570;

	class CaseBoardViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel* _Perform_k__BackingField; // 0x20
		::LMKIOMMDEJI* _CaseBoardService; // 0x28
		::PHCOGNHOOJP* _State; // 0x30
		static ::RPG::Client::FateRin::CaseBoard::CaseBoardViewModel** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::FateRin::CaseBoard::CaseBoardViewModel**)UnitySDK::FromName("RPG.Client.FateRin.CaseBoard", "CaseBoardViewModel")->GetStaticField(0x17C40);
		}

		::System::Void _ctor(::LMKIOMMDEJI* a1, ::PCCJNGOCLKD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMKIOMMDEJI*, ::PCCJNGOCLKD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::FateRin::CaseBoard::CaseBoardViewModel* get_Instance()
		{
			return ((::RPG::Client::FateRin::CaseBoard::CaseBoardViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::FateRin::CaseBoard::CaseBoardViewModel* a1)
		{
			return ((::System::Void(*)(::RPG::Client::FateRin::CaseBoard::CaseBoardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_SET_INSTANCE_OFFSET))(a1);
		}

		::RPG::Client::FateRin::CaseBoard::GrailViewModel* get_Grail()
		{
			return ((::RPG::Client::FateRin::CaseBoard::GrailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GET_GRAIL_OFFSET))(this);
		}

		::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel* get_Perform()
		{
			return ((::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GET_PERFORM_OFFSET))(this);
		}

		::System::Void set_Perform(::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_SET_PERFORM_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		static ::System::Action* GetPageEnterCallback(::System::String* a1)
		{
			return ((::System::Action*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GETPAGEENTERCALLBACK_OFFSET))(a1);
		}

		static ::System::Action* GetPageExitCallback()
		{
			return ((::System::Action*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GETPAGEEXITCALLBACK_OFFSET))();
		}

		static ::System::Void _OnPageEnter(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL__ONPAGEENTER_OFFSET))(a1);
		}

		static ::System::Void _OnPageExit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL__ONPAGEEXIT_OFFSET))();
		}

		::PHCOGNHOOJP* get_State()
		{
			return ((::PHCOGNHOOJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GET_STATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* GetTeams()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GETTEAMS_OFFSET))(this);
		}

		::RPG::Client::FateRin::CaseBoard::TeamViewModel* TryGetTeam(::RPG::GameCore::FateRinCaseBoardTeamType a1)
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_TRYGETTEAM_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::CaseBoard::TeamViewModel* UpdateTeam(::RPG::GameCore::FateRinCaseBoardTeamType a1, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a2)
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_UPDATETEAM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*>* GetTeamRelations()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_GETTEAMRELATIONS_OFFSET))(this);
		}

		::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel* TryGetTeamRelation(::RPG::GameCore::FateRinCaseBoardTeamType a1, ::RPG::GameCore::FateRinCaseBoardTeamType a2)
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_TRYGETTEAMRELATION_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel* UpdateTeamRelation(::RPG::GameCore::FateRinCaseBoardTeamRelationInfo* a1)
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamRelationInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL_UPDATETEAMRELATION_OFFSET))(this, a1);
		}

	};
}
