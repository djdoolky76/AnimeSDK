#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BUDDYFASHIONPREVIEWTEST_ACHLOIALEFC_OFFSET UNITYSDK_OFFSET(0x1921C240)
#define MOLEMOLE_BUDDYFASHIONPREVIEWTEST_CREATEBUDDYPARTSASYNC_OFFSET UNITYSDK_OFFSET(0x1921B810)
#define MOLEMOLE_BUDDYFASHIONPREVIEWTEST_GCDJKFCOJIO_OFFSET UNITYSDK_OFFSET(0x1921BC40)
#define MOLEMOLE_BUDDYFASHIONPREVIEWTEST_PREVIEWFASHION_OFFSET UNITYSDK_OFFSET(0x1921B5F0)
#define MOLEMOLE_BUDDYFASHIONPREVIEWTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1921BAB0)

namespace MoleMole
{
	inline static constexpr unsigned int BuddyFashionPreviewTest_TypeDefinitionIndex = 58353;

	class BuddyFashionPreviewTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* partPaths; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* parts; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPREVIEWTEST__CTOR_OFFSET))(this);
		}

		::System::Void PreviewFashion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPREVIEWTEST_PREVIEWFASHION_OFFSET))(this);
		}

		::System::Void CreateBuddyPartsAsync(::System::Collections::Generic::List_1<::Foundation::AssetPath>* JIFNFNAPKBO, ::UnityEngine::Transform* JNLBPMKIFNK, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::UnityEngine::Transform*, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPREVIEWTEST_CREATEBUDDYPARTSASYNC_OFFSET))(this, JIFNFNAPKBO, JNLBPMKIFNK, EJGDHCIBCJH);
		}

		::System::Void GCDJKFCOJIO(::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* AJMHPLBGDLJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPREVIEWTEST_GCDJKFCOJIO_OFFSET))(this, AJMHPLBGDLJ);
		}

		::System::Void ACHLOIALEFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPREVIEWTEST_ACHLOIALEFC_OFFSET))(this);
		}
	};
}
