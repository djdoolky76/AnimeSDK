#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvFloatValueTickType; }

#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB9A30)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EAB99D0)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EAB8FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvFloatValueTickType_TypeDefinitionIndex = 21357;

	class AdvFloatValueTickType : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvFloatValueTickType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvFloatValueTickType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvFloatValueTickType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvFloatValueTickType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
