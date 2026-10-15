#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class CEEGMMCFCBG;
class EBEHJBOGLII;
class ELDKPCBCIIO;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Challenge { class FateRinChallengeLevelInfoViewModel; }
namespace RPG::Client::FateRin::Challenge { class FateRinChallengeTabBtnViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_ADD_ONVIEWMODELEXITCONFIRM_OFFSET UNITYSDK_OFFSET(0xCF9E010)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xCF9CE90)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCF9C840)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_EXIT_OFFSET UNITYSDK_OFFSET(0xCF9E0E0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_INITSELECTINGTABINDEX_OFFSET UNITYSDK_OFFSET(0xCF9DFD0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_ISFIRSTPASSDEEP_OFFSET UNITYSDK_OFFSET(0xCF9DFF0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_LEVELINFOS_OFFSET UNITYSDK_OFFSET(0xCF9DDD0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_SHOWRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0xCF9E0D0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_TABBTNS_OFFSET UNITYSDK_OFFSET(0xCF9DED0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_REMOVE_ONVIEWMODELEXITCONFIRM_OFFSET UNITYSDK_OFFSET(0xCF9E070)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_SET_INITSELECTINGTABINDEX_OFFSET UNITYSDK_OFFSET(0xCF9DFE0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_SET_ISFIRSTPASSDEEP_OFFSET UNITYSDK_OFFSET(0xCF9E000)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__BUILDSUBPANELVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xCF9C9B0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__EXIT_OFFSET UNITYSDK_OFFSET(0xCF9D850)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__SAVESELECTEDBUFFINDEXES_OFFSET UNITYSDK_OFFSET(0xCF9D8C0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__SHOWRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0xCF9D7D0)

namespace RPG::Client::FateRin::Challenge
{
	class FateRinChallengeEntranceViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Challenge::FateRinChallengeTabBtnViewModel*>* _TabBtns; // 0x20
		::RPG::Client::FateRin::ViewModelEventHandler* OnViewModelExitConfirm; // 0x28
		::CEEGMMCFCBG* _Exit_k__BackingField; // 0x30
		::CEEGMMCFCBG* _ShowResidentReward_k__BackingField; // 0x38
		::EBEHJBOGLII* _Service; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Challenge::FateRinChallengeLevelInfoViewModel*>* _LevelInfos; // 0x48
		::ELDKPCBCIIO* _UIPresentService; // 0x50
		::System::Boolean _IsFirstPassDeep_k__BackingField; // 0x58
		::System::Byte _padding0[0x3];
		::System::UInt32 _InitSelectingTabIndex_k__BackingField; // 0x5C
		::System::Void _ctor(::ELDKPCBCIIO* a1, ::EBEHJBOGLII* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ELDKPCBCIIO*, ::EBEHJBOGLII*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::System::Void _BuildSubPanelViewModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__BUILDSUBPANELVIEWMODELS_OFFSET))(this);
		}

		::System::Void _ShowResidentReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__SHOWRESIDENTREWARD_OFFSET))(this);
		}

		::System::Void _Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__EXIT_OFFSET))(this);
		}

		::System::Void _SaveSelectedBuffIndexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__SAVESELECTEDBUFFINDEXES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Challenge::FateRinChallengeLevelInfoViewModel*>* get_LevelInfos()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Challenge::FateRinChallengeLevelInfoViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_LEVELINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Challenge::FateRinChallengeTabBtnViewModel*>* get_TabBtns()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Challenge::FateRinChallengeTabBtnViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_TABBTNS_OFFSET))(this);
		}

		::System::UInt32 get_InitSelectingTabIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_INITSELECTINGTABINDEX_OFFSET))(this);
		}

		::System::Void set_InitSelectingTabIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_SET_INITSELECTINGTABINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstPassDeep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_ISFIRSTPASSDEEP_OFFSET))(this);
		}

		::System::Void set_IsFirstPassDeep(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_SET_ISFIRSTPASSDEEP_OFFSET))(this, a1);
		}

		::System::Void add_OnViewModelExitConfirm(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_ADD_ONVIEWMODELEXITCONFIRM_OFFSET))(this, a1);
		}

		::System::Void remove_OnViewModelExitConfirm(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_REMOVE_ONVIEWMODELEXITCONFIRM_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* get_ShowResidentReward()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_SHOWRESIDENTREWARD_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_Exit()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_EXIT_OFFSET))(this);
		}

	};
}
