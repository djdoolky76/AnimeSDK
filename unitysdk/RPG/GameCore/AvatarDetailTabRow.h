#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarDetailTabRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARDETAILTABROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D412280)
#define RPG_GAMECORE_AVATARDETAILTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D411C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDetailTabRow_TypeDefinitionIndex = 12765;

	class AvatarDetailTabRow : public ::System::Object
	{
	public:
		::System::String* TabName; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarDetailTabRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarDetailTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
