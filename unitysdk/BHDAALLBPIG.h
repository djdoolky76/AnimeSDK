#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJCABDDEGOE_MeasureAction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BHDAALLBPIG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHDAALLBPIG_AIPHNDLOLEN_OFFSET UNITYSDK_OFFSET(0x151E1F90)
#define BHDAALLBPIG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x151E1D40)
#define BHDAALLBPIG_CTOR_OFFSET UNITYSDK_OFFSET(0x151E1E30)
#define BHDAALLBPIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x151E1E40)

inline static constexpr unsigned int BHDAALLBPIG_TypeDefinitionIndex = 63729;

	class BHDAALLBPIG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* PKIJJKHMPDO; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* GBKKLJAOLEP; // 0x18
		::UnityEngine::Vector2 HGLFBAAHBFB; // 0x20
		::MJCABDDEGOE_MeasureAction JCHFCNFHCMM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDAALLBPIG_CTOR_OFFSET))(this);
		}

		static ::BHDAALLBPIG* BPLPBPMEODA(::MJCABDDEGOE_MeasureAction a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a2, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a3, ::UnityEngine::Vector2 a4)
		{
			return ((::BHDAALLBPIG*(*)(::MJCABDDEGOE_MeasureAction, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BHDAALLBPIG_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDAALLBPIG_TOSTRING_OFFSET))(this);
		}

		::System::String* AIPHNDLOLEN(::MJCABDDEGOE_MeasureAction a1)
		{
			return ((::System::String*(*)(::PVOID, ::MJCABDDEGOE_MeasureAction))((::PBYTE)hIl2Cpp + BHDAALLBPIG_AIPHNDLOLEN_OFFSET))(this, a1);
		}

	};
