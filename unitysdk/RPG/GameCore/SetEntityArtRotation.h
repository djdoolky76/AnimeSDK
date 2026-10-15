#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetEntityArtRotation; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENTITYARTROTATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB01E0)
#define RPG_GAMECORE_SETENTITYARTROTATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB0310)
#define RPG_GAMECORE_SETENTITYARTROTATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB01A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityArtRotation_TypeDefinitionIndex = 23756;

	class SetEntityArtRotation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* AngleX; // 0x20
		::RPG::GameCore::DynamicFloat* AngleY; // 0x28
		::RPG::GameCore::DynamicFloat* AngleZ; // 0x30
		::System::String* Key; // 0x38
		::System::Boolean IsRevert; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYARTROTATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityArtRotation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityArtRotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYARTROTATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityArtRotation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityArtRotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYARTROTATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
