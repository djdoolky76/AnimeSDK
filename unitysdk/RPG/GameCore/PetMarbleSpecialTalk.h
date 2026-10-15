#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetMarbleSpecialTalk; }

#define RPG_GAMECORE_PETMARBLESPECIALTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D909340)
#define RPG_GAMECORE_PETMARBLESPECIALTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D909350)
#define RPG_GAMECORE_PETMARBLESPECIALTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D909280)

namespace RPG::GameCore
{
	class PetMarbleSpecialTalk : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::UInt32 TalkId; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLESPECIALTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetMarbleSpecialTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetMarbleSpecialTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLESPECIALTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetMarbleSpecialTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetMarbleSpecialTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLESPECIALTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
