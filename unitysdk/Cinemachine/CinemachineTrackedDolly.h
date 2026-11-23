#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachinePathBase_EBD9A49237BF2C79.h"
#include "unitysdk/Cinemachine/CinemachineTrackedDolly_AutoDolly.h"
#include "unitysdk/Cinemachine/CinemachineTrackedDolly_F2C3C8D924827463.h"
#include "unitysdk/E7ED61E0B00DDE0C/FDBF4FD73B809E89_ED81FC0B9291B906.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BCE1737A98084F1E.h"

namespace Cinemachine { class CinemachinePathBase; }

#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_AAEEF94BBC598824_OFFSET UNITYSDK_OFFSET(0x2A3C420)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_E238674919E92198_OFFSET UNITYSDK_OFFSET(0x2A3D500)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_E5D01318F58194B3_OFFSET UNITYSDK_OFFSET(0x2A3D460)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_F705A6D9539C8C3B_OFFSET UNITYSDK_OFFSET(0x2A3C380)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_F8FEF8F5006D5EE3_OFFSET UNITYSDK_OFFSET(0x168A070)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_FC843B452636D87B_OFFSET UNITYSDK_OFFSET(0x2A3C0B0)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY__CTOR_OFFSET UNITYSDK_OFFSET(0x2A3D370)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTrackedDolly_TypeDefinitionIndex = 18301;

	class CinemachineTrackedDolly : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		::Cinemachine::CinemachinePathBase* m_Path; // 0x28
		::System::Single m_PathPosition; // 0x30
		::Cinemachine::CinemachinePathBase_EBD9A49237BF2C79 m_PositionUnits; // 0x34
		::UnityEngine::Vector3 m_PathOffset; // 0x38
		::System::Single m_XDamping; // 0x44
		::System::Single m_YDamping; // 0x48
		::System::Single m_ZDamping; // 0x4C
		::Cinemachine::CinemachineTrackedDolly_F2C3C8D924827463 m_CameraUp; // 0x50
		::System::Single m_PitchDamping; // 0x54
		::System::Single m_YawDamping; // 0x58
		::System::Single m_RollDamping; // 0x5C
		::Cinemachine::CinemachineTrackedDolly_AutoDolly m_AutoDolly; // 0x60
		::System::Single AB344E26D9EFAECA; // 0x70
		::UnityEngine::Quaternion B50493D28B377BF3; // 0x74
		::UnityEngine::Vector3 BCB147FDC57EBC6B; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY__CTOR_OFFSET))(this);
		}

		::System::Single F705A6D9539C8C3B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_F705A6D9539C8C3B_OFFSET))(this);
		}

		::System::Void AAEEF94BBC598824(::BCE1737A98084F1E& BD846FD4D76A39BE, ::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::BCE1737A98084F1E&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_AAEEF94BBC598824_OFFSET))(this, BD846FD4D76A39BE, EB5670302F34D4B7);
		}

		::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906 F8FEF8F5006D5EE3()
		{
			return ((::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_F8FEF8F5006D5EE3_OFFSET))(this);
		}

		::System::Boolean E238674919E92198()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_E238674919E92198_OFFSET))(this);
		}

		::UnityEngine::Vector3 E5D01318F58194B3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_E5D01318F58194B3_OFFSET))(this);
		}

		::UnityEngine::Quaternion FC843B452636D87B(::UnityEngine::Quaternion F6C2C406CE43F29B, ::UnityEngine::Vector3 BE38C169EB1E684C)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_FC843B452636D87B_OFFSET))(this, F6C2C406CE43F29B, BE38C169EB1E684C);
		}
	};
}
