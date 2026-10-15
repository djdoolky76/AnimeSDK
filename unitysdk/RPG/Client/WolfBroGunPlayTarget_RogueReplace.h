#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget_Replace.h"
class FICJADOJGMF;
class ODLPBJENMLP;
namespace RPG::Client { class WolfBroGunPlayTarget; }
namespace RPG::Client { class WolfBroGunPlayTarget_RogueHP; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_AWAKE_OFFSET UNITYSDK_OFFSET(0xE47AA30)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_CTOR_OFFSET UNITYSDK_OFFSET(0xE47AD80)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_GETREPLACEPREFAB_OFFSET UNITYSDK_OFFSET(0xE47AA80)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_GET_ROGUEROADMAP_OFFSET UNITYSDK_OFFSET(0xE47AD00)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_ONREPLACEPREFABINSTANCED_OFFSET UNITYSDK_OFFSET(0xE47AC10)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_RogueReplace_TypeDefinitionIndex = 68735;

	class WolfBroGunPlayTarget_RogueReplace : public ::RPG::Client::WolfBroGunPlayTarget_Replace
	{
	public:
		::RPG::Client::WolfBroGunPlayTarget_RogueHP* coin; // 0xD8
		::RPG::Client::WolfBroGunPlayTarget_RogueHP* miracle; // 0xE0
		::RPG::Client::WolfBroGunPlayTarget_RogueHP* ruanmei; // 0xE8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_AWAKE_OFFSET))(this);
		}

		::RPG::Client::WolfBroGunPlayTarget* GetReplacePrefab(::FICJADOJGMF* a1)
		{
			return ((::RPG::Client::WolfBroGunPlayTarget*(*)(::PVOID, ::FICJADOJGMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_GETREPLACEPREFAB_OFFSET))(this, a1);
		}

		::System::Void OnReplacePrefabInstanced(::FICJADOJGMF* a1, ::RPG::Client::WolfBroGunPlayTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FICJADOJGMF*, ::RPG::Client::WolfBroGunPlayTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_ONREPLACEPREFABINSTANCED_OFFSET))(this, a1, a2);
		}

		::ODLPBJENMLP* get_RogueRoadMap()
		{
			return ((::ODLPBJENMLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_GET_ROGUEROADMAP_OFFSET))(this);
		}

	};
}
