#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CLFIGBPHLHI;
class DOHOHDKDIJI;
namespace UnityEngine { class Transform; }

#define DOHOHDKDIJI_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x11FE8FE0)
#define DOHOHDKDIJI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x11FE8F30)
#define DOHOHDKDIJI_CLONE_OFFSET UNITYSDK_OFFSET(0x11FE92F0)
#define DOHOHDKDIJI_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE9160)
#define DOHOHDKDIJI_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0x11FE9180)
#define DOHOHDKDIJI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x11FE93C0)
#define DOHOHDKDIJI_REVERSE_OFFSET UNITYSDK_OFFSET(0x11FE9350)
#define DOHOHDKDIJI_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x11FE9240)

inline static constexpr unsigned int DOHOHDKDIJI_TypeDefinitionIndex = 73527;

	class DOHOHDKDIJI : public ::MOGBNBGMIHF
	{
	public:
		::UnityEngine::Vector3 PIEKBFODNOE; // 0x38
		::UnityEngine::Vector3 KLLBBEKNJPI; // 0x44
		::UnityEngine::Vector3 OAIBEFPCJNF; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHOHDKDIJI_CTOR_OFFSET))(this);
		}

		static ::DOHOHDKDIJI* BPLPBPMEODA(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::DOHOHDKDIJI*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DOHOHDKDIJI_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		static ::DOHOHDKDIJI* BPLPBPMEODA_1(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::DOHOHDKDIJI*(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DOHOHDKDIJI_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DOHOHDKDIJI_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DOHOHDKDIJI_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHOHDKDIJI_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHOHDKDIJI_REVERSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOHOHDKDIJI_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
