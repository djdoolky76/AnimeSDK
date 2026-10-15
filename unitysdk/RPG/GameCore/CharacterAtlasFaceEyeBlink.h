#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterAtlasFaceEyeBlink; }
namespace RPG::GameCore { class CharacterAtlasFaceEyeShapeGroup; }

#define RPG_GAMECORE_CHARACTERATLASFACEEYEBLINK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D569420)
#define RPG_GAMECORE_CHARACTERATLASFACEEYEBLINK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5691A0)

namespace RPG::GameCore
{
	class CharacterAtlasFaceEyeBlink : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 CloseEyeIndex; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* BlinkIndexList; // 0x18
		::System::Single MinBlinkGap; // 0x20
		::System::Single MaxBlinkGap; // 0x24
		::System::Single BlinkingDuration; // 0x28
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::CharacterAtlasFaceEyeShapeGroup*>* ShapeGroupList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEEYEBLINK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterAtlasFaceEyeBlink* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterAtlasFaceEyeBlink*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEEYEBLINK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
