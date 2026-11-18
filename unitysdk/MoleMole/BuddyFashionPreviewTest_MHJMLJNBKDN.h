#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_BUDDYFASHIONPREVIEWTEST_MHJMLJNBKDN_DODEECEGADE_OFFSET UNITYSDK_OFFSET(0x127571D0)
#define MOLEMOLE_BUDDYFASHIONPREVIEWTEST_MHJMLJNBKDN__CTOR_OFFSET UNITYSDK_OFFSET(0x127571C0)

namespace MoleMole
{
	inline static constexpr unsigned int BuddyFashionPreviewTest_MHJMLJNBKDN_TypeDefinitionIndex = 58354;

	class BuddyFashionPreviewTest_MHJMLJNBKDN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* OMDNEKJFILO; // 0x10
		::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>* EJGDHCIBCJH; // 0x18
		::System::Int32 OKFOIAINHHK; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPREVIEWTEST_MHJMLJNBKDN__CTOR_OFFSET))(this);
		}

		::System::Void DODEECEGADE(::Foundation::AssetPath OJEPEOOBPAM, ::UnityEngine::GameObject* ECMMKCJLBMD)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPREVIEWTEST_MHJMLJNBKDN_DODEECEGADE_OFFSET))(this, OJEPEOOBPAM, ECMMKCJLBMD);
		}
	};
}
