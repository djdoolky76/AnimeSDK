#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class ENEIHJJPNPI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComponentConfig; }
namespace RPG::GameCore { class EntityConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D618280)
#define RPG_GAMECORE_ENTITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6180D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityConfig_TypeDefinitionIndex = 16570;

	class EntityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ComponentConfig*>* Components; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* DynamicStrings; // 0x18
		::ENEIHJJPNPI* DynamicValues; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
