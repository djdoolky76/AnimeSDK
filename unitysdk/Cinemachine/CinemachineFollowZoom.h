#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/E7ED61E0B00DDE0C/FDBF4FD73B809E89_ED81FC0B9291B906.h"
#include "unitysdk/BCE1737A98084F1E.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINE_CINEMACHINEFOLLOWZOOM_B8034D3338163EFA_OFFSET UNITYSDK_OFFSET(0x2A88700)
#define CINEMACHINE_CINEMACHINEFOLLOWZOOM_F705A6D9539C8C3B_OFFSET UNITYSDK_OFFSET(0x19C3B80)
#define CINEMACHINE_CINEMACHINEFOLLOWZOOM_FE0C4BACA9717677_OFFSET UNITYSDK_OFFSET(0x2A886A0)
#define CINEMACHINE_CINEMACHINEFOLLOWZOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x2A88AD0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFollowZoom_TypeDefinitionIndex = 18468;

	class CinemachineFollowZoom : public ::Cinemachine::CinemachineExtension
	{
	public:
		::System::Single m_Width; // 0x30
		::System::Single m_Damping; // 0x34
		::System::Single m_MinFOV; // 0x38
		::System::Single m_MaxFOV; // 0x3C

		::System::Void B8034D3338163EFA(::Cinemachine::CinemachineVirtualCameraBase* E4C30FC54E27903D, ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906 B67042457177A43B, ::BCE1737A98084F1E& E5EB06E4FD2C32F7, ::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906, ::BCE1737A98084F1E&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFOLLOWZOOM_B8034D3338163EFA_OFFSET))(this, E4C30FC54E27903D, B67042457177A43B, E5EB06E4FD2C32F7, EB5670302F34D4B7);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFOLLOWZOOM__CTOR_OFFSET))(this);
		}

		::System::Single F705A6D9539C8C3B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFOLLOWZOOM_F705A6D9539C8C3B_OFFSET))(this);
		}

		::System::Void FE0C4BACA9717677()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFOLLOWZOOM_FE0C4BACA9717677_OFFSET))(this);
		}
	};
}
