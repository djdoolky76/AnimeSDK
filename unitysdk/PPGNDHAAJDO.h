#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
#include "unitysdk/PBFICKNEGLB.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CLFIGBPHLHI;
class PPGNDHAAJDO;
namespace UnityEngine { class Transform; }

#define PPGNDHAAJDO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC385F70)
#define PPGNDHAAJDO_CTOR_OFFSET UNITYSDK_OFFSET(0xC386130)
#define PPGNDHAAJDO_EMEOKNOKEIA_OFFSET UNITYSDK_OFFSET(0xC3866B0)
#define PPGNDHAAJDO_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0xC386150)
#define PPGNDHAAJDO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC386390)
#define PPGNDHAAJDO_REVERSE_OFFSET UNITYSDK_OFFSET(0xC3862D0)
#define PPGNDHAAJDO_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xC386220)

	class PPGNDHAAJDO : public ::MOGBNBGMIHF
	{
	public:
		::UnityEngine::Vector3 GJNGHBKNPIG; // 0x38
		::UnityEngine::Vector3 PKFMKJHMFDH; // 0x44
		::PBFICKNEGLB OELDCBCPOKF; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGNDHAAJDO_CTOR_OFFSET))(this);
		}

		static ::PPGNDHAAJDO* BPLPBPMEODA(::System::Single a1, ::PBFICKNEGLB a2)
		{
			return ((::PPGNDHAAJDO*(*)(::System::Single, ::PBFICKNEGLB))((::PBYTE)hIl2Cpp + PPGNDHAAJDO_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::PBFICKNEGLB a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::PBFICKNEGLB))((::PBYTE)hIl2Cpp + PPGNDHAAJDO_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PPGNDHAAJDO_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGNDHAAJDO_REVERSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPGNDHAAJDO_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		static ::System::Single EMEOKNOKEIA(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PPGNDHAAJDO_EMEOKNOKEIA_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
