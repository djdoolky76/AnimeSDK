#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define TMPRO_TMP_INPUTVALIDATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x19BBB460)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputValidator_TypeDefinitionIndex = 45683;

	class TMP_InputValidator : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTVALIDATOR_CTOR_OFFSET))(this);
		}

	};
}
