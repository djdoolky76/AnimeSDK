#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DistanceToScoreWeightMapping; }
namespace RPG::GameCore { class PointEvaluatorConstValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_POINTEVALUATORCONSTVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93D680)
#define RPG_GAMECORE_POINTEVALUATORCONSTVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93D5A0)

namespace RPG::GameCore
{
	class PointEvaluatorConstValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DistanceToScoreWeightMapping*>* WeightMappingTemplates; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORCONSTVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointEvaluatorConstValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointEvaluatorConstValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORCONSTVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
