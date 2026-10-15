#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MarbleEffectType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleEffect; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83CC80)
#define RPG_GAMECORE_MARBLEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83C720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleEffect_TypeDefinitionIndex = 16908;

	class MarbleEffect : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MarbleEffectType Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* EffectPath; // 0x18
		::System::Single EffectScale; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* AttachPoint; // 0x28
		::System::Boolean IsAttach; // 0x30
		::System::Boolean UseHitParam; // 0x31
		::System::Boolean IsMatEffect; // 0x32
		::System::Boolean ManualRemove; // 0x33
		::System::Boolean IgnoreIceLevel; // 0x34
		::System::Byte _padding2[0x3];
		::System::Int32 TimeSlowPriority; // 0x38
		::System::Single TimeSlowFactor; // 0x3C
		::System::Single TimeSlowDuration; // 0x40
		::System::Byte _padding3[0x4];
		::System::String* CameraShakeTemplate; // 0x48
		::System::Boolean AttenuateSpeed; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
