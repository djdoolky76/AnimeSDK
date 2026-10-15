#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"
class AJCJJOCGIEL;
class FCOEMCEDLNL;
class OINLMMCBCFN;
namespace RPG::GameCore { class RogueMagicAreaRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICAREAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D36A0)
#define RPG_GAMECORE_ROGUEMAGICAREAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9D2D30)

namespace RPG::GameCore
{
	class RogueMagicAreaRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DifficultyIDList; // 0x10
		::System::String* CustomStageDisplayIcon; // 0x18
		::Il2CppArray<::AJCJJOCGIEL*>* CustomStageDisplayParams; // 0x20
		::Il2CppArray<::System::UInt32>* LayerIDList; // 0x28
		::Il2CppArray<::OINLMMCBCFN*>* WorldLevel2DisplayMonster; // 0x30
		::System::UInt32 AreaIndex; // 0x38
		::System::UInt32 UnlockID; // 0x3C
		::RPG::Client::TextID AreaNameID; // 0x40
		::System::UInt32 ExtraLayerID; // 0x50
		::System::UInt32 AreaID; // 0x54
		::RPG::GameCore::RogueMagicAreaGroupID AreaGroupID; // 0x58
		::RPG::GameCore::RogueMagicStyleType DefaultStyle; // 0x5C
		::System::Boolean IsHard; // 0x60
		::System::Byte _padding0[0x3];
		::System::UInt32 FirstReward; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicAreaRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicAreaRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
