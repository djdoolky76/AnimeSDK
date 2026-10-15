#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphFindNpc; }
namespace RPG::GameCore { class PhotoGraphFindNpcConfig; }

#define RPG_GAMECORE_PHOTOGRAPHFINDNPCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D910DB0)
#define RPG_GAMECORE_PHOTOGRAPHFINDNPCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D910CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphFindNpcConfig_TypeDefinitionIndex = 21625;

	class PhotoGraphFindNpcConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PhotoGraphFindNpc*>* NpcInfos; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFINDNPCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphFindNpcConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphFindNpcConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFINDNPCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
