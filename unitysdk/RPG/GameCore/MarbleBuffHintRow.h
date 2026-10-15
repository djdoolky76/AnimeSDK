#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleBuffHintRow; }

#define RPG_GAMECORE_MARBLEBUFFHINTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D837C00)
#define RPG_GAMECORE_MARBLEBUFFHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D837A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBuffHintRow_TypeDefinitionIndex = 11888;

	class MarbleBuffHintRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID HintText; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFHINTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleBuffHintRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleBuffHintRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFHINTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
