#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseAdventureCameraLookAt.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureCameraLookAt; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURECAMERALOOKAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D395910)
#define RPG_GAMECORE_ADVENTURECAMERALOOKAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D395920)
#define RPG_GAMECORE_ADVENTURECAMERALOOKAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3958D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCameraLookAt_TypeDefinitionIndex = 20509;

	class AdventureCameraLookAt : public ::RPG::GameCore::BaseAdventureCameraLookAt
	{
	public:
		::System::Boolean Reset; // 0x60
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* LookAtTarget; // 0x68
		::RPG::GameCore::DynamicString* LookAtTargetAreaName; // 0x70
		::RPG::GameCore::DynamicString* LookAtTargetAnchorName; // 0x78
		::RPG::GameCore::DynamicFloat* LookAtGroupID; // 0x80
		::RPG::GameCore::DynamicFloat* LookAtID; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureCameraLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureCameraLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureCameraLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureCameraLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
