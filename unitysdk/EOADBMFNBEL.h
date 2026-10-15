#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CLFIGBPHLHI;
class EOADBMFNBEL;
namespace UnityEngine { class Transform; }

#define EOADBMFNBEL_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x155B84D0)
#define EOADBMFNBEL_BPLPBPMEODA_2_OFFSET UNITYSDK_OFFSET(0x155B8350)
#define EOADBMFNBEL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x155B82A0)
#define EOADBMFNBEL_CLONE_OFFSET UNITYSDK_OFFSET(0x155B8BF0)
#define EOADBMFNBEL_CTOR_OFFSET UNITYSDK_OFFSET(0x155B8640)
#define EOADBMFNBEL_GNDDHAKCDNM_OFFSET UNITYSDK_OFFSET(0x155B8720)
#define EOADBMFNBEL_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0x155B8660)
#define EOADBMFNBEL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x155B8CC0)
#define EOADBMFNBEL_REVERSE_OFFSET UNITYSDK_OFFSET(0x155B8C50)
#define EOADBMFNBEL_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x155B8810)

inline static constexpr unsigned int EOADBMFNBEL_TypeDefinitionIndex = 73526;

	class EOADBMFNBEL : public ::MOGBNBGMIHF
	{
	public:
		::UnityEngine::Vector3 JOJNMKAMNGJ; // 0x38
		::System::Boolean KGHPHGEDKLE; // 0x44
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 GMBKGAPNOFA; // 0x48
		::UnityEngine::Vector3 HDKDHGBLCGG; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOADBMFNBEL_CTOR_OFFSET))(this);
		}

		static ::EOADBMFNBEL* BPLPBPMEODA(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::EOADBMFNBEL*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EOADBMFNBEL_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		static ::EOADBMFNBEL* BPLPBPMEODA_1(::System::Single a1, ::System::Single a2)
		{
			return ((::EOADBMFNBEL*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EOADBMFNBEL_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

		static ::EOADBMFNBEL* BPLPBPMEODA_2(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::EOADBMFNBEL*(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EOADBMFNBEL_BPLPBPMEODA_2_OFFSET))(a1, a2);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EOADBMFNBEL_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		::System::Void GNDDHAKCDNM(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EOADBMFNBEL_GNDDHAKCDNM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EOADBMFNBEL_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOADBMFNBEL_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOADBMFNBEL_REVERSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EOADBMFNBEL_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
