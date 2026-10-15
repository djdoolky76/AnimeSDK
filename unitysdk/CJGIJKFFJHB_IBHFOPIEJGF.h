#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJGIJKFFJHB_IPDOAMDPPCN.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BNLKJLFCLOI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CJGIJKFFJHB_IBHFOPIEJGF_CTOR_OFFSET UNITYSDK_OFFSET(0xD2015B0)
#define CJGIJKFFJHB_IBHFOPIEJGF_FPEOFFGAGLD_OFFSET UNITYSDK_OFFSET(0xD202B70)
#define CJGIJKFFJHB_IBHFOPIEJGF_JJKJMILPNJF_OFFSET UNITYSDK_OFFSET(0xD2031A0)
#define CJGIJKFFJHB_IBHFOPIEJGF_MEEOOCELIAH_OFFSET UNITYSDK_OFFSET(0xD2020E0)
#define CJGIJKFFJHB_IBHFOPIEJGF_ONDRAG_OFFSET UNITYSDK_OFFSET(0xD201CF0)
#define CJGIJKFFJHB_IBHFOPIEJGF_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xD203E90)
#define CJGIJKFFJHB_IBHFOPIEJGF_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0xD202F10)
#define CJGIJKFFJHB_IBHFOPIEJGF_ONEXTEND_OFFSET UNITYSDK_OFFSET(0xD202C70)
#define CJGIJKFFJHB_IBHFOPIEJGF_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0xD203E50)
#define CJGIJKFFJHB_IBHFOPIEJGF_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0xD203C30)

inline static constexpr unsigned int CJGIJKFFJHB_IBHFOPIEJGF_TypeDefinitionIndex = 62363;

	class CJGIJKFFJHB_IBHFOPIEJGF : public ::CJGIJKFFJHB_IPDOAMDPPCN
	{
	public:
		::UnityEngine::Vector2Int JHNNDDADNKD; // 0x20
		::System::Void _ctor(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IBHFOPIEJGF_CTOR_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IBHFOPIEJGF_ONDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IBHFOPIEJGF_ONEXTEND_OFFSET))(this, a1);
		}

		::System::Void OnExtendEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IBHFOPIEJGF_ONEXTENDEND_OFFSET))(this);
		}

		::System::Void OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IBHFOPIEJGF_ONSHORTEN_OFFSET))(this, a1);
		}

		::System::Void OnShortenEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IBHFOPIEJGF_ONSHORTENEND_OFFSET))(this);
		}

		::System::Void OnEndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IBHFOPIEJGF_ONENDDRAG_OFFSET))(this);
		}

		::System::Void FPEOFFGAGLD(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IBHFOPIEJGF_FPEOFFGAGLD_OFFSET))(this, a1);
		}

		::System::Single JJKJMILPNJF(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IBHFOPIEJGF_JJKJMILPNJF_OFFSET))(this, a1);
		}

		::System::Single MEEOOCELIAH(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IBHFOPIEJGF_MEEOOCELIAH_OFFSET))(this, a1);
		}

	};
