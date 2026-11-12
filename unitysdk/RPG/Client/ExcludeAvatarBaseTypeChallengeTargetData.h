#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
namespace RPG::AvatarSystem { class AvatarPath; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class TeamData; }
namespace RPG::GameCore { class ChallengeTargetConfigRow; }
namespace System { class Object; }

#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xD80CF80)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD80CD50)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0xD80D330)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xD80D2A0)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xD80CDE0)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__CHECKEXCLUDEBASICTYPE_OFFSET UNITYSDK_OFFSET(0xD80D040)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__UPDATECHALLENGETARGETSTATE_B__1_0_OFFSET UNITYSDK_OFFSET(0xD80D450)

namespace RPG::Client
{
	inline static constexpr unsigned int ExcludeAvatarBaseTypeChallengeTargetData_TypeDefinitionIndex = 64548;

	class ExcludeAvatarBaseTypeChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		::RPG::AvatarSystem::AvatarPath* AvatarPath; // 0x28
		::System::Void _ctor(::RPG::GameCore::ChallengeTargetConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_GETNAMEPARAM_OFFSET))(this);
		}

		static ::System::Boolean _CheckExcludeBasicType(::RPG::AvatarSystem::AvatarPath* a1, ::Il2CppArray<::RPG::Client::TeamData*>* a2)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::AvatarPath*, ::Il2CppArray<::RPG::Client::TeamData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__CHECKEXCLUDEBASICTYPE_OFFSET))(a1, a2);
		}

		::System::Boolean _UpdateChallengeTargetState_b__1_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__UPDATECHALLENGETARGETSTATE_B__1_0_OFFSET))(this, a1);
		}

	};
}
