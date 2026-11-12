#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseClockParkGameState.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xD4EC930)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_ENABLEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0xD4F3300)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xD4F31B0)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_ISSHOWATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0xD4F3280)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_ISSHOWDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0xD4F32C0)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_SETSELECTEDCHAPTERID_OFFSET UNITYSDK_OFFSET(0xD4F3340)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE__INITWAITSELECTCHAPTERS_OFFSET UNITYSDK_OFFSET(0xD4F3090)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xD4F3150)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE__ONENTER_OFFSET UNITYSDK_OFFSET(0xD4F3040)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkWaitSelectStartChapterState_TypeDefinitionIndex = 62888;

	class ClockParkWaitSelectStartChapterState : public ::RPG::Client::BaseClockParkGameState
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _WaitSelectChapterIDs; // 0x18
		::System::UInt32 _SelectedChapterID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE__ONENTER_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE__ONDISPOSE_OFFSET))(this);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean IsShowAttributeInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_ISSHOWATTRIBUTEINFO_OFFSET))(this);
		}

		::System::Boolean IsShowDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_ISSHOWDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean EnableDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_ENABLEDICEPLACEMENT_OFFSET))(this);
		}

		::System::Void SetSelectedChapterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_SETSELECTEDCHAPTERID_OFFSET))(this, a1);
		}

		::System::Void _InitWaitSelectChapters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE__INITWAITSELECTCHAPTERS_OFFSET))(this);
		}

	};
}
