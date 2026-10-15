#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindAttachEff; }
namespace RPG::GameCore { class TimeRewindSpreadEffConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDATTACHEFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB86980)
#define RPG_GAMECORE_TIMEREWINDATTACHEFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB86610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindAttachEff_TypeDefinitionIndex = 16607;

	class TimeRewindAttachEff : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffPath; // 0x10
		::System::String* AttachPoint; // 0x18
		::RPG::MVector3 Scale; // 0x20
		::System::Boolean SyncPropState; // 0x2C
		::System::Byte _padding0[0x3];
		::RPG::MVector3 PositionOffset; // 0x30
		::System::Single Delay; // 0x3C
		::RPG::GameCore::TimeRewindSpreadEffConfig* DynamicSpreadConfig; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDATTACHEFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindAttachEff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindAttachEff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDATTACHEFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
