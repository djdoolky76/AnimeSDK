#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OperationTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ApplyOperation; }

#define RPG_GAMECORE_APPLYOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F6470)
#define RPG_GAMECORE_APPLYOPERATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3F6480)
#define RPG_GAMECORE_APPLYOPERATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F6430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ApplyOperation_TypeDefinitionIndex = 23646;

	class ApplyOperation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::OperationTypeMask ApplyOpMask; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYOPERATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ApplyOperation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ApplyOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYOPERATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ApplyOperation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ApplyOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYOPERATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
