#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define KPOAMHEOCDE_GMODFFNBENE_BHEBLCGLDPJ_OFFSET UNITYSDK_OFFSET(0x1A2E5FB0)
#define KPOAMHEOCDE_GMODFFNBENE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E5FA0)

inline static constexpr unsigned int KPOAMHEOCDE_GMODFFNBENE_TypeDefinitionIndex = 74557;

class KPOAMHEOCDE_GMODFFNBENE : public ::System::Object
{
public:
	::System::String* CJBJONJDOLI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_GMODFFNBENE__CTOR_OFFSET))(this);
	}

	::System::Boolean BHEBLCGLDPJ(::UnityEngine::Renderer* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_GMODFFNBENE_BHEBLCGLDPJ_OFFSET))(this, HAAEBCOBKFF);
	}
};
