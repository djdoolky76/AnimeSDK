#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BNLKJLFCLOI;
class JGCCJFJPPPG;
class PJIGOBCPCFC;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define PJIGOBCPCFC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC28B3B0)
#define PJIGOBCPCFC_CFINKMFANFE_OFFSET UNITYSDK_OFFSET(0xC28B570)
#define PJIGOBCPCFC_CTOR_OFFSET UNITYSDK_OFFSET(0xC28B430)
#define PJIGOBCPCFC_FMPJJHKCNGG_OFFSET UNITYSDK_OFFSET(0xC28B490)
#define PJIGOBCPCFC_FOKCGLKFHKE_OFFSET UNITYSDK_OFFSET(0xC28B520)
#define PJIGOBCPCFC_HCLHNCAMGHL_OFFSET UNITYSDK_OFFSET(0xC28B440)
#define PJIGOBCPCFC_JCNBCPLELKF_OFFSET UNITYSDK_OFFSET(0xC28B640)
#define PJIGOBCPCFC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC28B600)

	class PJIGOBCPCFC : public ::System::Object
	{
	public:
		::JGCCJFJPPPG* APBKPGMCPLI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIGOBCPCFC_CTOR_OFFSET))(this);
		}

		static ::PJIGOBCPCFC* BPLPBPMEODA(::JGCCJFJPPPG* a1)
		{
			return ((::PJIGOBCPCFC*(*)(::JGCCJFJPPPG*))((::PBYTE)hIl2Cpp + PJIGOBCPCFC_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HCLHNCAMGHL(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + PJIGOBCPCFC_HCLHNCAMGHL_OFFSET))(this, a1);
		}

		::System::Void FMPJJHKCNGG(::BNLKJLFCLOI* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + PJIGOBCPCFC_FMPJJHKCNGG_OFFSET))(this, a1, a2);
		}

		::System::Void CFINKMFANFE(::BNLKJLFCLOI* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + PJIGOBCPCFC_CFINKMFANFE_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIGOBCPCFC_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void FOKCGLKFHKE(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + PJIGOBCPCFC_FOKCGLKFHKE_OFFSET))(this, a1);
		}

		::System::Void JCNBCPLELKF(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + PJIGOBCPCFC_JCNBCPLELKF_OFFSET))(this, a1);
		}

	};
