#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PERSTATEPARAMSPECTRUM_CTOR_OFFSET UNITYSDK_OFFSET(0xDA92110)

namespace RPG::Client
{
	inline static constexpr unsigned int PerStateParamSpectrum_TypeDefinitionIndex = 70825;

	class PerStateParamSpectrum : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 FrequencyRange; // 0x10
		::System::Single SpectrumSmooth; // 0x18
		::System::Boolean UseAmplitudeRemap; // 0x1C
		::System::Byte _padding0[0x3];
		::UnityEngine::AnimationCurve* StateSpectrumFilterCurve; // 0x20
		// static const ::System::Object _InMinFrequency; // 0x0
		// static const ::System::Object _InMaxFrequency; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSTATEPARAMSPECTRUM_CTOR_OFFSET))(this);
		}

	};
}
