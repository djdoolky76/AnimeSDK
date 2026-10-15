#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class AIVariableValueSource; }

#define RPG_GAMECORE_AIVARIABLEVALUESOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33EA50)
#define RPG_GAMECORE_AIVARIABLEVALUESOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33E990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariableValueSource_TypeDefinitionIndex = 15612;

	class AIVariableValueSource : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AIVariable*>* Values; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEVALUESOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariableValueSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariableValueSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEVALUESOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
