#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimWeighted; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMWEIGHTED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F3480)
#define RPG_GAMECORE_ANIMWEIGHTED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F32E0)

namespace RPG::GameCore
{
	class AnimWeighted : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StateName; // 0x10
		::System::Single Weight; // 0x18
		::System::Single NormalizedTransitionDuration; // 0x1C
		::System::Single NormalizedOffset; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMWEIGHTED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimWeighted* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimWeighted*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMWEIGHTED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
