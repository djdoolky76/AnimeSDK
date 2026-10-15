#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelExcelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELEXCELVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A0D70)
#define RPG_GAMECORE_CHIMERADUELEXCELVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A0D80)
#define RPG_GAMECORE_CHIMERADUELEXCELVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A0CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelExcelValueGetter_TypeDefinitionIndex = 15996;

	class ChimeraDuelExcelValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::System::Int32 ParamIndex; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEXCELVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelExcelValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelExcelValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEXCELVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelExcelValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelExcelValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEXCELVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
