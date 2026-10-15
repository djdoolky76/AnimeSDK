#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEnhancedRankRow; }

#define RPG_GAMECORE_AVATARENHANCEDRANKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E50C0)
#define RPG_GAMECORE_AVATARENHANCEDRANKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3E4D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedRankRow_TypeDefinitionIndex = 12791;

	class AvatarEnhancedRankRow : public ::System::Object
	{
	public:
		::System::UInt32 RankID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Comment01; // 0x18
		::RPG::Client::TextID Comment02; // 0x28
		::RPG::Client::TextID RankDescAfter; // 0x38
		::System::UInt32 AvatarID; // 0x48
		::System::UInt32 CommentIndex; // 0x4C
		::RPG::Client::TextID RankDescBefore; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDRANKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarEnhancedRankRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarEnhancedRankRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDRANKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
