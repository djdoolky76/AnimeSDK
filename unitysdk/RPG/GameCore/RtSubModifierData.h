#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RtSubModifierData; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTSUBMODIFIERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA38AA0)
#define RPG_GAMECORE_RTSUBMODIFIERDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA38870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSubModifierData_TypeDefinitionIndex = 24188;

	class RtSubModifierData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x28
		::System::Boolean SyncLayerFromParent; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSUBMODIFIERDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSubModifierData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSubModifierData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSUBMODIFIERDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
