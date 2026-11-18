#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define BLECLHEMLIC_LKIEMNPALBE_COLJEBLBGNM_OFFSET UNITYSDK_OFFSET(0x169F9D00)
#define BLECLHEMLIC_LKIEMNPALBE__CTOR_OFFSET UNITYSDK_OFFSET(0x169F9CF0)

inline static constexpr unsigned int BLECLHEMLIC_LKIEMNPALBE_TypeDefinitionIndex = 80828;

class BLECLHEMLIC_LKIEMNPALBE : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::GameObject*>* OIJODELMLHI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLECLHEMLIC_LKIEMNPALBE__CTOR_OFFSET))(this);
	}

	::System::Void COLJEBLBGNM(::UnityEngine::GameObject* PAAOJEMGCFJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BLECLHEMLIC_LKIEMNPALBE_COLJEBLBGNM_OFFSET))(this, PAAOJEMGCFJ);
	}
};
