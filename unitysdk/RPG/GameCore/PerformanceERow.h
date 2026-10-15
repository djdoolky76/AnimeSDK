#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceChangePlayerType.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceERow; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CE340)
#define RPG_GAMECORE_PERFORMANCEEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D8CD2F0)
#define RPG_GAMECORE_PERFORMANCEEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8CD6A0)
#define RPG_GAMECORE_PERFORMANCEEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D8CE2C0)
#define RPG_GAMECORE_PERFORMANCEEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D8CE320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceERow_TypeDefinitionIndex = 14332;

	class PerformanceERow : public ::System::Object
	{
	public:
		::System::String* PerformanceCharacter; // 0x10
		::System::String* PerformancePath; // 0x18
		::RPG::GameCore::PerformanceSkipType IsSkip; // 0x20
		::RPG::GameCore::PerformanceChangePlayerType ChangePlayerType; // 0x24
		::System::UInt32 PerformanceID; // 0x28
		::RPG::GameCore::StoryBlackType StartBlack; // 0x2C
		::System::UInt32 FloorID; // 0x30
		::System::Boolean EndWithCrack; // 0x34
		::System::Boolean IsIntroDialogue; // 0x35
		::System::Byte _padding0[0x2];
		::RPG::GameCore::StoryBlackType EndBlack; // 0x38
		::System::UInt32 PlaneID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
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
