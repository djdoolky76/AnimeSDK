#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDKCEAKBJFB;
namespace System { class Action; }

#define EKGAHGCJOAN_GALJKCKIDMG_MCGKCOJEOBD_OFFSET UNITYSDK_OFFSET(0x16158A50)
#define EKGAHGCJOAN_GALJKCKIDMG__CTOR_OFFSET UNITYSDK_OFFSET(0x16158A40)

inline static constexpr unsigned int EKGAHGCJOAN_GALJKCKIDMG_TypeDefinitionIndex = 51225;

class EKGAHGCJOAN_GALJKCKIDMG : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_GALJKCKIDMG__CTOR_OFFSET))(this);
	}

	::System::Void MCGKCOJEOBD(::BDKCEAKBJFB* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::BDKCEAKBJFB*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_GALJKCKIDMG_MCGKCOJEOBD_OFFSET))(this, GLAOEHCGCFO);
	}
};
