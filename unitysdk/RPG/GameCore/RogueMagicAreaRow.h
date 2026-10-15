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

#define RPG_GAMECORE_ROGUEMAGICAREAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A5D40)
#define RPG_GAMECORE_ROGUEMAGICAREAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9A53D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicAreaRow_TypeDefinitionIndex = 14850;

	class RogueMagicAreaRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DifficultyIDList; // 0x10
		::Il2CppArray<::OINLMMCBCFN*>* WorldLevel2DisplayMonster; // 0x18
		::Il2CppArray<::AJCJJOCGIEL*>* CustomStageDisplayParams; // 0x20
		::Il2CppArray<::System::UInt32>* LayerIDList; // 0x28
		::System::String* CustomStageDisplayIcon; // 0x30
		::System::Boolean IsHard; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 AreaID; // 0x3C
		::System::UInt32 FirstReward; // 0x40
		::RPG::GameCore::RogueMagicAreaGroupID AreaGroupID; // 0x44
		::RPG::Client::TextID AreaNameID; // 0x48
		::System::UInt32 ExtraLayerID; // 0x58
		::System::UInt32 UnlockID; // 0x5C
		::RPG::GameCore::RogueMagicStyleType DefaultStyle; // 0x60
		::System::UInt32 AreaIndex; // 0x64
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
