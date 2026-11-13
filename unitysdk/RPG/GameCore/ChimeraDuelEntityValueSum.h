#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityValueGetterBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEntityValueGetterBase; }
namespace RPG::GameCore { class ChimeraDuelEntityValueSum; }

#define RPG_GAMECORE_CHIMERADUELENTITYVALUESUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F928D10)
#define RPG_GAMECORE_CHIMERADUELENTITYVALUESUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F928D20)
#define RPG_GAMECORE_CHIMERADUELENTITYVALUESUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F928E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityValueSum_TypeDefinitionIndex = 16082;

	class ChimeraDuelEntityValueSum : public ::RPG::GameCore::ChimeraDuelEntityValueGetterBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelEntityValueGetterBase*>* ValueGetters; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUESUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityValueSum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityValueSum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUESUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityValueSum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityValueSum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUESUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
