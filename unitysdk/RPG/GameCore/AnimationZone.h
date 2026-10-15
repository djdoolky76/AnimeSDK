#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimationZone; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ANIMATIONZONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F4860)
#define RPG_GAMECORE_ANIMATIONZONE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F4640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimationZone_TypeDefinitionIndex = 16326;

	class AnimationZone : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AnimZoneType ZoneType; // 0x10
		::System::Single NTimeStart; // 0x14
		::System::Single NTimeEnd; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONZONE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimationZone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimationZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONZONE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
