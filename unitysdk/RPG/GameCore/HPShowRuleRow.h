#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HPShowRuleRow; }
namespace System { class String; }

#define RPG_GAMECORE_HPSHOWRULEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D752550)
#define RPG_GAMECORE_HPSHOWRULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D751EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HPShowRuleRow_TypeDefinitionIndex = 13713;

	class HPShowRuleRow : public ::System::Object
	{
	public:
		::System::String* Color; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Boolean IsDanger; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single Max; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HPShowRuleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HPShowRuleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
