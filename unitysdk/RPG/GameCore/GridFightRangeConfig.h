#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRangeConfig; }

#define RPG_GAMECORE_GRIDFIGHTRANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94C730)
#define RPG_GAMECORE_GRIDFIGHTRANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E94C610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRangeConfig_TypeDefinitionIndex = 10567;

	class GridFightRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Lower; // 0x10
		::System::UInt32 Upper; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTRANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTRANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
