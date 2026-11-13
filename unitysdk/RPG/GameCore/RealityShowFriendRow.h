#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RealityShowFriendRow; }

#define RPG_GAMECORE_REALITYSHOWFRIENDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F22B810)
#define RPG_GAMECORE_REALITYSHOWFRIENDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F22B650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RealityShowFriendRow_TypeDefinitionIndex = 12393;

	class RealityShowFriendRow : public ::System::Object
	{
	public:
		::System::UInt32 Record; // 0x10
		::System::UInt32 NPCID; // 0x14
		::RPG::Client::TextID Signature; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALITYSHOWFRIENDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RealityShowFriendRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RealityShowFriendRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALITYSHOWFRIENDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
