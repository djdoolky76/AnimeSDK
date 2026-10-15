#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceSkipDRow; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCESKIPDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D903EC0)
#define RPG_GAMECORE_PERFORMANCESKIPDROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D903B00)
#define RPG_GAMECORE_PERFORMANCESKIPDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D903CD0)
#define RPG_GAMECORE_PERFORMANCESKIPDROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D903A80)
#define RPG_GAMECORE_PERFORMANCESKIPDROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D903AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipDRow_TypeDefinitionIndex = 14374;

	class PerformanceSkipDRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ActorList; // 0x10
		::System::Boolean ContainImportBranch; // 0x18
		::System::Boolean Skippable; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 PerformanceID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPDROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPDROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPDROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSkipDRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSkipDRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPDROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSkipDRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSkipDRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
