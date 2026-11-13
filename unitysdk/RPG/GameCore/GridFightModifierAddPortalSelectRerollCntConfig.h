#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddPortalSelectRerollCntConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDPORTALSELECTREROLLCNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060B5C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDPORTALSELECTREROLLCNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060B5D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDPORTALSELECTREROLLCNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060B580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddPortalSelectRerollCntConfig_TypeDefinitionIndex = 19720;

	class GridFightModifierAddPortalSelectRerollCntConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDPORTALSELECTREROLLCNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddPortalSelectRerollCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddPortalSelectRerollCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDPORTALSELECTREROLLCNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddPortalSelectRerollCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddPortalSelectRerollCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDPORTALSELECTREROLLCNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
