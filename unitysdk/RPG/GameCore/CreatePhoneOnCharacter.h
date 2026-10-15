#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreatePhoneOnCharacter; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CREATEPHONEONCHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E45C0)
#define RPG_GAMECORE_CREATEPHONEONCHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E45D0)
#define RPG_GAMECORE_CREATEPHONEONCHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E4590)

namespace RPG::GameCore
{
	class CreatePhoneOnCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsDestroy; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 GroupNpcID; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Boolean IsForUI; // 0x30
		::System::Byte _padding2[0x7];
		::System::String* AttachPoint; // 0x38
		::RPG::MVector3 PositionOffset; // 0x40
		::RPG::MVector3 RotationOffset; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPHONEONCHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreatePhoneOnCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreatePhoneOnCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPHONEONCHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreatePhoneOnCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreatePhoneOnCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPHONEONCHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
