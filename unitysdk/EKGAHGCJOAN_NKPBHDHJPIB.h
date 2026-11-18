#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GINEMJPBFMK;
namespace System { class Action; }

#define EKGAHGCJOAN_NKPBHDHJPIB_EOFGHICGJLD_OFFSET UNITYSDK_OFFSET(0x11A985E0)
#define EKGAHGCJOAN_NKPBHDHJPIB__CTOR_OFFSET UNITYSDK_OFFSET(0x11A985D0)

inline static constexpr unsigned int EKGAHGCJOAN_NKPBHDHJPIB_TypeDefinitionIndex = 51208;

class EKGAHGCJOAN_NKPBHDHJPIB : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_NKPBHDHJPIB__CTOR_OFFSET))(this);
	}

	::System::Void EOFGHICGJLD(::GINEMJPBFMK* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::GINEMJPBFMK*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_NKPBHDHJPIB_EOFGHICGJLD_OFFSET))(this, GLAOEHCGCFO);
	}
};
