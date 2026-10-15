#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SingleHitBoxConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SINGLEHITBOXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEB620)
#define RPG_GAMECORE_SINGLEHITBOXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEB490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleHitBoxConfig_TypeDefinitionIndex = 20389;

	class SingleHitBoxConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* HitBoxAttachPoint; // 0x10
		::System::String* SelectPointAttachPoint; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeHit; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEHITBOXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SingleHitBoxConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SingleHitBoxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEHITBOXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
