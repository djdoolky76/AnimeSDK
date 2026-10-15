#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerTargetBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphAimContaierTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90DEC0)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D90DF00)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90DE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContaierTarget_TypeDefinitionIndex = 17514;

	class PhotoGraphAimContaierTarget : public ::RPG::GameCore::PhotoGraphAimContainerTargetBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* AimTargetType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContaierTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContaierTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContaierTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContaierTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
