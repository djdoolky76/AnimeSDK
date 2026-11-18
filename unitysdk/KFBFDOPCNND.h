#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define KFBFDOPCNND__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F2300)

inline static constexpr unsigned int KFBFDOPCNND_TypeDefinitionIndex = 91595;

class KFBFDOPCNND : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction* PCBMBPNLHPL; // 0x10
	::System::String* MJJNIIDGPJK; // 0x18
	::System::Int32 OPDFANHNJCM; // 0x20
	::System::Int32 EJFGMAHJMHK; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBFDOPCNND__CTOR_OFFSET))(this);
	}
};
