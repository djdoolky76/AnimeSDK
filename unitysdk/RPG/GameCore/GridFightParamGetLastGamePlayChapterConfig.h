#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetLastGamePlayChapterConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7382F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D738300)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7382B0)

namespace RPG::GameCore
{
	class GridFightParamGetLastGamePlayChapterConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetLastGamePlayChapterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetLastGamePlayChapterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetLastGamePlayChapterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetLastGamePlayChapterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
