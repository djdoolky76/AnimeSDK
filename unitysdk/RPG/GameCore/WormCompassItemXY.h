#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WormCompassItemXY; }
namespace System { class String; }

#define RPG_GAMECORE_WORMCOMPASSITEMXY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCADEE0)
#define RPG_GAMECORE_WORMCOMPASSITEMXY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCADD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WormCompassItemXY_TypeDefinitionIndex = 22166;

	class WormCompassItemXY : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 Row; // 0x10
		::System::Int32 Col; // 0x14
		::System::String* SubPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORMCOMPASSITEMXY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WormCompassItemXY* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WormCompassItemXY*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORMCOMPASSITEMXY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
