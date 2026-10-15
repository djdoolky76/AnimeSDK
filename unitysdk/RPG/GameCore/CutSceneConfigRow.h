#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CutSceneConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CUTSCENECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EAFA0)
#define RPG_GAMECORE_CUTSCENECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5EAB80)

namespace RPG::GameCore
{
	class CutSceneConfigRow : public ::System::Object
	{
	public:
		::System::String* CutSceneBGMStateName; // 0x10
		::System::String* CutSceneName; // 0x18
		::Il2CppArray<::System::String*>* HideBlockList; // 0x20
		::System::String* CutScenePath; // 0x28
		::Il2CppArray<::System::Single>* PosOffSet; // 0x30
		::System::String* CaptionPath; // 0x38
		::System::String* CutSceneSFXJsonPath; // 0x40
		::System::UInt32 MazePlaneID; // 0x48
		::System::UInt32 SFXID; // 0x4C
		::System::Boolean IsPlayerInvolved; // 0x50
		::System::Byte _padding0[0x3];
		::System::UInt32 VoiceID; // 0x54
		::System::UInt32 MazeFloorID; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CutSceneConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CutSceneConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
