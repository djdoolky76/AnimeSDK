#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEquipRecommendRow; }

#define RPG_GAMECORE_AVATAREQUIPRECOMMENDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4136D0)
#define RPG_GAMECORE_AVATAREQUIPRECOMMENDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D413590)

namespace RPG::GameCore
{
	class AvatarEquipRecommendRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EquipmentList; // 0x10
		::System::UInt32 AvatarID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREQUIPRECOMMENDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarEquipRecommendRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarEquipRecommendRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREQUIPRECOMMENDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
