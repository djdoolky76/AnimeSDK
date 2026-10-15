#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SimpleTalkStyleType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SimpleTalkStyle; }
namespace System { class String; }

#define RPG_GAMECORE_SIMPLETALKSTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEA3F0)
#define RPG_GAMECORE_SIMPLETALKSTYLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEA2B0)

namespace RPG::GameCore
{
	class SimpleTalkStyle : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SimpleTalkStyleType StyleType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* SpeakerID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKSTYLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SimpleTalkStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SimpleTalkStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKSTYLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
