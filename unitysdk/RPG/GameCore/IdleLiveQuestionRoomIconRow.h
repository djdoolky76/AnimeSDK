#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestionRoomIconRow; }

#define RPG_GAMECORE_IDLELIVEQUESTIONROOMICONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D750BF0)
#define RPG_GAMECORE_IDLELIVEQUESTIONROOMICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D750AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestionRoomIconRow_TypeDefinitionIndex = 11837;

	class IdleLiveQuestionRoomIconRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 SpecialRoomIconID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONROOMICONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveQuestionRoomIconRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveQuestionRoomIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONROOMICONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
