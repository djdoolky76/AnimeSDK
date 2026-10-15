#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
class ACBDGIHICCD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class TaskContext; }

#define GDKJJCJNGEN_CTOR_OFFSET UNITYSDK_OFFSET(0x159A3A50)
#define GDKJJCJNGEN_GBCNCENLMPA_OFFSET UNITYSDK_OFFSET(0x159A3760)
#define GDKJJCJNGEN_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x159A3680)
#define GDKJJCJNGEN_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x159A3710)

inline static constexpr unsigned int GDKJJCJNGEN_TypeDefinitionIndex = 54123;

	class GDKJJCJNGEN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
		::ACBDGIHICCD* PJKNMFIDFLF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKJJCJNGEN_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + GDKJJCJNGEN_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKJJCJNGEN_ONPLUGINUNINIT_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GBCNCENLMPA(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::RtLifeBindingConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::FixVec3, ::RPG::GameCore::RtLifeBindingConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + GDKJJCJNGEN_GBCNCENLMPA_OFFSET))(this, a1, a2, a3);
		}

	};
