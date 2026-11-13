#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJGIJKFFJHB_IPDOAMDPPCN.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BNLKJLFCLOI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CJGIJKFFJHB_EPONDMANNJM_CTOR_OFFSET UNITYSDK_OFFSET(0x177CC8B0)
#define CJGIJKFFJHB_EPONDMANNJM_ONDRAG_OFFSET UNITYSDK_OFFSET(0x177CCDF0)
#define CJGIJKFFJHB_EPONDMANNJM_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0x177CCEF0)
#define CJGIJKFFJHB_EPONDMANNJM_ONEXTEND_OFFSET UNITYSDK_OFFSET(0x177CCE90)
#define CJGIJKFFJHB_EPONDMANNJM_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0x177CCFB0)
#define CJGIJKFFJHB_EPONDMANNJM_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0x177CCF40)

inline static constexpr unsigned int CJGIJKFFJHB_EPONDMANNJM_TypeDefinitionIndex = 63777;

	class CJGIJKFFJHB_EPONDMANNJM : public ::CJGIJKFFJHB_IPDOAMDPPCN
	{
	public:
		::System::Void _ctor(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_EPONDMANNJM_CTOR_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_EPONDMANNJM_ONDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_EPONDMANNJM_ONEXTEND_OFFSET))(this, a1);
		}

		::System::Void OnExtendEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_EPONDMANNJM_ONEXTENDEND_OFFSET))(this);
		}

		::System::Void OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_EPONDMANNJM_ONSHORTEN_OFFSET))(this, a1);
		}

		::System::Void OnShortenEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_EPONDMANNJM_ONSHORTENEND_OFFSET))(this);
		}

	};
