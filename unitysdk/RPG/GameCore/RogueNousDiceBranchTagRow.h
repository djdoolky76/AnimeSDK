#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousDiceBranchTagRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUENOUSDICEBRANCHTAGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC31160)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC30FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDiceBranchTagRow_TypeDefinitionIndex = 15059;

	class RogueNousDiceBranchTagRow : public ::System::Object
	{
	public:
		::System::String* TagIcon; // 0x10
		::System::UInt32 TagID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID BranchTagName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHTAGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousDiceBranchTagRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousDiceBranchTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHTAGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
