#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCCJKPBJPMH.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CLFIGBPHLHI;
class FPNADIEDNHI;
namespace UnityEngine { class Transform; }

#define FPNADIEDNHI_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x159158C0)
#define FPNADIEDNHI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15915810)
#define FPNADIEDNHI_CLONE_OFFSET UNITYSDK_OFFSET(0x15915C80)
#define FPNADIEDNHI_CTOR_OFFSET UNITYSDK_OFFSET(0x15915A40)
#define FPNADIEDNHI_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0x15915A60)
#define FPNADIEDNHI_REVERSE_OFFSET UNITYSDK_OFFSET(0x15915CF0)
#define FPNADIEDNHI_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x15915B20)

inline static constexpr unsigned int FPNADIEDNHI_TypeDefinitionIndex = 73520;

	class FPNADIEDNHI : public ::OCCJKPBJPMH
	{
	public:
		::UnityEngine::Vector3 ICABBADGANM; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNADIEDNHI_CTOR_OFFSET))(this);
		}

		static ::FPNADIEDNHI* BPLPBPMEODA(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::FPNADIEDNHI*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FPNADIEDNHI_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		static ::FPNADIEDNHI* BPLPBPMEODA_1(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::FPNADIEDNHI*(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FPNADIEDNHI_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FPNADIEDNHI_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FPNADIEDNHI_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNADIEDNHI_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNADIEDNHI_REVERSE_OFFSET))(this);
		}

	};
