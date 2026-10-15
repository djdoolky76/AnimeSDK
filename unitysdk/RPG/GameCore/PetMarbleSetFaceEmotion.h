#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetMarbleSetFaceEmotion; }

#define RPG_GAMECORE_PETMARBLESETFACEEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D909140)
#define RPG_GAMECORE_PETMARBLESETFACEEMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D909150)
#define RPG_GAMECORE_PETMARBLESETFACEEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9090F0)

namespace RPG::GameCore
{
	class PetMarbleSetFaceEmotion : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 EmotionIndex; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLESETFACEEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetMarbleSetFaceEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetMarbleSetFaceEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLESETFACEEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetMarbleSetFaceEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetMarbleSetFaceEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLESETFACEEMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
