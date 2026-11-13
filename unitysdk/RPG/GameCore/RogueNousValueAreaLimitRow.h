#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousValueAreaLimitRow; }

#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x207B42E0)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x207B3C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousValueAreaLimitRow_TypeDefinitionIndex = 15073;

	class RogueNousValueAreaLimitRow : public ::System::Object
	{
	public:
		::System::UInt32 AreaID; // 0x10
		::System::Int32 MaxNousValue; // 0x14
		::System::Int32 MinNousValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousValueAreaLimitRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousValueAreaLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
