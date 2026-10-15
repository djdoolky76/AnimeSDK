#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceSkipERow; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCESKIPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D904310)
#define RPG_GAMECORE_PERFORMANCESKIPEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D903F50)
#define RPG_GAMECORE_PERFORMANCESKIPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D904120)
#define RPG_GAMECORE_PERFORMANCESKIPEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D903ED0)
#define RPG_GAMECORE_PERFORMANCESKIPEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D903F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipERow_TypeDefinitionIndex = 14377;

	class PerformanceSkipERow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ActorList; // 0x10
		::System::Boolean Skippable; // 0x18
		::System::Boolean ContainImportBranch; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 PerformanceID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPEROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSkipERow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSkipERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSkipERow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSkipERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
