#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/E7ED61E0B00DDE0C/FDBF4FD73B809E89_ED81FC0B9291B906.h"
#include "unitysdk/BCE1737A98084F1E.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINERECOMPOSER_B8034D3338163EFA_OFFSET UNITYSDK_OFFSET(0x2A8DDA0)
#define CINEMACHINERECOMPOSER_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x2A8E2C0)
#define CINEMACHINERECOMPOSER_BF686059CA11ED97_OFFSET UNITYSDK_OFFSET(0x2A8E2A0)
#define CINEMACHINERECOMPOSER_FE0C4BACA9717677_OFFSET UNITYSDK_OFFSET(0x2A8DD40)
#define CINEMACHINERECOMPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1708400)

inline static constexpr unsigned int CinemachineRecomposer_TypeDefinitionIndex = 18492;

class CinemachineRecomposer : public ::Cinemachine::CinemachineExtension
{
public:
	::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906 m_ApplyAfter; // 0x30
	::System::Single m_Tilt; // 0x34
	::System::Single m_Pan; // 0x38
	::System::Single m_Dutch; // 0x3C
	::System::Single m_ZoomScale; // 0x40
	::System::Single m_FollowAttachment; // 0x44
	::System::Single m_LookAtAttachment; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER__CTOR_OFFSET))(this);
	}

	::System::Void BF686059CA11ED97(::Cinemachine::CinemachineVirtualCameraBase* E4C30FC54E27903D, ::BCE1737A98084F1E& BD846FD4D76A39BE, ::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::BCE1737A98084F1E&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_BF686059CA11ED97_OFFSET))(this, E4C30FC54E27903D, BD846FD4D76A39BE, EB5670302F34D4B7);
	}

	::System::Void FE0C4BACA9717677()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_FE0C4BACA9717677_OFFSET))(this);
	}

	::System::Void B8034D3338163EFA(::Cinemachine::CinemachineVirtualCameraBase* E4C30FC54E27903D, ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906 B67042457177A43B, ::BCE1737A98084F1E& E5EB06E4FD2C32F7, ::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906, ::BCE1737A98084F1E&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_B8034D3338163EFA_OFFSET))(this, E4C30FC54E27903D, B67042457177A43B, E5EB06E4FD2C32F7, EB5670302F34D4B7);
	}

	::System::Void BC5FC01AE53FF41F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_BC5FC01AE53FF41F_OFFSET))(this);
	}
};
