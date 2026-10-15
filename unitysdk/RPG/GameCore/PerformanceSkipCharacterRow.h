#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceSkipCharacterRow; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D60C0)
#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D8D5EA0)
#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8D5F90)
#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D8D5E30)
#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D8D5E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipCharacterRow_TypeDefinitionIndex = 14361;

	class PerformanceSkipCharacterRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* TalkSentenceName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSkipCharacterRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSkipCharacterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSkipCharacterRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSkipCharacterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
