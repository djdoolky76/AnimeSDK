#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineOrbitalTransposer; }
namespace System { class Object; }

#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FEE88E77940CCDB7_INVOKE_OFFSET UNITYSDK_OFFSET(0x2A438C0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FEE88E77940CCDB7__CTOR_OFFSET UNITYSDK_OFFSET(0x2A43900)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineOrbitalTransposer_FEE88E77940CCDB7_TypeDefinitionIndex = 18328;

	class CinemachineOrbitalTransposer_FEE88E77940CCDB7 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FEE88E77940CCDB7__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Single Invoke(::Cinemachine::CinemachineOrbitalTransposer* AF1C07501FAA2365, ::System::Single EB5670302F34D4B7, ::UnityEngine::Vector3 BE38C169EB1E684C)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FEE88E77940CCDB7_INVOKE_OFFSET))(this, AF1C07501FAA2365, EB5670302F34D4B7, BE38C169EB1E684C);
		}
	};
}
