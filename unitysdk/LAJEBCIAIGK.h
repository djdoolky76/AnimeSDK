#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHJDEAEBHGA.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CLFIGBPHLHI;
class KNBEDHIFIEE;
class LAJEBCIAIGK;
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define LAJEBCIAIGK_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xB5E5020)
#define LAJEBCIAIGK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB5E4F50)
#define LAJEBCIAIGK_CLONE_OFFSET UNITYSDK_OFFSET(0xB5E52E0)
#define LAJEBCIAIGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E4F20)
#define LAJEBCIAIGK_KFPIIOKMALE_OFFSET UNITYSDK_OFFSET(0xB5E5530)
#define LAJEBCIAIGK_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0xB5E51D0)
#define LAJEBCIAIGK_REVERSE_OFFSET UNITYSDK_OFFSET(0xB5E5350)
#define LAJEBCIAIGK_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xB5E5290)

	class LAJEBCIAIGK : public ::GHJDEAEBHGA
	{
	public:
		::UnityEngine::Vector3 LGEEPOKOMFB; // 0x48
		::System::Void _ctor(::KNBEDHIFIEE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KNBEDHIFIEE*, ::System::UInt32))((::PBYTE)hIl2Cpp + LAJEBCIAIGK_CTOR_OFFSET))(this, a1, a2);
		}

		static ::LAJEBCIAIGK* BPLPBPMEODA(::KNBEDHIFIEE* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::LAJEBCIAIGK*(*)(::KNBEDHIFIEE*, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LAJEBCIAIGK_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::LAJEBCIAIGK* BPLPBPMEODA_1(::KNBEDHIFIEE* a1, ::System::UInt32 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::LAJEBCIAIGK*(*)(::KNBEDHIFIEE*, ::System::UInt32, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LAJEBCIAIGK_BPLPBPMEODA_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LAJEBCIAIGK_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LAJEBCIAIGK_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJEBCIAIGK_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJEBCIAIGK_REVERSE_OFFSET))(this);
		}

		::System::Void KFPIIOKMALE(::System::Single a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + LAJEBCIAIGK_KFPIIOKMALE_OFFSET))(this, a1, a2);
		}

	};
