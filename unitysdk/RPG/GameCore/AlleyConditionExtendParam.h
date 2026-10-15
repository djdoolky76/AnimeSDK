#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyConditionType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyConditionExtendParam; }

#define RPG_GAMECORE_ALLEYCONDITIONEXTENDPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E05C0)
#define RPG_GAMECORE_ALLEYCONDITIONEXTENDPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3E04C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyConditionExtendParam_TypeDefinitionIndex = 15677;

	class AlleyConditionExtendParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AlleyConditionType Type; // 0x10
		::System::UInt32 Param; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYCONDITIONEXTENDPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyConditionExtendParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyConditionExtendParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYCONDITIONEXTENDPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
