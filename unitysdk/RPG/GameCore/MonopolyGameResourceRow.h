#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyGameResourceRow; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYGAMERESOURCEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D873860)
#define RPG_GAMECORE_MONOPOLYGAMERESOURCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D873220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyGameResourceRow_TypeDefinitionIndex = 12073;

	class MonopolyGameResourceRow : public ::System::Object
	{
	public:
		::System::String* IconOutlinePath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* RuleIconPath; // 0x20
		::System::UInt32 ResourceNum; // 0x28
		::System::UInt32 ResourceID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyGameResourceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyGameResourceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
