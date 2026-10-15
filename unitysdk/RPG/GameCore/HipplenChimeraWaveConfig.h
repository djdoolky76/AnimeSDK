#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenChimeraWaveConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENCHIMERAWAVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73D330)
#define RPG_GAMECORE_HIPPLENCHIMERAWAVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73D240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenChimeraWaveConfig_TypeDefinitionIndex = 16794;

	class HipplenChimeraWaveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* TrackNameList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENCHIMERAWAVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenChimeraWaveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenChimeraWaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENCHIMERAWAVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
