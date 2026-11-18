#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define HADONDMEFLF_JJPBJDPLONM_OFFSET UNITYSDK_OFFSET(0x14923060)
#define HADONDMEFLF_KCNJKGGGEGJ_OFFSET UNITYSDK_OFFSET(0x14922C60)
#define HADONDMEFLF_ONFIOHEJAKG_OFFSET UNITYSDK_OFFSET(0x14922D10)

inline static constexpr unsigned int HADONDMEFLF_TypeDefinitionIndex = 73225;

class HADONDMEFLF : public ::System::Object
{
public:
	static ::System::Void KCNJKGGGEGJ(::Foundation::AssetPath OIIHCACKLHD, ::UnityEngine::GameObject* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HADONDMEFLF_KCNJKGGGEGJ_OFFSET))(OIIHCACKLHD, ECMMKCJLBMD);
	}

	static ::System::Void ONFIOHEJAKG(::UnityEngine::GameObject* FCKJKENCECF, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* JIFNFNAPKBO, ::System::Action_1<::System::Collections::Generic::List_1<::Foundation::AssetPath>*>* EJGDHCIBCJH, ::System::Boolean EBAJLMBGMFE)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::System::Action_1<::System::Collections::Generic::List_1<::Foundation::AssetPath>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HADONDMEFLF_ONFIOHEJAKG_OFFSET))(FCKJKENCECF, JIFNFNAPKBO, EJGDHCIBCJH, EBAJLMBGMFE);
	}

	static ::System::Void JJPBJDPLONM(::System::Collections::Generic::List_1<::Foundation::AssetPath>* JIFNFNAPKBO, ::UnityEngine::Transform* JNLBPMKIFNK, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>* EJGDHCIBCJH, ::System::Boolean ACEFMHAALEI, ::System::Boolean EBAJLMBGMFE)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::UnityEngine::Transform*, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HADONDMEFLF_JJPBJDPLONM_OFFSET))(JIFNFNAPKBO, JNLBPMKIFNK, EJGDHCIBCJH, ACEFMHAALEI, EBAJLMBGMFE);
	}
};
