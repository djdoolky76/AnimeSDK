#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CFIJCMGJBAB_HOKOGPCJHHF_HIIOADHEHFI_OFFSET UNITYSDK_OFFSET(0x13257E40)
#define CFIJCMGJBAB_HOKOGPCJHHF__CTOR_OFFSET UNITYSDK_OFFSET(0x13257E30)

inline static constexpr unsigned int CFIJCMGJBAB_HOKOGPCJHHF_TypeDefinitionIndex = 61036;

class CFIJCMGJBAB_HOKOGPCJHHF : public ::System::Object
{
public:
	::UnityEngine::GameObject* GENFJNEPKEA; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_HOKOGPCJHHF__CTOR_OFFSET))(this);
	}

	::System::Void HIIOADHEHFI(::System::Collections::Generic::List_1<::Foundation::AssetPath>* JIFNFNAPKBO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_HOKOGPCJHHF_HIIOADHEHFI_OFFSET))(this, JIFNFNAPKBO);
	}
};
