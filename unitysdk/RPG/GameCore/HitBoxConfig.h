#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterCollisionType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HitBoxConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HITBOXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D770000)
#define RPG_GAMECORE_HITBOXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76FD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HitBoxConfig_TypeDefinitionIndex = 16506;

	class HitBoxConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CharacterCollisionType HitBoxType; // 0x10
		::System::Single HitBoxWidth; // 0x14
		::System::Single HitBoxLength; // 0x18
		::System::Single HitBoxHeight; // 0x1C
		::RPG::MVector3 HitBoxOffset; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* HitBoxAttachPoint; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITBOXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HitBoxConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HitBoxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITBOXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
