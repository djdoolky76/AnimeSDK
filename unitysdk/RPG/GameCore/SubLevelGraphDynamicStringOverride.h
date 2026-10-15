#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SubLevelGraphDynamicStringOverride; }
namespace System { class String; }

#define RPG_GAMECORE_SUBLEVELGRAPHDYNAMICSTRINGOVERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB01C30)
#define RPG_GAMECORE_SUBLEVELGRAPHDYNAMICSTRINGOVERRIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB01B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubLevelGraphDynamicStringOverride_TypeDefinitionIndex = 20717;

	class SubLevelGraphDynamicStringOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::DynamicString* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBLEVELGRAPHDYNAMICSTRINGOVERRIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SubLevelGraphDynamicStringOverride* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SubLevelGraphDynamicStringOverride*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBLEVELGRAPHDYNAMICSTRINGOVERRIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
