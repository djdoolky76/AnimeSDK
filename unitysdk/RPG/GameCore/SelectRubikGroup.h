#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RubikRotDirection.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SelectRubikGroup; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SELECTRUBIKGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5EDA0)
#define RPG_GAMECORE_SELECTRUBIKGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA5EDB0)
#define RPG_GAMECORE_SELECTRUBIKGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5ED70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SelectRubikGroup_TypeDefinitionIndex = 22144;

	class SelectRubikGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::RubikRotDirection SelectFace; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* ParamSelectFace; // 0x28
		::System::Boolean SelectAll; // 0x30
		::System::Byte _padding1[0x7];
		::System::String* CubeName; // 0x38
		::System::Boolean IsSelect; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTRUBIKGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SelectRubikGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SelectRubikGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTRUBIKGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SelectRubikGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SelectRubikGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTRUBIKGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
