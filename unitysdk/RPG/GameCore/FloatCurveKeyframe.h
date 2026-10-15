#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/UnityEngine/Keyframe.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloatCurveKeyframe; }

#define RPG_GAMECORE_FLOATCURVEKEYFRAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B6CD0)
#define RPG_GAMECORE_FLOATCURVEKEYFRAME_DGCPGAAOAAA_OFFSET UNITYSDK_OFFSET(0x1D6B6A10)
#define RPG_GAMECORE_FLOATCURVEKEYFRAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D6B6600)
#define RPG_GAMECORE_FLOATCURVEKEYFRAME_JOJGPOOAGJK_OFFSET UNITYSDK_OFFSET(0x1D6B6CE0)
#define RPG_GAMECORE_FLOATCURVEKEYFRAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B6D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloatCurveKeyframe_TypeDefinitionIndex = 16336;

	class FloatCurveKeyframe : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Time; // 0x10
		::System::Single Value; // 0x14
		::System::Single InTangent; // 0x18
		::System::Single OutTangent; // 0x1C
		::System::Int32 TangentMode; // 0x20
		::System::Int32 WeightedMode; // 0x24
		::System::Single InWeight; // 0x28
		::System::Single OutWeight; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEKEYFRAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloatCurveKeyframe* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloatCurveKeyframe*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEKEYFRAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::UnityEngine::Keyframe a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEKEYFRAME_EQUALS_OFFSET))(this, a1);
		}

		::UnityEngine::Keyframe DGCPGAAOAAA()
		{
			return ((::UnityEngine::Keyframe(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEKEYFRAME_DGCPGAAOAAA_OFFSET))(this);
		}

		::System::Void JOJGPOOAGJK(::UnityEngine::Keyframe a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEKEYFRAME_JOJGPOOAGJK_OFFSET))(this, a1);
		}

	};
}
