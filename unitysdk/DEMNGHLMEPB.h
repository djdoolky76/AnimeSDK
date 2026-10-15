#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BNLKJLFCLOI;
class DEMNGHLMEPB;
class JGCCJFJPPPG;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEMNGHLMEPB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE51A950)
#define DEMNGHLMEPB_CFINKMFANFE_OFFSET UNITYSDK_OFFSET(0xE51AF20)
#define DEMNGHLMEPB_CTOR_OFFSET UNITYSDK_OFFSET(0xE51A9D0)
#define DEMNGHLMEPB_FMPJJHKCNGG_OFFSET UNITYSDK_OFFSET(0xE51AA30)
#define DEMNGHLMEPB_HCLHNCAMGHL_OFFSET UNITYSDK_OFFSET(0xE51A9E0)
#define DEMNGHLMEPB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xE51B410)

inline static constexpr unsigned int DEMNGHLMEPB_TypeDefinitionIndex = 62375;

	class DEMNGHLMEPB : public ::System::Object
	{
	public:
		::JGCCJFJPPPG* APBKPGMCPLI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMNGHLMEPB_CTOR_OFFSET))(this);
		}

		static ::DEMNGHLMEPB* BPLPBPMEODA(::JGCCJFJPPPG* a1)
		{
			return ((::DEMNGHLMEPB*(*)(::JGCCJFJPPPG*))((::PBYTE)hIl2Cpp + DEMNGHLMEPB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HCLHNCAMGHL(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + DEMNGHLMEPB_HCLHNCAMGHL_OFFSET))(this, a1);
		}

		::System::Void FMPJJHKCNGG(::BNLKJLFCLOI* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + DEMNGHLMEPB_FMPJJHKCNGG_OFFSET))(this, a1, a2);
		}

		::System::Void CFINKMFANFE(::BNLKJLFCLOI* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + DEMNGHLMEPB_CFINKMFANFE_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMNGHLMEPB_KHGIKBFDLFB_OFFSET))(this);
		}

	};
