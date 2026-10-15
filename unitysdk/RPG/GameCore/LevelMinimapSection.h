#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelMinimapSectionType.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelMinimapLayerSpriteConfig; }
namespace RPG::GameCore { class LevelMinimapPassage; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELMINIMAPSECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B35F0)
#define RPG_GAMECORE_LEVELMINIMAPSECTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7B2F80)

namespace RPG::GameCore
{
	class LevelMinimapSection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Int32 MapLayerID; // 0x14
		::System::String* Sprite; // 0x18
		::Il2CppArray<::RPG::GameCore::LevelMinimapLayerSpriteConfig*>* FSVSpriteList; // 0x20
		::System::Boolean IsRect; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::UInt32>* Indices; // 0x30
		::RPG::MVector2 UIPosition; // 0x38
		::System::Boolean InitialHidden; // 0x40
		::System::Byte _padding1[0x3];
		::RPG::GameCore::LevelMinimapSectionType Type; // 0x44
		::RPG::MVector2 Center; // 0x48
		::System::UInt32 GroupID; // 0x50
		::System::UInt32 PropID; // 0x54
		::System::String* ReferencePropKey; // 0x58
		::Il2CppArray<::RPG::MVector2>* Triangles; // 0x60
		::RPG::MVector2 Pivot; // 0x68
		::Il2CppArray<::RPG::GameCore::LevelMinimapPassage*>* Passages; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPSECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelMinimapSection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPSECTION_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
