#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/E7ED61E0B00DDE0C/FDBF4FD73B809E89_ED81FC0B9291B906.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BCE1737A98084F1E.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINECAMERAOFFSET_B8034D3338163EFA_OFFSET UNITYSDK_OFFSET(0x2A2FDB0)
#define CINEMACHINECAMERAOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x2A30150)

inline static constexpr unsigned int CinemachineCameraOffset_TypeDefinitionIndex = 18332;

class CinemachineCameraOffset : public ::Cinemachine::CinemachineExtension
{
public:
	::UnityEngine::Vector3 m_Offset; // 0x30
	::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906 m_ApplyAfter; // 0x3C
	::System::Boolean m_PreserveComposition; // 0x40

	::System::Void B8034D3338163EFA(::Cinemachine::CinemachineVirtualCameraBase* E4C30FC54E27903D, ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906 B67042457177A43B, ::BCE1737A98084F1E& E5EB06E4FD2C32F7, ::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906, ::BCE1737A98084F1E&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINECAMERAOFFSET_B8034D3338163EFA_OFFSET))(this, E4C30FC54E27903D, B67042457177A43B, E5EB06E4FD2C32F7, EB5670302F34D4B7);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINECAMERAOFFSET__CTOR_OFFSET))(this);
	}
};
