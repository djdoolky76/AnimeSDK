#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HADONDMEFLF_HOIDBGDAPDC_DDNGMLEPPGP_OFFSET UNITYSDK_OFFSET(0x16CDDA20)
#define HADONDMEFLF_HOIDBGDAPDC__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDDA10)

inline static constexpr unsigned int HADONDMEFLF_HOIDBGDAPDC_TypeDefinitionIndex = 73226;

class HADONDMEFLF_HOIDBGDAPDC : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::Foundation::AssetPath>*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HADONDMEFLF_HOIDBGDAPDC__CTOR_OFFSET))(this);
	}

	::System::Void DDNGMLEPPGP(::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* MIFAEPOAJFH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HADONDMEFLF_HOIDBGDAPDC_DDNGMLEPPGP_OFFSET))(this, MIFAEPOAJFH);
	}
};
