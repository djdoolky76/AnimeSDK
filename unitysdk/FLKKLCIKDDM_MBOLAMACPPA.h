#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class FLKKLCIKDDM_KAHHAHHJDKB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define FLKKLCIKDDM_MBOLAMACPPA_NPHFMHNPOFG_OFFSET UNITYSDK_OFFSET(0x1410C0C0)
#define FLKKLCIKDDM_MBOLAMACPPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1410C0B0)

inline static constexpr unsigned int FLKKLCIKDDM_MBOLAMACPPA_TypeDefinitionIndex = 85029;

class FLKKLCIKDDM_MBOLAMACPPA : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::UnityEngine::GameObject* ECMMKCJLBMD; // 0x20
	::FLKKLCIKDDM_KAHHAHHJDKB* FGBNBFHOKAA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKKLCIKDDM_MBOLAMACPPA__CTOR_OFFSET))(this);
	}

	::System::Void NPHFMHNPOFG(::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* MIFAEPOAJFH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FLKKLCIKDDM_MBOLAMACPPA_NPHFMHNPOFG_OFFSET))(this, MIFAEPOAJFH);
	}
};
