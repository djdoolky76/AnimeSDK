#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class OwnerEntityAddAbility; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_OWNERENTITYADDABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BC3B0)
#define RPG_GAMECORE_OWNERENTITYADDABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8BC3C0)
#define RPG_GAMECORE_OWNERENTITYADDABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8BC380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OwnerEntityAddAbility_TypeDefinitionIndex = 22475;

	class OwnerEntityAddAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AbilityName; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYADDABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OwnerEntityAddAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OwnerEntityAddAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYADDABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OwnerEntityAddAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OwnerEntityAddAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYADDABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
