#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define LKCKNHGFJLD_JEPMBJNODLA_GCAMDKFHIMA_OFFSET UNITYSDK_OFFSET(0x13CF8E20)
#define LKCKNHGFJLD_JEPMBJNODLA__CTOR_OFFSET UNITYSDK_OFFSET(0x13CF8E10)

inline static constexpr unsigned int LKCKNHGFJLD_JEPMBJNODLA_TypeDefinitionIndex = 80637;

class LKCKNHGFJLD_JEPMBJNODLA : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction* LBACCJPDODJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCKNHGFJLD_JEPMBJNODLA__CTOR_OFFSET))(this);
	}

	::System::Void GCAMDKFHIMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCKNHGFJLD_JEPMBJNODLA_GCAMDKFHIMA_OFFSET))(this);
	}
};
