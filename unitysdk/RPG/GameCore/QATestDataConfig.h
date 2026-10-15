#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class QAAdventurePlayerRow; }
namespace RPG::GameCore { class QATestDataConfig; }

#define RPG_GAMECORE_QATESTDATACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D930DA0)
#define RPG_GAMECORE_QATESTDATACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D930CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QATestDataConfig_TypeDefinitionIndex = 19065;

	class QATestDataConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::QAAdventurePlayerRow*>* QAAdventurePlayerConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QATESTDATACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::QATestDataConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QATestDataConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QATESTDATACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
