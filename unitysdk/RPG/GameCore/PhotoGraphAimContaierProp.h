#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerTargetBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PhotoGraphAimContaierProp; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E0020)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E0060)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DFFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContaierProp_TypeDefinitionIndex = 17516;

	class PhotoGraphAimContaierProp : public ::RPG::GameCore::PhotoGraphAimContainerTargetBase
	{
	public:
		::RPG::GameCore::DynamicFloat* AimPropID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContaierProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContaierProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContaierProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContaierProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
