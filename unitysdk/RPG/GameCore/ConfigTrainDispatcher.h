#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConfigCityTrain; }
namespace RPG::GameCore { class ConfigTrainDispatcher; }

#define RPG_GAMECORE_CONFIGTRAINDISPATCHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D61C0)
#define RPG_GAMECORE_CONFIGTRAINDISPATCHER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D5FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigTrainDispatcher_TypeDefinitionIndex = 16920;

	class ConfigTrainDispatcher : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConfigCityTrain*>* TrainList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGTRAINDISPATCHER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConfigTrainDispatcher* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConfigTrainDispatcher*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGTRAINDISPATCHER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
