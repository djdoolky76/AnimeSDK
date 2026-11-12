#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MazeBuffDisplayType.h"
#include "unitysdk/RPG/GameCore/MazeBuffInBattleBindingType.h"
#include "unitysdk/RPG/GameCore/MazeBuffType.h"
#include "unitysdk/RPG/GameCore/MazeBuffUseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }

#define RPG_GAMECORE_MAZEBUFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7D4E0)
#define RPG_GAMECORE_MAZEBUFFROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1EA7B6B0)
#define RPG_GAMECORE_MAZEBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA7BF00)
#define RPG_GAMECORE_MAZEBUFFROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1EA7D440)
#define RPG_GAMECORE_MAZEBUFFROW_RESET_OFFSET UNITYSDK_OFFSET(0x1EA7D4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffRow_TypeDefinitionIndex = 14185;

	class MazeBuffRow : public ::System::Object
	{
	public:
		::System::String* InBattleBindingKey; // 0x10
		::System::String* ModifierName; // 0x18
		::System::String* BuffEffect; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x28
		::System::String* BuffIcon; // 0x30
		::RPG::GameCore::MazeBuffInBattleBindingType InBattleBindingType; // 0x38
		::System::UInt32 Lv; // 0x3C
		::RPG::GameCore::MazeBuffType MazeBuffType; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID BuffName; // 0x48
		::System::UInt32 BuffDescParamByAvatarSkillID; // 0x58
		::System::UInt32 MazeBuffPool; // 0x5C
		::RPG::GameCore::MazeBuffUseType UseType; // 0x60
		::System::UInt32 LvMax; // 0x64
		::System::UInt32 BuffRarity; // 0x68
		::RPG::GameCore::MazeBuffDisplayType DisplayType; // 0x6C
		::System::UInt32 ID; // 0x70
		::System::UInt32 BuffSeries; // 0x74
		::RPG::GameCore::EnumStatusType MazeBuffIconType; // 0x78
		::System::Boolean IsDisplayEnvInLevel; // 0x7C
		::System::Byte _padding1[0x3];
		::RPG::Client::TextID BuffDesc; // 0x80
		::RPG::Client::TextID BuffSimpleDesc; // 0x90
		::RPG::Client::TextID BuffDescBattle; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeBuffRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeBuffRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
