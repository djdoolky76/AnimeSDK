#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationMoveMemberInfo; }

#define RPG_GAMECORE_FORMATIONMOVEMEMBERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EB360)
#define RPG_GAMECORE_FORMATIONMOVEMEMBERINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EB1D0)

namespace RPG::GameCore
{
	class FormationMoveMemberInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 InstanceID; // 0x10
		::System::UInt32 RiderID; // 0x14
		::System::Int32 SlotIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEMEMBERINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveMemberInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveMemberInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEMEMBERINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
