#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEntityValueGetterBase; }

#define RPG_GAMECORE_CHIMERADUELENTITYVALUEGETTERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B0A40)
#define RPG_GAMECORE_CHIMERADUELENTITYVALUEGETTERBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7B1410)
#define RPG_GAMECORE_CHIMERADUELENTITYVALUEGETTERBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7B1120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityValueGetterBase_TypeDefinitionIndex = 16079;

	class ChimeraDuelEntityValueGetterBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUEGETTERBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUEGETTERBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUEGETTERBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
