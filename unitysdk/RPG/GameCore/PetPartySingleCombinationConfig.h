#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartySingleCombinationConfig; }
namespace RPG::GameCore { class PetPartySingleCombinationStartPattern; }

#define RPG_GAMECORE_PETPARTYSINGLECOMBINATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90ADA0)
#define RPG_GAMECORE_PETPARTYSINGLECOMBINATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9095D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartySingleCombinationConfig_TypeDefinitionIndex = 17548;

	class PetPartySingleCombinationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Weight; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::PetPartySingleCombinationStartPattern*>* StartPatterns; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLECOMBINATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartySingleCombinationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartySingleCombinationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLECOMBINATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
