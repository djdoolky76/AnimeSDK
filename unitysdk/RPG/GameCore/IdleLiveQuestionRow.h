#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestionRow; }

#define RPG_GAMECORE_IDLELIVEQUESTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77E910)
#define RPG_GAMECORE_IDLELIVEQUESTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77E690)

namespace RPG::GameCore
{
	class IdleLiveQuestionRow : public ::System::Object
	{
	public:
		::System::UInt32 SenderID; // 0x10
		::System::Single Duration; // 0x14
		::System::UInt32 ID; // 0x18
		::System::UInt32 Option1; // 0x1C
		::System::UInt32 Option2; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Content; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveQuestionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveQuestionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
