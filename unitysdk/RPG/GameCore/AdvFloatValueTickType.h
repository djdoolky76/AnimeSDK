#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvFloatValueTickType; }

#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39FC10)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39FBB0)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39F1B0)

namespace RPG::GameCore
{
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
