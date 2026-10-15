#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleAvatarGenderRow; }

#define RPG_GAMECORE_ILBATTLEAVATARGENDERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D747530)
#define RPG_GAMECORE_ILBATTLEAVATARGENDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D747440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarGenderRow_TypeDefinitionIndex = 13788;

	class ILBattleAvatarGenderRow : public ::System::Object
	{
	public:
		::System::UInt32 BoyAvatarID; // 0x10
		::System::UInt32 GirlAvatarID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARGENDERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ILBattleAvatarGenderRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ILBattleAvatarGenderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARGENDERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
