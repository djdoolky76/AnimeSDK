#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class ChallengeTargetConfigRow; }
namespace System { class Object; }

#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x1A4A22E0)
#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4A24F0)
#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A1FF0)
#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A4A23E0)
#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x1A4A2350)
#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x1A4A2210)
#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA__CONVERT_OFFSET UNITYSDK_OFFSET(0x1A4A2080)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDeadCountChallengeTargetData_TypeDefinitionIndex = 64542;

	class AvatarDeadCountChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		static ::RPG::Client::TextID* StaticGet__NoneDeadTextID()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "AvatarDeadCountChallengeTargetData")->GetStaticField(0x13390);
		}

		::System::Void _ctor(::RPG::GameCore::ChallengeTargetConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_CCTOR_OFFSET))();
		}

		::System::Int32 _Convert(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA__CONVERT_OFFSET))(this, a1);
		}

		::System::Void UpdateChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_GET_NAME_OFFSET))(this);
		}

	};
}
