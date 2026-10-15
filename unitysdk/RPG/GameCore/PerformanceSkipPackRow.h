#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class NHIBHAEEOOE;
namespace RPG::GameCore { class PerformanceSkipPackRow; }

#define RPG_GAMECORE_PERFORMANCESKIPPACKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9067F0)
#define RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D906560)
#define RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9066A0)
#define RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D9064F0)
#define RPG_GAMECORE_PERFORMANCESKIPPACKROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D906550)

namespace RPG::GameCore
{
	class PerformanceSkipPackRow : public ::System::Object
	{
	public:
		::Il2CppArray<::NHIBHAEEOOE*>* PackList; // 0x10
		::System::UInt32 PackID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSkipPackRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSkipPackRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSkipPackRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSkipPackRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
