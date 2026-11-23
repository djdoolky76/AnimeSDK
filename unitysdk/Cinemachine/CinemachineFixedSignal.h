#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/SignalSourceAsset.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class FAED0374422E783A; }

#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_BB3F8FAAF3D54AE6_OFFSET UNITYSDK_OFFSET(0x2A63BC0)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_E633B0B1EBBEF6C0_OFFSET UNITYSDK_OFFSET(0x2A63B70)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_ECCAC576889C4612_OFFSET UNITYSDK_OFFSET(0x2A63CE0)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_FE878AF147A7DDF6_OFFSET UNITYSDK_OFFSET(0x2A63A90)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E456F0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFixedSignal_TypeDefinitionIndex = 18440;

	class CinemachineFixedSignal : public ::Cinemachine::SignalSourceAsset
	{
	public:
		::UnityEngine::FAED0374422E783A* m_XCurve; // 0x18
		::UnityEngine::FAED0374422E783A* m_YCurve; // 0x20
		::UnityEngine::FAED0374422E783A* m_ZCurve; // 0x28

		::System::Void BB3F8FAAF3D54AE6(::System::Single A44C7CA1093EC858, ::UnityEngine::Vector3& A0C1F1E95D5F6CA9, ::UnityEngine::Quaternion& FBF9C1F5AF32571D)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_BB3F8FAAF3D54AE6_OFFSET))(this, A44C7CA1093EC858, A0C1F1E95D5F6CA9, FBF9C1F5AF32571D);
		}

		::System::Single ECCAC576889C4612()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_ECCAC576889C4612_OFFSET))(this);
		}

		::System::Single E633B0B1EBBEF6C0(::UnityEngine::FAED0374422E783A* F24A60394CB7A82C, ::System::Single FF0A37159A523E06)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::FAED0374422E783A*, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_E633B0B1EBBEF6C0_OFFSET))(this, F24A60394CB7A82C, FF0A37159A523E06);
		}

		::System::Single FE878AF147A7DDF6(::UnityEngine::FAED0374422E783A* F24A60394CB7A82C)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::FAED0374422E783A*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_FE878AF147A7DDF6_OFFSET))(this, F24A60394CB7A82C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL__CTOR_OFFSET))(this);
		}
	};
}
