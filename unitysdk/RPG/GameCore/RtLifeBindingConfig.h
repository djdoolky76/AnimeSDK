#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtLifeBindingType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RTLIFEBINDINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA33BE0)
#define RPG_GAMECORE_RTLIFEBINDINGCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA33BF0)
#define RPG_GAMECORE_RTLIFEBINDINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA33A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtLifeBindingConfig_TypeDefinitionIndex = 24156;

	class RtLifeBindingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtLifeBindingType Type; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* CustomTarget; // 0x18
		::System::String* CustomBindName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLIFEBINDINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtLifeBindingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtLifeBindingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLIFEBINDINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtLifeBindingConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtLifeBindingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLIFEBINDINGCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
