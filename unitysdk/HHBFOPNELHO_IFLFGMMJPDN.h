#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGNCILNLFEE;
namespace System { class Action; }

#define HHBFOPNELHO_IFLFGMMJPDN_CANFDEPCIGB_OFFSET UNITYSDK_OFFSET(0x140B2690)
#define HHBFOPNELHO_IFLFGMMJPDN__CTOR_OFFSET UNITYSDK_OFFSET(0x140B2240)

inline static constexpr unsigned int HHBFOPNELHO_IFLFGMMJPDN_TypeDefinitionIndex = 40617;

class HHBFOPNELHO_IFLFGMMJPDN : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHBFOPNELHO_IFLFGMMJPDN__CTOR_OFFSET))(this);
	}

	::System::Void CANFDEPCIGB(::JGNCILNLFEE* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::JGNCILNLFEE*))((::PBYTE)hIl2Cpp + HHBFOPNELHO_IFLFGMMJPDN_CANFDEPCIGB_OFFSET))(this, DJCNCELJPOM);
	}
};
