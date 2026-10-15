#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleMotionConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F45C0)
#define RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D6F4120)
#define RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6F4360)
#define RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D6F40A0)
#define RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D6F4100)

namespace RPG::GameCore
{
	class FreeStyleMotionConfigRow : public ::System::Object
	{
	public:
		::System::String* StartMotion; // 0x10
		::System::String* StartMotionPath; // 0x18
		::System::String* LoopMotionPath; // 0x20
		::System::String* FreeStyleCharacterID; // 0x28
		::System::String* LoopMotionRibbonPath; // 0x30
		::System::String* StartMotionRibbonPath; // 0x38
		::System::UInt32 ID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleMotionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleMotionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleMotionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleMotionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
