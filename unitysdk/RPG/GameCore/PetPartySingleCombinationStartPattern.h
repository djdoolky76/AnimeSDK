#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartySingleCombinationStartPattern; }

#define RPG_GAMECORE_PETPARTYSINGLECOMBINATIONSTARTPATTERN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90AF30)
#define RPG_GAMECORE_PETPARTYSINGLECOMBINATIONSTARTPATTERN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90ADB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartySingleCombinationStartPattern_TypeDefinitionIndex = 17547;

	class PetPartySingleCombinationStartPattern : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Weight; // 0x10
		::System::Single MinIntervalSeconds; // 0x14
		::System::Single MaxIntervalSeconds; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLECOMBINATIONSTARTPATTERN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartySingleCombinationStartPattern* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartySingleCombinationStartPattern*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLECOMBINATIONSTARTPATTERN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
