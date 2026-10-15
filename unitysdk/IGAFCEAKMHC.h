#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IGAFCEAKMHC;
namespace UnityEngine { class Transform; }

#define IGAFCEAKMHC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x163F0D30)
#define IGAFCEAKMHC_CTOR_OFFSET UNITYSDK_OFFSET(0x163F0E70)
#define IGAFCEAKMHC_GMJINEJMCOJ_OFFSET UNITYSDK_OFFSET(0x163F1550)
#define IGAFCEAKMHC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x163F0E90)
#define IGAFCEAKMHC_NOPOJIHPJHO_OFFSET UNITYSDK_OFFSET(0x163F1130)
#define IGAFCEAKMHC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x163F1370)
#define IGAFCEAKMHC_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x163F12B0)

	class IGAFCEAKMHC : public ::MOGBNBGMIHF
	{
	public:
		::UnityEngine::Vector3 PKFMKJHMFDH; // 0x38
		::System::Single AKPGDFOEEKP; // 0x44
		::System::Single DMBLHAAJMDF; // 0x48
		::UnityEngine::Vector3 GJNGHBKNPIG; // 0x4C
		::System::Single EPLBKHOKDLG; // 0x58
		::System::Single FKCIBFBHGIL; // 0x5C
		::UnityEngine::Vector3 ICABBADGANM; // 0x60
		::UnityEngine::Vector3 JGBKIJNKAII; // 0x6C
		// static const ::System::Object CDJIHHDDKPO; // 0x0
		// static const ::System::Object FMHEPOFHFKG; // 0x0
		// static const ::System::Object ANEBCHDJPKA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGAFCEAKMHC_CTOR_OFFSET))(this);
		}

		static ::IGAFCEAKMHC* BPLPBPMEODA(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::IGAFCEAKMHC*(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IGAFCEAKMHC_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean KPJGDHLENIP(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IGAFCEAKMHC_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IGAFCEAKMHC_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IGAFCEAKMHC_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		static ::System::Single NOPOJIHPJHO(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IGAFCEAKMHC_NOPOJIHPJHO_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GMJINEJMCOJ(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IGAFCEAKMHC_GMJINEJMCOJ_OFFSET))(a1, a2, a3);
		}

	};
