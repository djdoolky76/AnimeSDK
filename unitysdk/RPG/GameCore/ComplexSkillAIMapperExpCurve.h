#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIMapper.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIMapperExpCurve; }

#define RPG_GAMECORE_COMPLEXSKILLAIMAPPEREXPCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CE9C0)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPEREXPCURVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CE9D0)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPEREXPCURVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CEDA0)

namespace RPG::GameCore
{
	class ComplexSkillAIMapperExpCurve : public ::RPG::GameCore::ComplexSkillAIMapper
	{
	public:
		::RPG::GameCore::FixPoint Avalue; // 0x10
		::RPG::GameCore::FixPoint Bvalue; // 0x18
		::RPG::GameCore::FixPoint Cvalue; // 0x20
		::RPG::GameCore::FixPoint Dvalue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPEREXPCURVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIMapperExpCurve* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIMapperExpCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPEREXPCURVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIMapperExpCurve* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIMapperExpCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPEREXPCURVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
