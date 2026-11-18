#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::MonoEffectContrllerModule { class PerlinNoiseConfig; }

#define GCFEDDFHGLD_KOMDPPNEEPG_OFFSET UNITYSDK_OFFSET(0x179D04C0)
#define GCFEDDFHGLD__CTOR_OFFSET UNITYSDK_OFFSET(0x179D04B0)

inline static constexpr unsigned int GCFEDDFHGLD_TypeDefinitionIndex = 88994;

class GCFEDDFHGLD : public ::System::Object
{
public:
	::MoleMole::MonoEffectContrllerModule::PerlinNoiseConfig* AHMFPFACACD; // 0x10
	::UnityEngine::Vector3 ELAKFGHKIJE; // 0x18
	::System::Int32 EHJLOIDJHCK; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFEDDFHGLD__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 KOMDPPNEEPG(::UnityEngine::Vector3 JCJDKCLCKKH, ::System::Single FNIOPKPHDEH, ::System::Single KNMJFKILLDF)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GCFEDDFHGLD_KOMDPPNEEPG_OFFSET))(this, JCJDKCLCKKH, FNIOPKPHDEH, KNMJFKILLDF);
	}
};
