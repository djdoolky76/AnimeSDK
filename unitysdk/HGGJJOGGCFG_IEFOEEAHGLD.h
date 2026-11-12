#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LAJCPEFEOPN;

#define HGGJJOGGCFG_IEFOEEAHGLD_CTOR_OFFSET UNITYSDK_OFFSET(0x16BE8A70)

inline static constexpr unsigned int HGGJJOGGCFG_IEFOEEAHGLD_TypeDefinitionIndex = 71291;

	class HGGJJOGGCFG_IEFOEEAHGLD : public ::System::Object
	{
	public:
		::LAJCPEFEOPN* IGPNICLDPOM; // 0x10
		::System::Single DJIMDMILKHB; // 0x18
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x1C
		::System::Single HLNAPBECHME; // 0x28
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x2C
		::System::Void _ctor(::LAJCPEFEOPN* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + HGGJJOGGCFG_IEFOEEAHGLD_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
