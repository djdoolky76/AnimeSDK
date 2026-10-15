#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShakeDistanceAttenuation; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHAKEDISTANCEATTENUATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACEED0)
#define RPG_GAMECORE_SHAKEDISTANCEATTENUATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACED30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShakeDistanceAttenuation_TypeDefinitionIndex = 16416;

	class ShakeDistanceAttenuation : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::System::String* AttachPointName; // 0x18
		::System::Single ShakeDistance; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* ShakeAttenuationCurve; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAKEDISTANCEATTENUATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShakeDistanceAttenuation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShakeDistanceAttenuation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAKEDISTANCEATTENUATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
