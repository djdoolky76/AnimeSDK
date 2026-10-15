#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/SignalSourceAsset.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }

#define CINEMACHINE_NOISESETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x166AC6B0)
#define CINEMACHINE_NOISESETTINGS_GETCOMBINEDFILTERRESULTS_OFFSET UNITYSDK_OFFSET(0x166AC210)
#define CINEMACHINE_NOISESETTINGS_GETSIGNAL_OFFSET UNITYSDK_OFFSET(0x166AC5C0)
#define CINEMACHINE_NOISESETTINGS_GET_SIGNALDURATION_OFFSET UNITYSDK_OFFSET(0x166AC5B0)

namespace Cinemachine
{
	class NoiseSettings : public ::Cinemachine::SignalSourceAsset
	{
	public:
		::Il2CppArray<::System::Object*>* PositionNoise; // 0x18
		::Il2CppArray<::System::Object*>* OrientationNoise; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 GetCombinedFilterResults(::Il2CppArray<::System::Object*>* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_GETCOMBINEDFILTERRESULTS_OFFSET))(a1, a2, a3);
		}

		::System::Single get_SignalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_GET_SIGNALDURATION_OFFSET))(this);
		}

		::System::Void GetSignal(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_GETSIGNAL_OFFSET))(this, a1, a2, a3);
		}

	};
}
