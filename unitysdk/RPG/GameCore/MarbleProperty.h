#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleValue.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleProperty; }

#define RPG_GAMECORE_MARBLEPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D844F00)
#define RPG_GAMECORE_MARBLEPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D844DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleProperty_TypeDefinitionIndex = 16829;

	class MarbleProperty : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::RPG::GameCore::MarbleValue ValueType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
