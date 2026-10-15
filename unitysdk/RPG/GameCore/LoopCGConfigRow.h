#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopCGConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_LOOPCGCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F5520)
#define RPG_GAMECORE_LOOPCGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7F4AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopCGConfigRow_TypeDefinitionIndex = 15414;

	class LoopCGConfigRow : public ::System::Object
	{
	public:
		::System::String* CaptionPath; // 0x10
		::System::String* VideoPath; // 0x18
		::System::Boolean IsPlayerInvolved; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 VideoID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopCGConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopCGConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
