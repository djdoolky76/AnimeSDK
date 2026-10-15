#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define DFOAEBGJJJG_COFKMAJKGOL_CTOR_OFFSET UNITYSDK_OFFSET(0xE828B70)

inline static constexpr unsigned int DFOAEBGJJJG_COFKMAJKGOL_TypeDefinitionIndex = 76716;

	class DFOAEBGJJJG_COFKMAJKGOL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* LNALMDKMCND; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* FIKPCIDLEOD; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* BMBFPDLIDIC; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>*>* FNBFGFKAKLM; // 0x28
		::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>* HNLIKBGLLAK; // 0x30
		::System::Boolean HNBFBCHJHFL; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAEBGJJJG_COFKMAJKGOL_CTOR_OFFSET))(this);
		}

	};
