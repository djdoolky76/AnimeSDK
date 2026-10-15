#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyCreateAvatarEntity; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2FDB0)
#define RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2FDE0)
#define RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2FD50)

namespace RPG::GameCore
{
	class TrainPartyCreateAvatarEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AvatarID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* EntityUniqueName; // 0x20
		::RPG::MVector3 Position; // 0x28
		::RPG::MVector3 Rotation; // 0x34
		::RPG::MVector3 Scale; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCreateAvatarEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCreateAvatarEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCreateAvatarEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCreateAvatarEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
