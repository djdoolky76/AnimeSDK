#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightOneWeightConfig; }
namespace RPG::GameCore { class GridFightWeightConfig; }

#define RPG_GAMECORE_GRIDFIGHTWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6BCA0)
#define RPG_GAMECORE_GRIDFIGHTWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA6BBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightWeightConfig_TypeDefinitionIndex = 10569;

	class GridFightWeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GridFightOneWeightConfig*>* Data; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
