#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace Cinemachine { class CinemachineImpulseDefinition; }

#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_EE90C4902BD7CE35_B3687600B28D32D5_OFFSET UNITYSDK_OFFSET(0x2A78B90)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_EE90C4902BD7CE35_B657F4FB7B49D376_OFFSET UNITYSDK_OFFSET(0x2A79020)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_EE90C4902BD7CE35__CTOR_OFFSET UNITYSDK_OFFSET(0x2A78F70)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseDefinition_EE90C4902BD7CE35_TypeDefinitionIndex = 18406;

	class CinemachineImpulseDefinition_EE90C4902BD7CE35 : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineImpulseDefinition* F22C5F04834A0A45; // 0x10
		::UnityEngine::Vector3 E137172C19FB2798; // 0x18
		::System::Single F5B37785DA57C862; // 0x24

		::System::Void _ctor(::Cinemachine::CinemachineImpulseDefinition* FBABE030F0470058, ::UnityEngine::Vector3 E53F9540C727B4AB)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineImpulseDefinition*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_EE90C4902BD7CE35__CTOR_OFFSET))(this, FBABE030F0470058, E53F9540C727B4AB);
		}

		::System::Single B657F4FB7B49D376()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_EE90C4902BD7CE35_B657F4FB7B49D376_OFFSET))(this);
		}

		::System::Void B3687600B28D32D5(::System::Single A44C7CA1093EC858, ::UnityEngine::Vector3& A0C1F1E95D5F6CA9, ::UnityEngine::Quaternion& FBF9C1F5AF32571D)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_EE90C4902BD7CE35_B3687600B28D32D5_OFFSET))(this, A44C7CA1093EC858, A0C1F1E95D5F6CA9, FBF9C1F5AF32571D);
		}
	};
}
