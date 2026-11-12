#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageContactsCampRow; }

#define RPG_GAMECORE_MESSAGECONTACTSCAMPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA900D0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA8FA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageContactsCampRow_TypeDefinitionIndex = 14630;

	class MessageContactsCampRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 ContactsCamp; // 0x20
		::System::UInt32 SortID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MessageContactsCampRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MessageContactsCampRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
