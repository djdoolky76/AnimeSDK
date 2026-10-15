#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BNLKJLFCLOI;
class KJEMAKFJELN;
class LGDGPIPEMFE;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define KJEMAKFJELN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB448B20)
#define KJEMAKFJELN_CFINKMFANFE_OFFSET UNITYSDK_OFFSET(0xB448CA0)
#define KJEMAKFJELN_CHAEBJKHMBG_OFFSET UNITYSDK_OFFSET(0xB448BA0)
#define KJEMAKFJELN_CTOR_OFFSET UNITYSDK_OFFSET(0xB448B90)
#define KJEMAKFJELN_FMPJJHKCNGG_OFFSET UNITYSDK_OFFSET(0xB448C40)
#define KJEMAKFJELN_HCLHNCAMGHL_OFFSET UNITYSDK_OFFSET(0xB448BF0)
#define KJEMAKFJELN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB448D00)

	class KJEMAKFJELN : public ::System::Object
	{
	public:
		::LGDGPIPEMFE* PFGGLDPMOPO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEMAKFJELN_CTOR_OFFSET))(this);
		}

		static ::KJEMAKFJELN* BPLPBPMEODA()
		{
			return ((::KJEMAKFJELN*(*)())((::PBYTE)hIl2Cpp + KJEMAKFJELN_BPLPBPMEODA_OFFSET))();
		}

		::System::Void CHAEBJKHMBG(::LGDGPIPEMFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGDGPIPEMFE*))((::PBYTE)hIl2Cpp + KJEMAKFJELN_CHAEBJKHMBG_OFFSET))(this, a1);
		}

		::System::Void HCLHNCAMGHL(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + KJEMAKFJELN_HCLHNCAMGHL_OFFSET))(this, a1);
		}

		::System::Void FMPJJHKCNGG(::BNLKJLFCLOI* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + KJEMAKFJELN_FMPJJHKCNGG_OFFSET))(this, a1, a2);
		}

		::System::Void CFINKMFANFE(::BNLKJLFCLOI* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + KJEMAKFJELN_CFINKMFANFE_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEMAKFJELN_KHGIKBFDLFB_OFFSET))(this);
		}

	};
