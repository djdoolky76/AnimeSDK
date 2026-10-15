#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
class CLFIGBPHLHI;
class HJDFEBPACJI;
namespace UnityEngine { class Transform; }

#define HJDFEBPACJI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15D0A2E0)
#define HJDFEBPACJI_CLONE_OFFSET UNITYSDK_OFFSET(0x15D0A5F0)
#define HJDFEBPACJI_CTOR_OFFSET UNITYSDK_OFFSET(0x15D0A410)
#define HJDFEBPACJI_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x15D0A560)
#define HJDFEBPACJI_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0x15D0A430)
#define HJDFEBPACJI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15D0A690)
#define HJDFEBPACJI_REVERSE_OFFSET UNITYSDK_OFFSET(0x15D0A640)
#define HJDFEBPACJI_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x15D0A4E0)

	class HJDFEBPACJI : public ::MOGBNBGMIHF
	{
	public:
		::System::Int32 BJMFKLEGLGO; // 0x38
		::System::Boolean GDLJBCBBOOC; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDFEBPACJI_CTOR_OFFSET))(this);
		}

		static ::HJDFEBPACJI* BPLPBPMEODA(::System::Single a1, ::System::Int32 a2)
		{
			return ((::HJDFEBPACJI*(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + HJDFEBPACJI_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + HJDFEBPACJI_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HJDFEBPACJI_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDFEBPACJI_HFKFNFKIEON_OFFSET))(this);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDFEBPACJI_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDFEBPACJI_REVERSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJDFEBPACJI_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
