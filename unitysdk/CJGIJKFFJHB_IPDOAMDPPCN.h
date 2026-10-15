#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BNLKJLFCLOI;
class CJGIJKFFJHB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CJGIJKFFJHB_IPDOAMDPPCN_CTOR_OFFSET UNITYSDK_OFFSET(0xD201AD0)
#define CJGIJKFFJHB_IPDOAMDPPCN_ENTER_OFFSET UNITYSDK_OFFSET(0xD204240)
#define CJGIJKFFJHB_IPDOAMDPPCN_EXIT_OFFSET UNITYSDK_OFFSET(0xD2042E0)
#define CJGIJKFFJHB_IPDOAMDPPCN_ONDRAG_OFFSET UNITYSDK_OFFSET(0xD204440)
#define CJGIJKFFJHB_IPDOAMDPPCN_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xD2044A0)
#define CJGIJKFFJHB_IPDOAMDPPCN_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0xD204370)
#define CJGIJKFFJHB_IPDOAMDPPCN_ONEXTEND_OFFSET UNITYSDK_OFFSET(0xD204320)
#define CJGIJKFFJHB_IPDOAMDPPCN_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0xD204400)
#define CJGIJKFFJHB_IPDOAMDPPCN_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0xD2043B0)
#define CJGIJKFFJHB_IPDOAMDPPCN_TICK_OFFSET UNITYSDK_OFFSET(0xD204290)

inline static constexpr unsigned int CJGIJKFFJHB_IPDOAMDPPCN_TypeDefinitionIndex = 62365;

	class CJGIJKFFJHB_IPDOAMDPPCN : public ::System::Object
	{
	public:
		::CJGIJKFFJHB* CFKHNPGEAJA; // 0x10
		::BNLKJLFCLOI* PLBDJHIFGOI; // 0x18
		::System::Void _ctor(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IPDOAMDPPCN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Enter(::CJGIJKFFJHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJGIJKFFJHB*))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IPDOAMDPPCN_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::CJGIJKFFJHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJGIJKFFJHB*))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IPDOAMDPPCN_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IPDOAMDPPCN_EXIT_OFFSET))(this);
		}

		::System::Void OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IPDOAMDPPCN_ONEXTEND_OFFSET))(this, a1);
		}

		::System::Void OnExtendEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IPDOAMDPPCN_ONEXTENDEND_OFFSET))(this);
		}

		::System::Void OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IPDOAMDPPCN_ONSHORTEN_OFFSET))(this, a1);
		}

		::System::Void OnShortenEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IPDOAMDPPCN_ONSHORTENEND_OFFSET))(this);
		}

		::System::Void OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IPDOAMDPPCN_ONDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void OnEndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGIJKFFJHB_IPDOAMDPPCN_ONENDDRAG_OFFSET))(this);
		}

	};
