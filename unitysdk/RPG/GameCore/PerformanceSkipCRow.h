#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceSkipCRow; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCESKIPCROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9037D0)
#define RPG_GAMECORE_PERFORMANCESKIPCROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D903410)
#define RPG_GAMECORE_PERFORMANCESKIPCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9035E0)
#define RPG_GAMECORE_PERFORMANCESKIPCROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D903390)
#define RPG_GAMECORE_PERFORMANCESKIPCROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D9033F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipCRow_TypeDefinitionIndex = 14371;

	class PerformanceSkipCRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ActorList; // 0x10
		::System::Boolean Skippable; // 0x18
		::System::Boolean ContainImportBranch; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 PerformanceID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSkipCRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSkipCRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSkipCRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSkipCRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
