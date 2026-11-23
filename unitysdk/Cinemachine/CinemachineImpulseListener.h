#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/Cinemachine/CinemachineImpulseListener_ImpulseReaction.h"
#include "unitysdk/E7ED61E0B00DDE0C/FDBF4FD73B809E89_ED81FC0B9291B906.h"
#include "unitysdk/BCE1737A98084F1E.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINE_CINEMACHINEIMPULSELISTENER_B8034D3338163EFA_OFFSET UNITYSDK_OFFSET(0x2A528C0)
#define CINEMACHINE_CINEMACHINEIMPULSELISTENER_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x2A52E40)
#define CINEMACHINE_CINEMACHINEIMPULSELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x2A52EC0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseListener_TypeDefinitionIndex = 18368;

	class CinemachineImpulseListener : public ::Cinemachine::CinemachineExtension
	{
	public:
		::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906 m_ApplyAfter; // 0x30
		::System::Int32 m_ChannelMask; // 0x34
		::System::Single m_Gain; // 0x38
		::System::Boolean m_Use2DDistance; // 0x3C
		::System::Boolean m_UseCameraSpace; // 0x3D
		::System::Byte _padding0[0x2];
		::Cinemachine::CinemachineImpulseListener_ImpulseReaction m_ReactionSettings; // 0x40

		::System::Void B8034D3338163EFA(::Cinemachine::CinemachineVirtualCameraBase* E4C30FC54E27903D, ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906 B67042457177A43B, ::BCE1737A98084F1E& E5EB06E4FD2C32F7, ::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906, ::BCE1737A98084F1E&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSELISTENER_B8034D3338163EFA_OFFSET))(this, E4C30FC54E27903D, B67042457177A43B, E5EB06E4FD2C32F7, EB5670302F34D4B7);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSELISTENER_BC5FC01AE53FF41F_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSELISTENER__CTOR_OFFSET))(this);
		}
	};
}
