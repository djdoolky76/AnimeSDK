#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICGOGNGGID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TeamBuild; }
namespace RPG::Client { class TeamBuildUnit; }
namespace System { class Object; }

#define RPG_CLIENT_TEAMBUILD_ADDTEAMMATE_OFFSET UNITYSDK_OFFSET(0xE1C34A0)
#define RPG_CLIENT_TEAMBUILD_CTOR_OFFSET UNITYSDK_OFFSET(0xE1C3490)
#define RPG_CLIENT_TEAMBUILD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xE1C38E0)
#define RPG_CLIENT_TEAMBUILD_EQUALS_OFFSET UNITYSDK_OFFSET(0xE1C3640)
#define RPG_CLIENT_TEAMBUILD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE1C3990)
#define RPG_CLIENT_TEAMBUILD_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xE1C3420)
#define RPG_CLIENT_TEAMBUILD_GET_TARGETAVATARID_OFFSET UNITYSDK_OFFSET(0xE1C3430)
#define RPG_CLIENT_TEAMBUILD_GET_TARGETAVATARPOSITION_OFFSET UNITYSDK_OFFSET(0xE1C3470)
#define RPG_CLIENT_TEAMBUILD_GET_TEAMMATES_OFFSET UNITYSDK_OFFSET(0xE1C3480)

namespace RPG::Client
{
	class TeamBuild : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TeamBuildUnit*>* _Teammates_k__BackingField; // 0x10
		::System::UInt32 _TargetAvatarPosition_k__BackingField; // 0x18
		::LICGOGNGGID _Identifier_k__BackingField; // 0x1C
		::System::Void _ctor(::LICGOGNGGID a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::Client::TeamBuildUnit*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LICGOGNGGID, ::System::UInt32, ::Il2CppArray<::RPG::Client::TeamBuildUnit*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::LICGOGNGGID get_Identifier()
		{
			return ((::LICGOGNGGID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_TargetAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_GET_TARGETAVATARID_OFFSET))(this);
		}

		::System::UInt32 get_TargetAvatarPosition()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_GET_TARGETAVATARPOSITION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::TeamBuildUnit*>* get_Teammates()
		{
			return ((::Il2CppArray<::RPG::Client::TeamBuildUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_GET_TEAMMATES_OFFSET))(this);
		}

		::System::Void AddTeammate(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_ADDTEAMMATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::RPG::Client::TeamBuild* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILD_GETHASHCODE_OFFSET))(this);
		}

	};
}
