#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::Client::Challenge { class ChallengeTargetViewModel_ProgressViewModel; }
namespace System { class Object; }

#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD76D0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_ISNEWFINISHED_OFFSET UNITYSDK_OFFSET(0x1DDD76B0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_NAMEPARAMS_OFFSET UNITYSDK_OFFSET(0x1DDD6A20)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DDD6940)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_PROGRESSCURRENT_OFFSET UNITYSDK_OFFSET(0x1DDD7610)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_PROGRESSTOTAL_OFFSET UNITYSDK_OFFSET(0x1DDD7660)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1DDD73A0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_SHOULDHIDEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1DDD7490)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1DDD7260)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET__MODELHASPROGRESSTOSHOW_OFFSET UNITYSDK_OFFSET(0x1DDD72B0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_SET_ISNEWFINISHED_OFFSET UNITYSDK_OFFSET(0x1DDD76C0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_SET_SHOULDHIDEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1DDD74E0)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeTargetViewModel_TypeDefinitionIndex = 84206;

	class ChallengeTargetViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::BaseChallengeTargetData* _Model; // 0x18
		::RPG::Client::Challenge::ChallengeTargetViewModel_ProgressViewModel* _Progress; // 0x20
		::System::Boolean _ShouldHideProgress; // 0x28
		::System::Boolean _IsNewFinished_k__BackingField; // 0x29
		::System::Void _ctor(::RPG::Client::BaseChallengeTargetData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeTargetState get_State()
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_STATE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_NameParams()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_NAMEPARAMS_OFFSET))(this);
		}

		::System::Boolean get__ModelHasProgressToShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET__MODELHASPROGRESSTOSHOW_OFFSET))(this);
		}

		::RPG::Client::Challenge::ChallengeTargetViewModel_ProgressViewModel* get_Progress()
		{
			return ((::RPG::Client::Challenge::ChallengeTargetViewModel_ProgressViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_PROGRESS_OFFSET))(this);
		}

		::System::Boolean get_ShouldHideProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_SHOULDHIDEPROGRESS_OFFSET))(this);
		}

		::System::Void set_ShouldHideProgress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_SET_SHOULDHIDEPROGRESS_OFFSET))(this, a1);
		}

		::System::Int32 get_ProgressCurrent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_PROGRESSCURRENT_OFFSET))(this);
		}

		::System::Int32 get_ProgressTotal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_PROGRESSTOTAL_OFFSET))(this);
		}

		::System::Boolean get_IsNewFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_ISNEWFINISHED_OFFSET))(this);
		}

		::System::Void set_IsNewFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_SET_ISNEWFINISHED_OFFSET))(this, a1);
		}

	};
}
