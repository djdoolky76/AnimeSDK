#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CLFIGBPHLHI;
class OCCJKPBJPMH;
namespace UnityEngine { class Transform; }

#define OCCJKPBJPMH_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xBD59D10)
#define OCCJKPBJPMH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBD59C60)
#define OCCJKPBJPMH_CLONE_OFFSET UNITYSDK_OFFSET(0xBD5A030)
#define OCCJKPBJPMH_CTOR_OFFSET UNITYSDK_OFFSET(0xBD59EA0)
#define OCCJKPBJPMH_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0xBD59EC0)
#define OCCJKPBJPMH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBD5A100)
#define OCCJKPBJPMH_REVERSE_OFFSET UNITYSDK_OFFSET(0xBD5A090)
#define OCCJKPBJPMH_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xBD59F80)

	class OCCJKPBJPMH : public ::MOGBNBGMIHF
	{
	public:
		::UnityEngine::Vector3 JGBKIJNKAII; // 0x38
		::UnityEngine::Vector3 GJNGHBKNPIG; // 0x44
		::UnityEngine::Vector3 PKFMKJHMFDH; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCJKPBJPMH_CTOR_OFFSET))(this);
		}

		static ::OCCJKPBJPMH* BPLPBPMEODA(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::OCCJKPBJPMH*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OCCJKPBJPMH_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		static ::OCCJKPBJPMH* BPLPBPMEODA_1(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::OCCJKPBJPMH*(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OCCJKPBJPMH_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OCCJKPBJPMH_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OCCJKPBJPMH_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCJKPBJPMH_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCJKPBJPMH_REVERSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCCJKPBJPMH_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
