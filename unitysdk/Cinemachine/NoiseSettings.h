#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/SignalSourceAsset.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define CINEMACHINE_NOISESETTINGS_GETCOMBINEDFILTERRESULTS_OFFSET UNITYSDK_OFFSET(0x1FC6D610)
#define CINEMACHINE_NOISESETTINGS_GETSIGNAL_OFFSET UNITYSDK_OFFSET(0x1FC6D890)
#define CINEMACHINE_NOISESETTINGS_GET_SIGNALDURATION_OFFSET UNITYSDK_OFFSET(0x1FC6D880)
#define CINEMACHINE_NOISESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6D980)

namespace Cinemachine
{
	inline static constexpr unsigned int NoiseSettings_TypeDefinitionIndex = 34331;

	class NoiseSettings : public ::Cinemachine::SignalSourceAsset
	{
	public:
		::Il2CppArray<::System::Object*>* PositionNoise; // 0x18
		::Il2CppArray<::System::Object*>* OrientationNoise; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 GetCombinedFilterResults(::Il2CppArray<::System::Object*>* noiseParams, ::System::Single time, ::UnityEngine::Vector3 timeOffsets)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_GETCOMBINEDFILTERRESULTS_OFFSET))(noiseParams, time, timeOffsets);
		}

		::System::Single get_SignalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_GET_SIGNALDURATION_OFFSET))(this);
		}

		::System::Void GetSignal(::System::Single timeSinceSignalStart, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_GETSIGNAL_OFFSET))(this, timeSinceSignalStart, pos, rot);
		}
	};
}
