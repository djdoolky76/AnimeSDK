#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHOHDKDIJI.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CLFIGBPHLHI;
class FOEAJCKLNKO;
namespace UnityEngine { class Transform; }

#define FOEAJCKLNKO_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x158E5980)
#define FOEAJCKLNKO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x158E58D0)
#define FOEAJCKLNKO_CLONE_OFFSET UNITYSDK_OFFSET(0x158E5D40)
#define FOEAJCKLNKO_CTOR_OFFSET UNITYSDK_OFFSET(0x158E5B00)
#define FOEAJCKLNKO_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0x158E5B20)
#define FOEAJCKLNKO_REVERSE_OFFSET UNITYSDK_OFFSET(0x158E5DB0)
#define FOEAJCKLNKO_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x158E5BE0)

inline static constexpr unsigned int FOEAJCKLNKO_TypeDefinitionIndex = 73528;

	class FOEAJCKLNKO : public ::DOHOHDKDIJI
	{
	public:
		::UnityEngine::Vector3 HHMKIEGCIOG; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEAJCKLNKO_CTOR_OFFSET))(this);
		}

		static ::FOEAJCKLNKO* BPLPBPMEODA(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::FOEAJCKLNKO*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOEAJCKLNKO_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		static ::FOEAJCKLNKO* BPLPBPMEODA_1(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::FOEAJCKLNKO*(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOEAJCKLNKO_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOEAJCKLNKO_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOEAJCKLNKO_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEAJCKLNKO_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEAJCKLNKO_REVERSE_OFFSET))(this);
		}

	};
