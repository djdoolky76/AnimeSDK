#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_TEAMMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACE3220)
#define RPG_CLIENT_TEAMMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1ACE3250)
#define RPG_CLIENT_TEAMMODULE___C__SETTEAMMEMBER_B__39_0_OFFSET UNITYSDK_OFFSET(0x1ACE3260)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamModule___c_TypeDefinitionIndex = 70078;

	class TeamModule___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>** StaticGet___9__39_0()
		{
			return (::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x19E70);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x19E78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _SetTeamMember_b__39_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___C__SETTEAMMEMBER_B__39_0_OFFSET))(this, a1);
		}

	};
}
