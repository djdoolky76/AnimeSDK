#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define KOKBOIBHIMK__CTOR_OFFSET UNITYSDK_OFFSET(0xD410A30)

inline static constexpr unsigned int KOKBOIBHIMK_TypeDefinitionIndex = 79233;

class KOKBOIBHIMK : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::Vector3>* KFMEAFIHAEH; // 0x10
	::System::Action_1<::UnityEngine::GameObject*>* AIJKIFIEKFJ; // 0x18
	::System::Action_1<::UnityEngine::Vector3>* JHCILKIBENN; // 0x20
	::System::Action_1<::UnityEngine::Vector3>* GNECIJPKDNM; // 0x28
	::System::Action_1<::UnityEngine::Vector3>* AKHNKMNBMPG; // 0x30
	::System::Action_1<::System::Single>* DMEHNFMEJBC; // 0x38
	::System::Action_1<::UnityEngine::Vector3>* NEELNOGFEKB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKBOIBHIMK__CTOR_OFFSET))(this);
	}
};
