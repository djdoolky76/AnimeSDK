#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
class CLFIGBPHLHI;
class FHFNEHJCJKK;
class LEEEMFAEDLN;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define FHFNEHJCJKK_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x1577BA00)
#define FHFNEHJCJKK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1577B570)
#define FHFNEHJCJKK_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0x1577C550)
#define FHFNEHJCJKK_CLONE_OFFSET UNITYSDK_OFFSET(0x1577BB30)
#define FHFNEHJCJKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1577B7C0)
#define FHFNEHJCJKK_DKHAJOKKDJG_OFFSET UNITYSDK_OFFSET(0x1577B6C0)
#define FHFNEHJCJKK_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x1577C180)
#define FHFNEHJCJKK_IBLIGIKPGNC_OFFSET UNITYSDK_OFFSET(0x1577B850)
#define FHFNEHJCJKK_ISDONE_OFFSET UNITYSDK_OFFSET(0x1577C400)
#define FHFNEHJCJKK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1577C280)
#define FHFNEHJCJKK_REVERSE_OFFSET UNITYSDK_OFFSET(0x1577BE50)
#define FHFNEHJCJKK_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x1577C0D0)
#define FHFNEHJCJKK_STEP_OFFSET UNITYSDK_OFFSET(0x1577C7A0)

	class FHFNEHJCJKK : public ::MOGBNBGMIHF
	{
	public:
		::Il2CppArray<::LEEEMFAEDLN*>* OAODDDPDNNM; // 0x38
		::System::Int32 KCFPFKNIBDG; // 0x40
		::System::Int32 HCKBMDGMKOO; // 0x44
		::System::Single KPLGBODPBBM; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFNEHJCJKK_CTOR_OFFSET))(this);
		}

		static ::FHFNEHJCJKK* BPLPBPMEODA(::LEEEMFAEDLN* a1, ::Il2CppArray<::LEEEMFAEDLN*>* a2)
		{
			return ((::FHFNEHJCJKK*(*)(::LEEEMFAEDLN*, ::Il2CppArray<::LEEEMFAEDLN*>*))((::PBYTE)hIl2Cpp + FHFNEHJCJKK_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::FHFNEHJCJKK* DKHAJOKKDJG(::LEEEMFAEDLN* a1, ::LEEEMFAEDLN* a2)
		{
			return ((::FHFNEHJCJKK*(*)(::LEEEMFAEDLN*, ::LEEEMFAEDLN*))((::PBYTE)hIl2Cpp + FHFNEHJCJKK_DKHAJOKKDJG_OFFSET))(a1, a2);
		}

		static ::FHFNEHJCJKK* BPLPBPMEODA_1(::System::Collections::Generic::List_1<::LEEEMFAEDLN*>* a1)
		{
			return ((::FHFNEHJCJKK*(*)(::System::Collections::Generic::List_1<::LEEEMFAEDLN*>*))((::PBYTE)hIl2Cpp + FHFNEHJCJKK_BPLPBPMEODA_1_OFFSET))(a1);
		}

		::System::Boolean IBLIGIKPGNC(::LEEEMFAEDLN* a1, ::LEEEMFAEDLN* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEEEMFAEDLN*, ::LEEEMFAEDLN*))((::PBYTE)hIl2Cpp + FHFNEHJCJKK_IBLIGIKPGNC_OFFSET))(this, a1, a2);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFNEHJCJKK_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFNEHJCJKK_REVERSE_OFFSET))(this);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FHFNEHJCJKK_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFNEHJCJKK_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFNEHJCJKK_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFNEHJCJKK_ISDONE_OFFSET))(this);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFNEHJCJKK_CIHFGJDCHIA_OFFSET))(this);
		}

		::System::Void Step(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHFNEHJCJKK_STEP_OFFSET))(this, a1);
		}

	};
