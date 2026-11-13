#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionDelAllChimeraConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONDELALLCHIMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x205F9B90)
#define RPG_GAMECORE_GRIDFIGHTACTIONDELALLCHIMERACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x205F9BA0)
#define RPG_GAMECORE_GRIDFIGHTACTIONDELALLCHIMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x205F9B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionDelAllChimeraConfig_TypeDefinitionIndex = 19527;

	class GridFightActionDelAllChimeraConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONDELALLCHIMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionDelAllChimeraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionDelAllChimeraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONDELALLCHIMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionDelAllChimeraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionDelAllChimeraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONDELALLCHIMERACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
