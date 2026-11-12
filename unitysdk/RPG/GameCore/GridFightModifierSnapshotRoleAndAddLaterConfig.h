#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSnapshotRoleAndAddLaterConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSNAPSHOTROLEANDADDLATERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E944390)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSNAPSHOTROLEANDADDLATERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9443A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSNAPSHOTROLEANDADDLATERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E944350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSnapshotRoleAndAddLaterConfig_TypeDefinitionIndex = 19795;

	class GridFightModifierSnapshotRoleAndAddLaterConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSNAPSHOTROLEANDADDLATERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSnapshotRoleAndAddLaterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSnapshotRoleAndAddLaterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSNAPSHOTROLEANDADDLATERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSnapshotRoleAndAddLaterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSnapshotRoleAndAddLaterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSNAPSHOTROLEANDADDLATERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
