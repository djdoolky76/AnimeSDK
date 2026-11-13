#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CutSceneConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CUTSCENECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFF6970)
#define RPG_GAMECORE_CUTSCENECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EFF6550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CutSceneConfigRow_TypeDefinitionIndex = 13169;

	class CutSceneConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* PosOffSet; // 0x10
		::System::String* CutSceneSFXJsonPath; // 0x18
		::System::String* CutSceneName; // 0x20
		::System::String* CutSceneBGMStateName; // 0x28
		::System::String* CaptionPath; // 0x30
		::System::String* CutScenePath; // 0x38
		::Il2CppArray<::System::String*>* HideBlockList; // 0x40
		::System::UInt32 SFXID; // 0x48
		::System::UInt32 VoiceID; // 0x4C
		::System::UInt32 MazeFloorID; // 0x50
		::System::Boolean IsPlayerInvolved; // 0x54
		::System::Byte _padding0[0x3];
		::System::UInt32 MazePlaneID; // 0x58
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
