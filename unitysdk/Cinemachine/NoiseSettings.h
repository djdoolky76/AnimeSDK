#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/SignalSourceAsset.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define CINEMACHINE_NOISESETTINGS_BB3F8FAAF3D54AE6_OFFSET UNITYSDK_OFFSET(0x2A79A90)
#define CINEMACHINE_NOISESETTINGS_ECCAC576889C4612_OFFSET UNITYSDK_OFFSET(0x171B7D0)
#define CINEMACHINE_NOISESETTINGS_F237382FE3FEC624_OFFSET UNITYSDK_OFFSET(0x2A79930)
#define CINEMACHINE_NOISESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2A79BF0)

namespace Cinemachine
{
	inline static constexpr unsigned int NoiseSettings_TypeDefinitionIndex = 18428;

	class NoiseSettings : public ::Cinemachine::SignalSourceAsset
	{
	public:
		::Il2CppArray<::System::Object*>* PositionNoise; // 0x18
		::Il2CppArray<::System::Object*>* OrientationNoise; // 0x20

		::System::Void BB3F8FAAF3D54AE6(::System::Single A44C7CA1093EC858, ::UnityEngine::Vector3& A0C1F1E95D5F6CA9, ::UnityEngine::Quaternion& FBF9C1F5AF32571D)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_BB3F8FAAF3D54AE6_OFFSET))(this, A44C7CA1093EC858, A0C1F1E95D5F6CA9, FBF9C1F5AF32571D);
		}

		static ::UnityEngine::Vector3 F237382FE3FEC624(::Il2CppArray<::System::Object*>* A29E72D6C13784F0, ::System::Single FF0A37159A523E06, ::UnityEngine::Vector3 B4D565618EF18E5B)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_F237382FE3FEC624_OFFSET))(A29E72D6C13784F0, FF0A37159A523E06, B4D565618EF18E5B);
		}

		::System::Single ECCAC576889C4612()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_ECCAC576889C4612_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS__CTOR_OFFSET))(this);
		}
	};
}
