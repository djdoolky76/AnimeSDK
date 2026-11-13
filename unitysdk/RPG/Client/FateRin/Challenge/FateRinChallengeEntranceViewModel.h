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

#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_ADD_ONVIEWMODELEXITCONFIRM_OFFSET UNITYSDK_OFFSET(0x1E0C2320)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E0C11A0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C0B50)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_EXIT_OFFSET UNITYSDK_OFFSET(0x1E0C23F0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_INITSELECTINGTABINDEX_OFFSET UNITYSDK_OFFSET(0x1E0C22E0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_ISFIRSTPASSDEEP_OFFSET UNITYSDK_OFFSET(0x1E0C2300)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_LEVELINFOS_OFFSET UNITYSDK_OFFSET(0x1E0C20E0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_SHOWRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x1E0C23E0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_TABBTNS_OFFSET UNITYSDK_OFFSET(0x1E0C21E0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_REMOVE_ONVIEWMODELEXITCONFIRM_OFFSET UNITYSDK_OFFSET(0x1E0C2380)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_SET_INITSELECTINGTABINDEX_OFFSET UNITYSDK_OFFSET(0x1E0C22F0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_SET_ISFIRSTPASSDEEP_OFFSET UNITYSDK_OFFSET(0x1E0C2310)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__BUILDSUBPANELVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1E0C0CC0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__EXIT_OFFSET UNITYSDK_OFFSET(0x1E0C1B60)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__SAVESELECTEDBUFFINDEXES_OFFSET UNITYSDK_OFFSET(0x1E0C1BD0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__SHOWRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x1E0C1AE0)

namespace RPG::Client::FateRin::Challenge
{
	inline static constexpr unsigned int FateRinChallengeEntranceViewModel_TypeDefinitionIndex = 83809;

	class FateRinChallengeEntranceViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::EBEHJBOGLII* _Service; // 0x20
		::CEEGMMCFCBG* _ShowResidentReward_k__BackingField; // 0x28
		::RPG::Client::FateRin::ViewModelEventHandler* OnViewModelExitConfirm; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Challenge::FateRinChallengeTabBtnViewModel*>* _TabBtns; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Challenge::FateRinChallengeLevelInfoViewModel*>* _LevelInfos; // 0x40
		::ELDKPCBCIIO* _UIPresentService; // 0x48
		::CEEGMMCFCBG* _Exit_k__BackingField; // 0x50
		::System::UInt32 _InitSelectingTabIndex_k__BackingField; // 0x58
		::System::Boolean _IsFirstPassDeep_k__BackingField; // 0x5C
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
