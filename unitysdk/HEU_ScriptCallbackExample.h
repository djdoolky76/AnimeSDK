#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define HEU_SCRIPTCALLBACKEXAMPLE_A0FA699AD37F3690_OFFSET UNITYSDK_OFFSET(0x37FECD0)
#define HEU_SCRIPTCALLBACKEXAMPLE_F288610B6D97D8D2_OFFSET UNITYSDK_OFFSET(0x37FEC70)
#define HEU_SCRIPTCALLBACKEXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int HEU_ScriptCallbackExample_TypeDefinitionIndex = 17856;

class HEU_ScriptCallbackExample : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* _msg; // 0x20

	::System::Void A0FA699AD37F3690(::System::String* B6018BB9F7294B44)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEU_SCRIPTCALLBACKEXAMPLE_A0FA699AD37F3690_OFFSET))(this, B6018BB9F7294B44);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_SCRIPTCALLBACKEXAMPLE__CTOR_OFFSET))(this);
	}

	::System::Void F288610B6D97D8D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_SCRIPTCALLBACKEXAMPLE_F288610B6D97D8D2_OFFSET))(this);
	}
};
