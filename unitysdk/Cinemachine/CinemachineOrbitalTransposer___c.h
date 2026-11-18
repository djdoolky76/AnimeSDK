#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineOrbitalTransposer; }
namespace Cinemachine { class CinemachineOrbitalTransposer_UpdateHeadingDelegate; }

#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAD7F10)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD7F50)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C___CTOR_B__34_0_OFFSET UNITYSDK_OFFSET(0x1FAD7F60)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineOrbitalTransposer___c_TypeDefinitionIndex = 34258;

	class CinemachineOrbitalTransposer___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CinemachineOrbitalTransposer___c_TypeDefinitionIndex)->GetStaticField(0x2A1F0);
		}
		static ::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate** StaticGet___9__34_0()
		{
			return (::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineOrbitalTransposer___c_TypeDefinitionIndex)->GetStaticField(0x2A1F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C__CTOR_OFFSET))(this);
		}

		::System::Single __ctor_b__34_0(::Cinemachine::CinemachineOrbitalTransposer* orbital, ::System::Single deltaTime, ::UnityEngine::Vector3 up)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C___CTOR_B__34_0_OFFSET))(this, orbital, deltaTime, up);
		}
	};
}
