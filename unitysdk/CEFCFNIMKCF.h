#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CGRuntimeUnitLoadType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CEFCFNIMKCF__CTOR_OFFSET UNITYSDK_OFFSET(0x115398B0)

inline static constexpr unsigned int CEFCFNIMKCF_TypeDefinitionIndex = 88054;

class CEFCFNIMKCF : public ::System::Object
{
public:
	::System::String* GNPCDDHMACB; // 0x10
	::UnityEngine::GameObject* GHCHJIHPLAJ; // 0x18
	::System::Int32 JKHHNEJEFEB; // 0x20
	::System::Int32 CEAIFEDJNLI; // 0x24
	::MoleMole::CGRuntimeUnitLoadType PHKALMIAHIE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFCFNIMKCF__CTOR_OFFSET))(this);
	}
};
