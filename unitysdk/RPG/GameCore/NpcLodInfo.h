#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NpcLodInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_NPCLODINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DC300)
#define RPG_GAMECORE_NPCLODINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DC060)

namespace RPG::GameCore
{
	class NpcLodInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Body; // 0x18
		::System::String* Face; // 0x20
		::System::String* Hair; // 0x28
		::System::String* Item; // 0x30
		::System::String* Weapon; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* NpcLodInfoMap; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcLodInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcLodInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
