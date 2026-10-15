#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StreamingVolumeBlockParam; }
namespace System { class String; }

#define RPG_GAMECORE_STREAMINGVOLUMEBLOCKPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2AFD0)
#define RPG_GAMECORE_STREAMINGVOLUMEBLOCKPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB2AD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingVolumeBlockParam_TypeDefinitionIndex = 19119;

	class StreamingVolumeBlockParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BlockAlias; // 0x10
		::System::Single RangeBegin; // 0x18
		::System::Single RangeEnd; // 0x1C
		::System::Boolean ForceHLOD; // 0x20
		::System::Boolean ForceHide; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGVOLUMEBLOCKPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingVolumeBlockParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingVolumeBlockParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGVOLUMEBLOCKPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
