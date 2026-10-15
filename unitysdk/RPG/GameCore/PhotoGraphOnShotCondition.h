#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphOnShotCondition; }

#define RPG_GAMECORE_PHOTOGRAPHONSHOTCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E4200)
#define RPG_GAMECORE_PHOTOGRAPHONSHOTCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E4170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphOnShotCondition_TypeDefinitionIndex = 21649;

	class PhotoGraphOnShotCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHONSHOTCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphOnShotCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphOnShotCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHONSHOTCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
