#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerTargetBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphAimContainerGiantTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERGIANTTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90EDC0)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERGIANTTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D90EE00)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERGIANTTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90ED40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContainerGiantTarget_TypeDefinitionIndex = 17519;

	class PhotoGraphAimContainerGiantTarget : public ::RPG::GameCore::PhotoGraphAimContainerTargetBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* AimTargetType; // 0x38
		::System::Single Radius; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERGIANTTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContainerGiantTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContainerGiantTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERGIANTTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContainerGiantTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContainerGiantTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERGIANTTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
