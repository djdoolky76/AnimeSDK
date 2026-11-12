#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightOneWeightConfig; }

#define RPG_GAMECORE_GRIDFIGHTONEWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E946700)
#define RPG_GAMECORE_GRIDFIGHTONEWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9465E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightOneWeightConfig_TypeDefinitionIndex = 10568;

	class GridFightOneWeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Key; // 0x10
		::System::UInt32 Weight; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTONEWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightOneWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightOneWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTONEWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
