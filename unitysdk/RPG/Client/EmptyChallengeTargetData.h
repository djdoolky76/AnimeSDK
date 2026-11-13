#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeType.h"
namespace RPG::Client { class EmptyChallengeTargetData; }
namespace System { class Object; }

#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x1A6CFF40)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CFE30)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_FAKEDATA_OFFSET UNITYSDK_OFFSET(0x1A6CFE70)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0x1A6CFFE0)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x1A6CFF90)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x1A6CFEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmptyChallengeTargetData_TypeDefinitionIndex = 64547;

	class EmptyChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		::RPG::Client::TextID Name; // 0x28
		::RPG::GameCore::ChallengeType ChallengeType; // 0x38
		::System::UInt32 RewardID; // 0x3C
		::System::UInt32 ChallengeParam1; // 0x40
		::System::UInt32 ChallengeParam3; // 0x44
		::System::UInt32 ChallengeParam2; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EmptyChallengeTargetData* FakeData()
		{
			return ((::RPG::Client::EmptyChallengeTargetData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_FAKEDATA_OFFSET))();
		}

		::System::Void UpdateChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET))(this);
		}

	};
}
