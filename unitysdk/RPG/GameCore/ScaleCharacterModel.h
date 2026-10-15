#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ScaleCharacterModel; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SCALECHARACTERMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5ADD0)
#define RPG_GAMECORE_SCALECHARACTERMODEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA5AE10)
#define RPG_GAMECORE_SCALECHARACTERMODEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5AD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScaleCharacterModel_TypeDefinitionIndex = 22728;

	class ScaleCharacterModel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AliveOnly; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* ModelScaleBase; // 0x28
		::System::Single OutlineWidthScale; // 0x30
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* Multiplier; // 0x38
		::System::Boolean ReadTargetFromCaster; // 0x40
		::System::Boolean SaveTargetToCaster; // 0x41
		::System::Boolean EqualRatioByMin; // 0x42
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCALECHARACTERMODEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScaleCharacterModel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScaleCharacterModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCALECHARACTERMODEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScaleCharacterModel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScaleCharacterModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCALECHARACTERMODEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
