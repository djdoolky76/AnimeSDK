#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UniversalHotFixTaskConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC77C70)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC75680)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC74930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixTaskConfig_TypeDefinitionIndex = 23354;

	class UniversalHotFixTaskConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* TargetTypeParams; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValueParams; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* DynamicStringParams; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* StringParams; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BoolParams; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IntParams; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* UIntParams; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixTaskConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
