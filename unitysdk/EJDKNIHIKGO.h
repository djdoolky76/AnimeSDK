#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BNLKJLFCLOI;
class EJDKNIHIKGO;
class JGCCJFJPPPG;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define EJDKNIHIKGO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x154D81E0)
#define EJDKNIHIKGO_CFINKMFANFE_OFFSET UNITYSDK_OFFSET(0x154D83F0)
#define EJDKNIHIKGO_CTOR_OFFSET UNITYSDK_OFFSET(0x154D8260)
#define EJDKNIHIKGO_FMPJJHKCNGG_OFFSET UNITYSDK_OFFSET(0x154D82C0)
#define EJDKNIHIKGO_HCLHNCAMGHL_OFFSET UNITYSDK_OFFSET(0x154D8270)
#define EJDKNIHIKGO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x154D8450)
#define EJDKNIHIKGO_NNJHMGPKBPF_OFFSET UNITYSDK_OFFSET(0x154D8320)

inline static constexpr unsigned int EJDKNIHIKGO_TypeDefinitionIndex = 62376;

	class EJDKNIHIKGO : public ::System::Object
	{
	public:
		::JGCCJFJPPPG* APBKPGMCPLI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDKNIHIKGO_CTOR_OFFSET))(this);
		}

		static ::EJDKNIHIKGO* BPLPBPMEODA(::JGCCJFJPPPG* a1)
		{
			return ((::EJDKNIHIKGO*(*)(::JGCCJFJPPPG*))((::PBYTE)hIl2Cpp + EJDKNIHIKGO_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HCLHNCAMGHL(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + EJDKNIHIKGO_HCLHNCAMGHL_OFFSET))(this, a1);
		}

		::System::Void FMPJJHKCNGG(::BNLKJLFCLOI* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + EJDKNIHIKGO_FMPJJHKCNGG_OFFSET))(this, a1, a2);
		}

		::System::Void CFINKMFANFE(::BNLKJLFCLOI* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + EJDKNIHIKGO_CFINKMFANFE_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDKNIHIKGO_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void NNJHMGPKBPF(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + EJDKNIHIKGO_NNJHMGPKBPF_OFFSET))(this, a1);
		}

	};
