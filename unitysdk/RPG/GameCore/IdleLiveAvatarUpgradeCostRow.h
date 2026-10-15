#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveAvatarUpgradeCostRow; }

#define RPG_GAMECORE_IDLELIVEAVATARUPGRADECOSTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D778420)
#define RPG_GAMECORE_IDLELIVEAVATARUPGRADECOSTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D778300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAvatarUpgradeCostRow_TypeDefinitionIndex = 11683;

	class IdleLiveAvatarUpgradeCostRow : public ::System::Object
	{
	public:
		::System::UInt32 Cost; // 0x10
		::System::UInt32 Level; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARUPGRADECOSTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveAvatarUpgradeCostRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveAvatarUpgradeCostRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARUPGRADECOSTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
