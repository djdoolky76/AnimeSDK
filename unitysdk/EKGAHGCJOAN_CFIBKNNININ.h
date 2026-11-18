#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JMNEANIBLKC;
namespace System { class Action; }

#define EKGAHGCJOAN_CFIBKNNININ_OFNOLFNIPMH_OFFSET UNITYSDK_OFFSET(0x11A98330)
#define EKGAHGCJOAN_CFIBKNNININ__CTOR_OFFSET UNITYSDK_OFFSET(0x11A98320)

inline static constexpr unsigned int EKGAHGCJOAN_CFIBKNNININ_TypeDefinitionIndex = 51214;

class EKGAHGCJOAN_CFIBKNNININ : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CFIBKNNININ__CTOR_OFFSET))(this);
	}

	::System::Void OFNOLFNIPMH(::JMNEANIBLKC* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::JMNEANIBLKC*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CFIBKNNININ_OFNOLFNIPMH_OFFSET))(this, GLAOEHCGCFO);
	}
};
