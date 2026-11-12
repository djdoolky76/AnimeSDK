#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetPendingShowReasonConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPENDINGSHOWREASONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E943860)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPENDINGSHOWREASONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E943870)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPENDINGSHOWREASONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E943820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetPendingShowReasonConfig_TypeDefinitionIndex = 19760;

	class GridFightModifierSetPendingShowReasonConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPENDINGSHOWREASONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetPendingShowReasonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetPendingShowReasonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPENDINGSHOWREASONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetPendingShowReasonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetPendingShowReasonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPENDINGSHOWREASONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
