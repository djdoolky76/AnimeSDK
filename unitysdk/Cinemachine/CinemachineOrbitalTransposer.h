#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/AxisState.h"
#include "unitysdk/Cinemachine/AxisState_Recentering.h"
#include "unitysdk/Cinemachine/CinemachineOrbitalTransposer_Heading.h"
#include "unitysdk/Cinemachine/CinemachineTransposer.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BCE1737A98084F1E.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_TransitionParams.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class AFA07AD8C31ACCA1;
class F7C5E038DF37E45E;
namespace Cinemachine { class CinemachineOrbitalTransposer_FEE88E77940CCDB7; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_AAEEF94BBC598824_OFFSET UNITYSDK_OFFSET(0x2A35AA0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_AD5BE3833CEBC624_OFFSET UNITYSDK_OFFSET(0x2A36580)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_B2B25DF77B133E98_OFFSET UNITYSDK_OFFSET(0x2A36B00)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_B9096A5008098084_OFFSET UNITYSDK_OFFSET(0x1678550)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_BA017F989086762A_OFFSET UNITYSDK_OFFSET(0x2A363D0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2A362A0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_E1E2EBEEA6DED53E_OFFSET UNITYSDK_OFFSET(0x2A34A40)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_E728DAE663865997_OFFSET UNITYSDK_OFFSET(0x2A34740)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_E83D2C880F61099C_OFFSET UNITYSDK_OFFSET(0x2A35400)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_EB74FF6500517C8E_OFFSET UNITYSDK_OFFSET(0x2A350D0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FE0C4BACA9717677_OFFSET UNITYSDK_OFFSET(0x2A36780)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FECDD774E77282CC_1_OFFSET UNITYSDK_OFFSET(0x2A369B0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FECDD774E77282CC_OFFSET UNITYSDK_OFFSET(0x2A36970)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x2A36BF0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineOrbitalTransposer_TypeDefinitionIndex = 18330;

	class CinemachineOrbitalTransposer : public ::Cinemachine::CinemachineTransposer
	{
	public:
		::Cinemachine::CinemachineOrbitalTransposer_Heading m_Heading; // 0xA0
		::Cinemachine::AxisState_Recentering m_RecenterToTargetHeading; // 0xAC
		::System::Byte _padding0[0x4];
		::Cinemachine::AxisState m_XAxis; // 0xD0
		::System::Single m_LegacyRadius; // 0x140
		::System::Single m_LegacyHeightOffset; // 0x144
		::System::Single m_LegacyHeadingBias; // 0x148
		::System::Boolean m_HeadingIsSlave; // 0x14C
		::System::Byte _padding1[0x3];
		::Cinemachine::CinemachineOrbitalTransposer_FEE88E77940CCDB7* E612BCE44B7B66BA; // 0x150
		::UnityEngine::Vector3 BCC6E5FDAA9F2915; // 0x158
		::System::Byte _padding2[0x4];
		::F7C5E038DF37E45E* B4BD38CE2AB64A40; // 0x168
		::UnityEngine::Rigidbody* ACE426AA95BD729D; // 0x170
		::UnityEngine::Transform* AB59066790BDAF01; // 0x178
		::UnityEngine::Vector3 AAEA58835770E05F; // 0x180
		::System::Single BD0389E6825C015B; // 0x18C

		::System::Single FECDD774E77282CC(::System::Single EB5670302F34D4B7, ::UnityEngine::Vector3 BE38C169EB1E684C, ::Cinemachine::AxisState& F24A60394CB7A82C)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::Cinemachine::AxisState&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FECDD774E77282CC_OFFSET))(this, EB5670302F34D4B7, BE38C169EB1E684C, F24A60394CB7A82C);
		}

		::System::Void AAEEF94BBC598824(::BCE1737A98084F1E& BD846FD4D76A39BE, ::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::BCE1737A98084F1E&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_AAEEF94BBC598824_OFFSET))(this, BD846FD4D76A39BE, EB5670302F34D4B7);
		}

		::System::Single FECDD774E77282CC_1(::System::Single EB5670302F34D4B7, ::UnityEngine::Vector3 BE38C169EB1E684C, ::Cinemachine::AxisState& F24A60394CB7A82C, ::Cinemachine::AxisState_Recentering& FD8A7C42194EB03C, ::System::Boolean F248480BF52F9A27)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::Cinemachine::AxisState&, ::Cinemachine::AxisState_Recentering&, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FECDD774E77282CC_1_OFFSET))(this, EB5670302F34D4B7, BE38C169EB1E684C, F24A60394CB7A82C, FD8A7C42194EB03C, F248480BF52F9A27);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER__CTOR_OFFSET))(this);
		}

		::System::Void E728DAE663865997(::UnityEngine::Vector3 A0C1F1E95D5F6CA9, ::UnityEngine::Quaternion FBF9C1F5AF32571D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_E728DAE663865997_OFFSET))(this, A0C1F1E95D5F6CA9, FBF9C1F5AF32571D);
		}

		::UnityEngine::Vector3 EB74FF6500517C8E(::UnityEngine::Vector3 FF2EA59FD4C4EE89)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_EB74FF6500517C8E_OFFSET))(this, FF2EA59FD4C4EE89);
		}

		::System::Single E83D2C880F61099C(::System::Single B2C542FA46AC20AF, ::UnityEngine::Quaternion EA533F2B4A3CB49A)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_E83D2C880F61099C_OFFSET))(this, B2C542FA46AC20AF, EA533F2B4A3CB49A);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void BA017F989086762A(::UnityEngine::Transform* F249A74E7BFBE1A7, ::UnityEngine::Vector3 A79C61B0EE319CDE)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_BA017F989086762A_OFFSET))(this, F249A74E7BFBE1A7, A79C61B0EE319CDE);
		}

		::System::Boolean B9096A5008098084()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_B9096A5008098084_OFFSET))(this);
		}

		::System::Boolean AD5BE3833CEBC624(::AFA07AD8C31ACCA1* B4333AFDED03AD06, ::UnityEngine::Vector3 FF2EA59FD4C4EE89, ::System::Single EB5670302F34D4B7, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams& A8A6F695733AAF5E)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFA07AD8C31ACCA1*, ::UnityEngine::Vector3, ::System::Single, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_AD5BE3833CEBC624_OFFSET))(this, B4333AFDED03AD06, FF2EA59FD4C4EE89, EB5670302F34D4B7, A8A6F695733AAF5E);
		}

		::System::Void B2B25DF77B133E98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_B2B25DF77B133E98_OFFSET))(this);
		}

		::System::Single E1E2EBEEA6DED53E(::UnityEngine::Vector3 ADA98589B2733BF9, ::UnityEngine::Vector3 BE38C169EB1E684C)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_E1E2EBEEA6DED53E_OFFSET))(this, ADA98589B2733BF9, BE38C169EB1E684C);
		}

		::System::Void FE0C4BACA9717677()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FE0C4BACA9717677_OFFSET))(this);
		}
	};
}
