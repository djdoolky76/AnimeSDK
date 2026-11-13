#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousDiceBranchRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUENOUSDICEBRANCHROW_CTOR_OFFSET UNITYSDK_OFFSET(0x207A8E00)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x207A81D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDiceBranchRow_TypeDefinitionIndex = 15055;

	class RogueNousDiceBranchRow : public ::System::Object
	{
	public:
		::System::String* BranchPrefab; // 0x10
		::System::String* BranchEditCorePrefab; // 0x18
		::System::String* SoundRoll; // 0x20
		::System::String* SoundSuspensionStart; // 0x28
		::Il2CppArray<::System::UInt32>* PassiveEffectExtraDesc; // 0x30
		::System::String* DiceLightColor; // 0x38
		::System::String* SoundSuspensionStop; // 0x40
		::System::String* BranchCorePrefab; // 0x48
		::System::String* BranchIcon; // 0x50
		::Il2CppArray<::System::UInt32>* RecommendSurfaceList; // 0x58
		::System::String* DiceIcon; // 0x60
		::Il2CppArray<::System::UInt32>* SuggestiveSurfaceList; // 0x68
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamValue2; // 0x70
		::Il2CppArray<::System::UInt32>* DefaultCommonSurfaceList; // 0x78
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamValue3; // 0x80
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamValue1; // 0x88
		::Il2CppArray<::System::UInt32>* EffectExtraDesc; // 0x90
		::Il2CppArray<::System::UInt32>* ExtraDesc; // 0x98
		::System::String* SoundReRoll; // 0xA0
		::RPG::Client::TextID EffectDescParam2; // 0xA8
		::RPG::Client::TextID EffectDescParam3; // 0xB8
		::RPG::Client::TextID EffectDesc; // 0xC8
		::RPG::Client::TextID BranchName; // 0xD8
		::RPG::Client::TextID BranchIntroduction; // 0xE8
		::System::UInt32 BranchID; // 0xF8
		::System::UInt32 DefaultUltraSurface; // 0xFC
		::RPG::Client::TextID PassiveEffectDesc; // 0x100
		::System::UInt32 BranchTag; // 0x110
		::System::UInt32 UnlockID; // 0x114
		::RPG::Client::TextID EffectDescParam1; // 0x118
		::RPG::Client::TextID StartingEffectDescToast; // 0x128
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousDiceBranchRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousDiceBranchRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
