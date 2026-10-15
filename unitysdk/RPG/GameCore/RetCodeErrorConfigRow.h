#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RetCodeErrorConfigRow; }

#define RPG_GAMECORE_RETCODEERRORCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D998530)
#define RPG_GAMECORE_RETCODEERRORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D997EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RetCodeErrorConfigRow_TypeDefinitionIndex = 14656;

	class RetCodeErrorConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ErrorID; // 0x10
		::System::Boolean IsPileToastCenter; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID Text; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RetCodeErrorConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RetCodeErrorConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
