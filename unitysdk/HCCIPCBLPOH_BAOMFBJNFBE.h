#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define HCCIPCBLPOH_BAOMFBJNFBE_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x17E342C0)
#define HCCIPCBLPOH_BAOMFBJNFBE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E34360)

inline static constexpr unsigned int HCCIPCBLPOH_BAOMFBJNFBE_TypeDefinitionIndex = 77925;

class HCCIPCBLPOH_BAOMFBJNFBE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCIPCBLPOH_BAOMFBJNFBE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* IHJFAALPNJE)
	{
		return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + HCCIPCBLPOH_BAOMFBJNFBE_STARTCOROUTINE_OFFSET))(this, IHJFAALPNJE);
	}
};
