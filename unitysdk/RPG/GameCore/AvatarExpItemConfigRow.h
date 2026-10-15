#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarExpItemConfigRow; }

#define RPG_GAMECORE_AVATAREXPITEMCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E8710)
#define RPG_GAMECORE_AVATAREXPITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3E8170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarExpItemConfigRow_TypeDefinitionIndex = 12752;

	class AvatarExpItemConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 Exp; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarExpItemConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarExpItemConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
