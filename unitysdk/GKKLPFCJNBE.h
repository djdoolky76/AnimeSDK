#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CLFIGBPHLHI;
class GKKLPFCJNBE;
namespace UnityEngine { class Transform; }

#define GKKLPFCJNBE_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x15AA07E0)
#define GKKLPFCJNBE_BPLPBPMEODA_2_OFFSET UNITYSDK_OFFSET(0x15AA0660)
#define GKKLPFCJNBE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15AA05B0)
#define GKKLPFCJNBE_CICKCKGHGBM_OFFSET UNITYSDK_OFFSET(0x15AA0A30)
#define GKKLPFCJNBE_CLONE_OFFSET UNITYSDK_OFFSET(0x15AA0EE0)
#define GKKLPFCJNBE_CTOR_OFFSET UNITYSDK_OFFSET(0x15AA0950)
#define GKKLPFCJNBE_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0x15AA0970)
#define GKKLPFCJNBE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15AA0FB0)
#define GKKLPFCJNBE_REVERSE_OFFSET UNITYSDK_OFFSET(0x15AA0F40)
#define GKKLPFCJNBE_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x15AA0B10)

inline static constexpr unsigned int GKKLPFCJNBE_TypeDefinitionIndex = 73524;

	class GKKLPFCJNBE : public ::MOGBNBGMIHF
	{
	public:
		::UnityEngine::Vector3 GMBKGAPNOFA; // 0x38
		::System::Boolean KGHPHGEDKLE; // 0x44
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 HDKDHGBLCGG; // 0x48
		::UnityEngine::Vector3 JOJNMKAMNGJ; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKLPFCJNBE_CTOR_OFFSET))(this);
		}

		static ::GKKLPFCJNBE* BPLPBPMEODA(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::GKKLPFCJNBE*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GKKLPFCJNBE_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		static ::GKKLPFCJNBE* BPLPBPMEODA_1(::System::Single a1, ::System::Single a2)
		{
			return ((::GKKLPFCJNBE*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GKKLPFCJNBE_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

		static ::GKKLPFCJNBE* BPLPBPMEODA_2(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::GKKLPFCJNBE*(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GKKLPFCJNBE_BPLPBPMEODA_2_OFFSET))(a1, a2);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GKKLPFCJNBE_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		static ::System::Void CICKCKGHGBM(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GKKLPFCJNBE_CICKCKGHGBM_OFFSET))(a1, a2, a3);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GKKLPFCJNBE_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKLPFCJNBE_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKLPFCJNBE_REVERSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKKLPFCJNBE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
