#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Cinemachine { class CinemachineOrbitalTransposer; }
namespace Cinemachine { class CinemachineOrbitalTransposer_UpdateHeadingDelegate; }
namespace System { class Object; }

#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16688910)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16688940)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C___CTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x16688950)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineOrbitalTransposer___c_TypeDefinitionIndex = 39785;

	class CinemachineOrbitalTransposer___c : public ::System::Object
	{
	public:
		static ::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate** StaticGet___9__36_0()
		{
			return (::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate**)UnitySDK::FromName("Cinemachine", "<>c")->GetStaticField(0x523F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cinemachine", "<>c")->GetStaticField(0x523F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C_CTOR_OFFSET))(this);
		}

		::System::Single __ctor_b__36_0(::Cinemachine::CinemachineOrbitalTransposer* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C___CTOR_B__36_0_OFFSET))(this, a1, a2, a3);
		}

	};
}
