#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MHDBCOLPEDF_GBNJNLGJMGJ.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define MHDBCOLPEDF_ALMHPKHFPPI_OFFSET UNITYSDK_OFFSET(0xB92A420)
#define MHDBCOLPEDF_BALHFHLBLPA_OFFSET UNITYSDK_OFFSET(0xB92C560)
#define MHDBCOLPEDF_BOHJLMADOMF_OFFSET UNITYSDK_OFFSET(0xB92B090)
#define MHDBCOLPEDF_GMBBMMFAJGE_OFFSET UNITYSDK_OFFSET(0xB92AB10)
#define MHDBCOLPEDF_HPNGFLEFKEL_OFFSET UNITYSDK_OFFSET(0xB92B100)
#define MHDBCOLPEDF_IHGLLMBBABJ_OFFSET UNITYSDK_OFFSET(0xB92BEF0)
#define MHDBCOLPEDF_MEIMHFNPMDM_OFFSET UNITYSDK_OFFSET(0xB92A550)
#define MHDBCOLPEDF_OCPEOPNNGNH_OFFSET UNITYSDK_OFFSET(0xB92BE60)

inline static constexpr unsigned int MHDBCOLPEDF_TypeDefinitionIndex = 59779;

	class MHDBCOLPEDF : public ::System::Object
	{
	public:
		// static const ::System::Object NOFKMCGOFMF; // 0x0
		// static const ::System::Object HLCKOECNFEC; // 0x0
		// static const ::System::Object BJADFMJFMFC; // 0x0
		// static const ::System::Object IACKBHEPKPD; // 0x0
		static ::System::Single ALMHPKHFPPI(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MHDBCOLPEDF_ALMHPKHFPPI_OFFSET))(a1, a2, a3);
		}

		static ::MHDBCOLPEDF_GBNJNLGJMGJ MEIMHFNPMDM(::UnityEngine::Transform* a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::System::Boolean a7, ::System::Int32 a8)
		{
			return ((::MHDBCOLPEDF_GBNJNLGJMGJ(*)(::UnityEngine::Transform*, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MHDBCOLPEDF_MEIMHFNPMDM_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::UnityEngine::Quaternion HPNGFLEFKEL(::UnityEngine::Transform* a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::MHDBCOLPEDF_GBNJNLGJMGJ a7)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Transform*, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::MHDBCOLPEDF_GBNJNLGJMGJ))((::PBYTE)hIl2Cpp + MHDBCOLPEDF_HPNGFLEFKEL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean GMBBMMFAJGE(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MHDBCOLPEDF_GMBBMMFAJGE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single BOHJLMADOMF(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MHDBCOLPEDF_BOHJLMADOMF_OFFSET))(a1);
		}

		static ::System::Single OCPEOPNNGNH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MHDBCOLPEDF_OCPEOPNNGNH_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 IHGLLMBBABJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Boolean a5, ::System::Int32 a6)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MHDBCOLPEDF_IHGLLMBBABJ_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Single BALHFHLBLPA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MHDBCOLPEDF_BALHFHLBLPA_OFFSET))(a1, a2);
		}

	};
