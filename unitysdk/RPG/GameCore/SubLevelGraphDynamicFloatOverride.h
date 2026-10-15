#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SubLevelGraphDynamicFloatOverride; }
namespace System { class String; }

#define RPG_GAMECORE_SUBLEVELGRAPHDYNAMICFLOATOVERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB01B30)
#define RPG_GAMECORE_SUBLEVELGRAPHDYNAMICFLOATOVERRIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB01A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubLevelGraphDynamicFloatOverride_TypeDefinitionIndex = 20716;

	class SubLevelGraphDynamicFloatOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBLEVELGRAPHDYNAMICFLOATOVERRIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SubLevelGraphDynamicFloatOverride* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SubLevelGraphDynamicFloatOverride*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBLEVELGRAPHDYNAMICFLOATOVERRIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
