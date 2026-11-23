#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Cinemachine { class CinemachineComponentBase; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ECC8ACF62EBE547E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ECC8ACF62EBE547E__CTOR_OFFSET UNITYSDK_OFFSET(0x2A5D620)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCamera_ECC8ACF62EBE547E_TypeDefinitionIndex = 18379;

	class CinemachineVirtualCamera_ECC8ACF62EBE547E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ECC8ACF62EBE547E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::UnityEngine::Transform* Invoke(::Cinemachine::CinemachineVirtualCamera* E4C30FC54E27903D, ::System::String* F79B4D487F303AB2, ::Il2CppArray<::Cinemachine::CinemachineComponentBase*>* BFE2F60193CF5F8A)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::System::String*, ::Il2CppArray<::Cinemachine::CinemachineComponentBase*>*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ECC8ACF62EBE547E_INVOKE_OFFSET))(this, E4C30FC54E27903D, F79B4D487F303AB2, BFE2F60193CF5F8A);
		}
	};
}
