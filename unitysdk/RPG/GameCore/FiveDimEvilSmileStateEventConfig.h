#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEvilSmileStateEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMEVILSMILESTATEEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BD680)
#define RPG_GAMECORE_FIVEDIMEVILSMILESTATEEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BD550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileStateEventConfig_TypeDefinitionIndex = 16699;

	class FiveDimEvilSmileStateEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single EventTime; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* EventName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESTATEEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEvilSmileStateEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEvilSmileStateEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESTATEEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
