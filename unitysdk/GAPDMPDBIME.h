#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
class CLFIGBPHLHI;
class GAPDMPDBIME;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Slider; }

#define GAPDMPDBIME_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15944530)
#define GAPDMPDBIME_CLONE_OFFSET UNITYSDK_OFFSET(0x159448A0)
#define GAPDMPDBIME_CTOR_OFFSET UNITYSDK_OFFSET(0x15944680)
#define GAPDMPDBIME_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0x159446A0)
#define GAPDMPDBIME_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15944950)
#define GAPDMPDBIME_REVERSE_OFFSET UNITYSDK_OFFSET(0x159448F0)
#define GAPDMPDBIME_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x15944750)

	class GAPDMPDBIME : public ::MOGBNBGMIHF
	{
	public:
		::UnityEngine::UI::Slider* DDAINBPMMJE; // 0x38
		::System::Single EGADJONKOFL; // 0x40
		::System::Single FMEBFPPJFJG; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPDMPDBIME_CTOR_OFFSET))(this);
		}

		static ::GAPDMPDBIME* BPLPBPMEODA(::System::Single a1, ::System::Single a2)
		{
			return ((::GAPDMPDBIME*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GAPDMPDBIME_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GAPDMPDBIME_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GAPDMPDBIME_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPDMPDBIME_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPDMPDBIME_REVERSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GAPDMPDBIME_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
