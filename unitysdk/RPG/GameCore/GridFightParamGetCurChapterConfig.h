#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetCurChapterConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70A320)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70A330)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70A2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurChapterConfig_TypeDefinitionIndex = 19537;

	class GridFightParamGetCurChapterConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetCurChapterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetCurChapterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetCurChapterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetCurChapterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
