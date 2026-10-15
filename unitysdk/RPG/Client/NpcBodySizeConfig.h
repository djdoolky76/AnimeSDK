#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPG::Client { class NpcBodySizeInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NPCBODYSIZECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xD9DC150)
#define RPG_CLIENT_NPCBODYSIZECONFIG_GKGBNLAOFLE_OFFSET UNITYSDK_OFFSET(0xD9DBDD0)
#define RPG_CLIENT_NPCBODYSIZECONFIG_HLCEJINBJKL_OFFSET UNITYSDK_OFFSET(0xD9DC050)

namespace RPG::Client
{
	class NpcBodySizeConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::NpcBodySizeInfo*>* NpcBodySizeInfos; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::NPCBodySize, ::RPG::Client::NpcBodySizeInfo*>* _dicNpcBodySizeConfigs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCBODYSIZECONFIG_CTOR_OFFSET))(this);
		}

		::System::Void GKGBNLAOFLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCBODYSIZECONFIG_GKGBNLAOFLE_OFFSET))(this);
		}

		::RPG::Client::NpcBodySizeInfo* HLCEJINBJKL(::RPG::GameCore::NPCBodySize a1)
		{
			return ((::RPG::Client::NpcBodySizeInfo*(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCBODYSIZECONFIG_HLCEJINBJKL_OFFSET))(this, a1);
		}

	};
}
