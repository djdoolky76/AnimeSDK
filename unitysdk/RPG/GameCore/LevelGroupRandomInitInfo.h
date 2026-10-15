#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupRandomInitControl; }
namespace RPG::GameCore { class LevelGroupRandomInitInfo; }

#define RPG_GAMECORE_LEVELGROUPRANDOMINITINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D783F90)
#define RPG_GAMECORE_LEVELGROUPRANDOMINITINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D783450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupRandomInitInfo_TypeDefinitionIndex = 17330;

	class LevelGroupRandomInitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelGroupRandomInitControl*>* ControlList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPRANDOMINITINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupRandomInitInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupRandomInitInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPRANDOMINITINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
