#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/E7ED61E0B00DDE0C/FDBF4FD73B809E89_ED81FC0B9291B906.h"
#include "unitysdk/BCE1737A98084F1E.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING_B8034D3338163EFA_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING__CTOR_OFFSET UNITYSDK_OFFSET(0x1708400)

namespace Cinemachine::PostFX
{
	inline static constexpr unsigned int CinemachinePostProcessing_TypeDefinitionIndex = 18366;

	class CinemachinePostProcessing : public ::Cinemachine::CinemachineExtension
	{
	public:
		::System::Void B8034D3338163EFA(::Cinemachine::CinemachineVirtualCameraBase* E4C30FC54E27903D, ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906 B67042457177A43B, ::BCE1737A98084F1E& E5EB06E4FD2C32F7, ::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906, ::BCE1737A98084F1E&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING_B8034D3338163EFA_OFFSET))(this, E4C30FC54E27903D, B67042457177A43B, E5EB06E4FD2C32F7, EB5670302F34D4B7);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING__CTOR_OFFSET))(this);
		}
	};
}
