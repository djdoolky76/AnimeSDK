#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimatorStateCustomZoneBinding; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMATORSTATECUSTOMZONEBINDING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F4C10)
#define RPG_GAMECORE_ANIMATORSTATECUSTOMZONEBINDING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F4AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorStateCustomZoneBinding_TypeDefinitionIndex = 16333;

	class AnimatorStateCustomZoneBinding : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AnimZoneType ZoneType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* CustomName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATECUSTOMZONEBINDING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimatorStateCustomZoneBinding* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimatorStateCustomZoneBinding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATECUSTOMZONEBINDING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
