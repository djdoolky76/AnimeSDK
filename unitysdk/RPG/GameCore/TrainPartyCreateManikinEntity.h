#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyCreateManikinEntity; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYCREATEMANIKINENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC301E0)
#define RPG_GAMECORE_TRAINPARTYCREATEMANIKINENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC30210)
#define RPG_GAMECORE_TRAINPARTYCREATEMANIKINENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC30180)

namespace RPG::GameCore
{
	class TrainPartyCreateManikinEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::System::String* ManikinJsonPath; // 0x20
		::System::String* EntityUniqueName; // 0x28
		::RPG::MVector3 Position; // 0x30
		::RPG::MVector3 Rotation; // 0x3C
		::RPG::MVector3 Scale; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEMANIKINENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCreateManikinEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCreateManikinEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEMANIKINENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCreateManikinEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCreateManikinEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEMANIKINENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
