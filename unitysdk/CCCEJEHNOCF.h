#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BNLKJLFCLOI;
class FPJLEDBPBKE;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCCEJEHNOCF_CFINKMFANFE_OFFSET UNITYSDK_OFFSET(0xC7370B0)
#define CCCEJEHNOCF_CTOR_OFFSET UNITYSDK_OFFSET(0xC7374D0)
#define CCCEJEHNOCF_FDHAKHPOGLD_OFFSET UNITYSDK_OFFSET(0xC736B80)
#define CCCEJEHNOCF_FMPJJHKCNGG_OFFSET UNITYSDK_OFFSET(0xC736E90)
#define CCCEJEHNOCF_HCLHNCAMGHL_OFFSET UNITYSDK_OFFSET(0xC736C60)
#define CCCEJEHNOCF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC7372D0)

inline static constexpr unsigned int CCCEJEHNOCF_TypeDefinitionIndex = 62378;

	class CCCEJEHNOCF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FPJLEDBPBKE*>* PDENFEFCAGN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCEJEHNOCF_CTOR_OFFSET))(this);
		}

		::System::Void FDHAKHPOGLD(::FPJLEDBPBKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPJLEDBPBKE*))((::PBYTE)hIl2Cpp + CCCEJEHNOCF_FDHAKHPOGLD_OFFSET))(this, a1);
		}

		::System::Void HCLHNCAMGHL(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + CCCEJEHNOCF_HCLHNCAMGHL_OFFSET))(this, a1);
		}

		::System::Void FMPJJHKCNGG(::BNLKJLFCLOI* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CCCEJEHNOCF_FMPJJHKCNGG_OFFSET))(this, a1, a2);
		}

		::System::Void CFINKMFANFE(::BNLKJLFCLOI* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CCCEJEHNOCF_CFINKMFANFE_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCEJEHNOCF_KHGIKBFDLFB_OFFSET))(this);
		}

	};
