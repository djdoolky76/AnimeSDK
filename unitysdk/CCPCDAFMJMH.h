#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CCPCDAFMJMH;
class CLFIGBPHLHI;
namespace UnityEngine { class Transform; }

#define CCPCDAFMJMH_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xC751FC0)
#define CCPCDAFMJMH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC751F10)
#define CCPCDAFMJMH_CLONE_OFFSET UNITYSDK_OFFSET(0xC752380)
#define CCPCDAFMJMH_CTOR_OFFSET UNITYSDK_OFFSET(0xC752140)
#define CCPCDAFMJMH_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0xC752160)
#define CCPCDAFMJMH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC752450)
#define CCPCDAFMJMH_REVERSE_OFFSET UNITYSDK_OFFSET(0xC7523E0)
#define CCPCDAFMJMH_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xC752220)

	class CCPCDAFMJMH : public ::MOGBNBGMIHF
	{
	public:
		::UnityEngine::Vector3 AJMFEHGFKNF; // 0x38
		::UnityEngine::Vector3 MMLBGFOKLCB; // 0x44
		::UnityEngine::Vector3 KICIGEMOJKB; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCDAFMJMH_CTOR_OFFSET))(this);
		}

		static ::CCPCDAFMJMH* BPLPBPMEODA(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::CCPCDAFMJMH*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CCPCDAFMJMH_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		static ::CCPCDAFMJMH* BPLPBPMEODA_1(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::CCPCDAFMJMH*(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CCPCDAFMJMH_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CCPCDAFMJMH_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CCPCDAFMJMH_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCDAFMJMH_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCDAFMJMH_REVERSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCPCDAFMJMH_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
