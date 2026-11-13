#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
namespace RPG::GameCore { class ChallengeTargetConfigRow; }
namespace System { class Object; }

#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x1CEE3B30)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE37F0)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0x1CEE3D90)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GET_KILLNUM_OFFSET UNITYSDK_OFFSET(0x1CEE3880)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GET_MONSTERID_OFFSET UNITYSDK_OFFSET(0x1CEE3AC0)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x1CEE3D00)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x1CEE38F0)

namespace RPG::Client
{
	inline static constexpr unsigned int KillMonsterChallengeTargetData_TypeDefinitionIndex = 64552;

	class KillMonsterChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		::System::Void _ctor(::RPG::GameCore::ChallengeTargetConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET))(this);
		}

		::System::UInt32 get_MonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GET_MONSTERID_OFFSET))(this);
		}

		::System::UInt32 get_KillNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GET_KILLNUM_OFFSET))(this);
		}

	};
}
