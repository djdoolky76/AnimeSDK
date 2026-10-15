#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceHitType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace RPG::GameCore { class CakeRaceHitConfig; }

#define RPG_GAMECORE_CAKERACEHITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5231C0)
#define RPG_GAMECORE_CAKERACEHITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D523070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceHitConfig_TypeDefinitionIndex = 18402;

	class CakeRaceHitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceHitType Type; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* Actions; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceHitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceHitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
