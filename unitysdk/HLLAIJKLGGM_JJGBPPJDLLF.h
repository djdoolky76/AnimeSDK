#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class YorozuyaContext; }

#define HLLAIJKLGGM_JJGBPPJDLLF_GCMFJGCIJNO_OFFSET UNITYSDK_OFFSET(0x14708F20)
#define HLLAIJKLGGM_JJGBPPJDLLF__CTOR_OFFSET UNITYSDK_OFFSET(0x14708F10)

inline static constexpr unsigned int HLLAIJKLGGM_JJGBPPJDLLF_TypeDefinitionIndex = 43961;

class HLLAIJKLGGM_JJGBPPJDLLF : public ::System::Object
{
public:
	::MoleMole::YorozuyaContext* AAOCANGHBDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLAIJKLGGM_JJGBPPJDLLF__CTOR_OFFSET))(this);
	}

	::System::Void GCMFJGCIJNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLAIJKLGGM_JJGBPPJDLLF_GCMFJGCIJNO_OFFSET))(this);
	}
};
