#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceChangePlayerType.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceERow; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FBCF0)
#define RPG_GAMECORE_PERFORMANCEEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D8FACB0)
#define RPG_GAMECORE_PERFORMANCEEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8FB060)
#define RPG_GAMECORE_PERFORMANCEEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D8FBC80)
#define RPG_GAMECORE_PERFORMANCEEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D8FBCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceERow_TypeDefinitionIndex = 14332;

	class PerformanceERow : public ::System::Object
	{
	public:
		::System::String* PerformancePath; // 0x10
		::System::String* PerformanceCharacter; // 0x18
		::RPG::GameCore::PerformanceChangePlayerType ChangePlayerType; // 0x20
		::RPG::GameCore::PerformanceSkipType IsSkip; // 0x24
		::System::UInt32 PerformanceID; // 0x28
		::System::Boolean IsIntroDialogue; // 0x2C
		::System::Boolean EndWithCrack; // 0x2D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::StoryBlackType EndBlack; // 0x30
		::System::UInt32 FloorID; // 0x34
		::System::UInt32 PlaneID; // 0x38
		::RPG::GameCore::StoryBlackType StartBlack; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceERow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceERow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
