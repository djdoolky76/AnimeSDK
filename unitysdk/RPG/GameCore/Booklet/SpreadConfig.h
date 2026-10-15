#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class SpreadConfig; }
namespace RPG::GameCore::Booklet { class SpreadStepConfig; }

#define RPG_GAMECORE_BOOKLET_SPREADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D474AD0)
#define RPG_GAMECORE_BOOKLET_SPREADCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4759E0)
#define RPG_GAMECORE_BOOKLET_SPREADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D475880)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int SpreadConfig_TypeDefinitionIndex = 24962;

	class SpreadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::Booklet::SpreadStepConfig* SpreadStepConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SPREADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::SpreadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::SpreadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SPREADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::SpreadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::SpreadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SPREADCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
