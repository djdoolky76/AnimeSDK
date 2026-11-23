#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Cinemachine { class CinemachineFreeLook; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Object; }
namespace System { class String; }

#define CINEMACHINE_CINEMACHINEFREELOOK_AC53B47E24AC3B16_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define CINEMACHINE_CINEMACHINEFREELOOK_AC53B47E24AC3B16__CTOR_OFFSET UNITYSDK_OFFSET(0x2A5D620)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFreeLook_AC53B47E24AC3B16_TypeDefinitionIndex = 18386;

	class CinemachineFreeLook_AC53B47E24AC3B16 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_AC53B47E24AC3B16__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::Cinemachine::CinemachineVirtualCamera* Invoke(::Cinemachine::CinemachineFreeLook* E4C30FC54E27903D, ::System::String* F79B4D487F303AB2, ::Cinemachine::CinemachineVirtualCamera* BFE2F60193CF5F8A)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::Cinemachine::CinemachineFreeLook*, ::System::String*, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_AC53B47E24AC3B16_INVOKE_OFFSET))(this, E4C30FC54E27903D, F79B4D487F303AB2, BFE2F60193CF5F8A);
		}
	};
}
