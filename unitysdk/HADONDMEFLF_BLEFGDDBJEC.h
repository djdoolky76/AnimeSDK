#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define HADONDMEFLF_BLEFGDDBJEC__CTOR_OFFSET UNITYSDK_OFFSET(0x14D09320)

inline static constexpr unsigned int HADONDMEFLF_BLEFGDDBJEC_TypeDefinitionIndex = 73227;

class HADONDMEFLF_BLEFGDDBJEC : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>* EJGDHCIBCJH; // 0x10
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* OMDNEKJFILO; // 0x18
	::UnityEngine::Transform* JNLBPMKIFNK; // 0x20
	::System::Boolean ACEFMHAALEI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HADONDMEFLF_BLEFGDDBJEC__CTOR_OFFSET))(this);
	}
};
