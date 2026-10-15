#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFIGBPHLHI.h"
class LEEEMFAEDLN;
class NJJKJBDLBHC;
namespace UnityEngine { class Transform; }

#define NJJKJBDLBHC_AANAPJIAFEH_OFFSET UNITYSDK_OFFSET(0xBC19A30)
#define NJJKJBDLBHC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC19A50)
#define NJJKJBDLBHC_CTOR_OFFSET UNITYSDK_OFFSET(0xBC19B90)
#define NJJKJBDLBHC_EBHLHNDLBHI_OFFSET UNITYSDK_OFFSET(0xBC19A40)
#define NJJKJBDLBHC_EJLDDHIMBEM_OFFSET UNITYSDK_OFFSET(0xBC19BB0)
#define NJJKJBDLBHC_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xBC19DE0)
#define NJJKJBDLBHC_HIAEBCGCGHA_OFFSET UNITYSDK_OFFSET(0xBC19A10)
#define NJJKJBDLBHC_ISDONE_OFFSET UNITYSDK_OFFSET(0xBC19EC0)
#define NJJKJBDLBHC_POPMHMGOMNG_OFFSET UNITYSDK_OFFSET(0xBC19A20)
#define NJJKJBDLBHC_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xBC19C50)
#define NJJKJBDLBHC_STEP_OFFSET UNITYSDK_OFFSET(0xBC19F90)

	class NJJKJBDLBHC : public ::CLFIGBPHLHI
	{
	public:
		::LEEEMFAEDLN* GKMOAFJIKEA; // 0x28
		::System::Single HNBFIBEMJAO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJKJBDLBHC_CTOR_OFFSET))(this);
		}

		::System::Single HIAEBCGCGHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJKJBDLBHC_HIAEBCGCGHA_OFFSET))(this);
		}

		::System::Void POPMHMGOMNG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJJKJBDLBHC_POPMHMGOMNG_OFFSET))(this, a1);
		}

		::LEEEMFAEDLN* AANAPJIAFEH()
		{
			return ((::LEEEMFAEDLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJKJBDLBHC_AANAPJIAFEH_OFFSET))(this);
		}

		::System::Void EBHLHNDLBHI(::LEEEMFAEDLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEEEMFAEDLN*))((::PBYTE)hIl2Cpp + NJJKJBDLBHC_EBHLHNDLBHI_OFFSET))(this, a1);
		}

		static ::NJJKJBDLBHC* BPLPBPMEODA(::LEEEMFAEDLN* a1, ::System::Single a2)
		{
			return ((::NJJKJBDLBHC*(*)(::LEEEMFAEDLN*, ::System::Single))((::PBYTE)hIl2Cpp + NJJKJBDLBHC_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean EJLDDHIMBEM(::LEEEMFAEDLN* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEEEMFAEDLN*, ::System::Single))((::PBYTE)hIl2Cpp + NJJKJBDLBHC_EJLDDHIMBEM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NJJKJBDLBHC_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJKJBDLBHC_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJKJBDLBHC_ISDONE_OFFSET))(this);
		}

		::System::Void Step(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJJKJBDLBHC_STEP_OFFSET))(this, a1);
		}

	};
