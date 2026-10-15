#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveAvatarUpgradeLimitRow; }

#define RPG_GAMECORE_IDLELIVEAVATARUPGRADELIMITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74AAC0)
#define RPG_GAMECORE_IDLELIVEAVATARUPGRADELIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D74A9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAvatarUpgradeLimitRow_TypeDefinitionIndex = 11716;

	class IdleLiveAvatarUpgradeLimitRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockID; // 0x10
		::System::UInt32 LevelLimit; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARUPGRADELIMITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARUPGRADELIMITROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
