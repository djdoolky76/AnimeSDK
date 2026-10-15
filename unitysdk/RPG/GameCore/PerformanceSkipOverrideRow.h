#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceSkipOverrideRow; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9064E0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D9053D0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D905770)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D906460)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D9064C0)

namespace RPG::GameCore
{
	class PerformanceSkipOverrideRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* OverrideCharacterList; // 0x10
		::System::UInt32 IsConfirmRequiredToSkipFlag; // 0x18
		::System::UInt32 OverrideImportantFlag; // 0x1C
		::System::UInt32 IsOverrideImportantFlag; // 0x20
		::System::UInt32 PackID; // 0x24
		::System::UInt32 PerformanceID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Desc; // 0x30
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x40
		::System::UInt32 IsOverrideCharacter; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSkipOverrideRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSkipOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSkipOverrideRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSkipOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
