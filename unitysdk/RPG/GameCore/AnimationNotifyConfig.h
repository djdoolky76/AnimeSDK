#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimationNotifyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMATIONNOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F44D0)
#define RPG_GAMECORE_ANIMATIONNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F4280)

namespace RPG::GameCore
{
	class AnimationNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AnimatorParameterType ParamType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ParamName; // 0x18
		::System::Single FloatValue; // 0x20
		::System::Int32 IntValue; // 0x24
		::System::Boolean BoolValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONNOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimationNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimationNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
