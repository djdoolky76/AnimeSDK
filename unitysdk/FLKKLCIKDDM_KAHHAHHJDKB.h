#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FLKKLCIKDDM_KAHHAHHJDKB_PNNMNMBAICF_OFFSET UNITYSDK_OFFSET(0x13228210)
#define FLKKLCIKDDM_KAHHAHHJDKB__CTOR_OFFSET UNITYSDK_OFFSET(0x13228200)

inline static constexpr unsigned int FLKKLCIKDDM_KAHHAHHJDKB_TypeDefinitionIndex = 85028;

class FLKKLCIKDDM_KAHHAHHJDKB : public ::System::Object
{
public:
	::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* EJGDHCIBCJH; // 0x10
	::UnityEngine::GameObject* KGHNKJJNCMO; // 0x18
	::Foundation::AssetPath ABOMFKBGCAJ; // 0x20
	::System::Collections::Generic::List_1<::Foundation::AssetPath>* JIFNFNAPKBO; // 0x30
	::System::Boolean ACEFMHAALEI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKKLCIKDDM_KAHHAHHJDKB__CTOR_OFFSET))(this);
	}

	::System::Void PNNMNMBAICF(::Foundation::AssetPath CJBJONJDOLI, ::UnityEngine::GameObject* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FLKKLCIKDDM_KAHHAHHJDKB_PNNMNMBAICF_OFFSET))(this, CJBJONJDOLI, ECMMKCJLBMD);
	}
};
