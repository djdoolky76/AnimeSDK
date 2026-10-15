#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LAJCPEFEOPN;

#define HGGJJOGGCFG_IEFOEEAHGLD_CTOR_OFFSET UNITYSDK_OFFSET(0x15C9E820)

inline static constexpr unsigned int HGGJJOGGCFG_IEFOEEAHGLD_TypeDefinitionIndex = 69337;

	class HGGJJOGGCFG_IEFOEEAHGLD : public ::System::Object
	{
	public:
		::LAJCPEFEOPN* IGPNICLDPOM; // 0x10
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x18
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x24
		::System::Single HLNAPBECHME; // 0x30
		::System::Single DJIMDMILKHB; // 0x34
		::System::Void _ctor(::LAJCPEFEOPN* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + HGGJJOGGCFG_IEFOEEAHGLD_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
