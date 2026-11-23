#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineOrbitalTransposer; }
namespace Cinemachine { class CinemachineOrbitalTransposer_FEE88E77940CCDB7; }

#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_F5628F8349D4A8A6_FBA7E8DB4AB9F0E4_OFFSET UNITYSDK_OFFSET(0x2A436B0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2A43850)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineOrbitalTransposer_F5628F8349D4A8A6_TypeDefinitionIndex = 18329;

	class CinemachineOrbitalTransposer_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::Cinemachine::CinemachineOrbitalTransposer_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::Cinemachine::CinemachineOrbitalTransposer_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(CinemachineOrbitalTransposer_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Cinemachine::CinemachineOrbitalTransposer_FEE88E77940CCDB7** StaticGet_F343E8F0EA5266E6()
		{
			return (::Cinemachine::CinemachineOrbitalTransposer_FEE88E77940CCDB7**)Il2CppClass::FromTypeDefinitionIndex(CinemachineOrbitalTransposer_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Single FBA7E8DB4AB9F0E4(::Cinemachine::CinemachineOrbitalTransposer* AF1C07501FAA2365, ::System::Single EB5670302F34D4B7, ::UnityEngine::Vector3 BE38C169EB1E684C)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_F5628F8349D4A8A6_FBA7E8DB4AB9F0E4_OFFSET))(this, AF1C07501FAA2365, EB5670302F34D4B7, BE38C169EB1E684C);
		}
	};
}
