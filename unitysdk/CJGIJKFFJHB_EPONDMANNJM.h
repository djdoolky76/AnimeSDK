#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJGIJKFFJHB_IPDOAMDPPCN.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BNLKJLFCLOI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CJGIJKFFJHB_EPONDMANNJM_CTOR_OFFSET UNITYSDK_OFFSET(0xD2087A0)
#define CJGIJKFFJHB_EPONDMANNJM_ONDRAG_OFFSET UNITYSDK_OFFSET(0xD208CE0)
#define CJGIJKFFJHB_EPONDMANNJM_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0xD208DE0)
#define CJGIJKFFJHB_EPONDMANNJM_ONEXTEND_OFFSET UNITYSDK_OFFSET(0xD208D80)
#define CJGIJKFFJHB_EPONDMANNJM_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0xD208EA0)
#define CJGIJKFFJHB_EPONDMANNJM_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0xD208E30)

inline static constexpr unsigned int CJGIJKFFJHB_EPONDMANNJM_TypeDefinitionIndex = 62364;

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
