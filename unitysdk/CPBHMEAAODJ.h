#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CPBHMEAAODJ_EMHLBOHEBCI_OFFSET UNITYSDK_OFFSET(0x193EBE70)
#define CPBHMEAAODJ_KPIEEEGIHLI_OFFSET UNITYSDK_OFFSET(0x193EBF20)
#define CPBHMEAAODJ_OGJEPKFKDNJ_OFFSET UNITYSDK_OFFSET(0x193EC250)
#define CPBHMEAAODJ__CTOR_OFFSET UNITYSDK_OFFSET(0x193EBE60)

inline static constexpr unsigned int CPBHMEAAODJ_TypeDefinitionIndex = 54033;

class CPBHMEAAODJ : public ::System::Object
{
public:
	::UnityEngine::Renderer* IEBPHKDAGBB; // 0x10
	::Il2CppArray<::UnityEngine::Material*>* IFFLJBNHJME; // 0x18

	::System::Void _ctor(::UnityEngine::Renderer* OCFHGOGFGPE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CPBHMEAAODJ__CTOR_OFFSET))(this, OCFHGOGFGPE);
	}

	::System::Boolean KPIEEEGIHLI(::UnityEngine::Renderer* OCFHGOGFGPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CPBHMEAAODJ_KPIEEEGIHLI_OFFSET))(this, OCFHGOGFGPE);
	}

	::System::Void OGJEPKFKDNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPBHMEAAODJ_OGJEPKFKDNJ_OFFSET))(this);
	}

	::System::Void EMHLBOHEBCI(::UnityEngine::Renderer* OCFHGOGFGPE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CPBHMEAAODJ_EMHLBOHEBCI_OFFSET))(this, OCFHGOGFGPE);
	}
};
