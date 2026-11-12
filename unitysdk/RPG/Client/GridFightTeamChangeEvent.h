#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipChangeEvent; }
namespace RPG::Client { class GridFightFakeRemoveRoleData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class RoleStarChangeData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTEAMCHANGEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB5110)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeamChangeEvent_TypeDefinitionIndex = 66847;

	class GridFightTeamChangeEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightFakeRemoveRoleData*>* FakeRemoveRoles; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* ChangeRoles; // 0x18
		::System::String* ImgPath; // 0x20
		::System::Action* returnCallback; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RoleStarChangeData*>* StarChangeRoles; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipChangeEvent*>* EquipChanges; // 0x38
		::RPG::Client::TextID TalkText; // 0x40
		::System::Boolean ShowTalk; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCHANGEEVENT_CTOR_OFFSET))(this);
		}

	};
}
