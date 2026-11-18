#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HFLOAIKPPPG_IKHBNOOFHLK_KKNMMGGADLC_OFFSET UNITYSDK_OFFSET(0x10100140)
#define HFLOAIKPPPG_IKHBNOOFHLK__CTOR_OFFSET UNITYSDK_OFFSET(0x100FF820)

inline static constexpr unsigned int HFLOAIKPPPG_IKHBNOOFHLK_TypeDefinitionIndex = 42520;

class HFLOAIKPPPG_IKHBNOOFHLK : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLOAIKPPPG_IKHBNOOFHLK__CTOR_OFFSET))(this);
	}

	::System::Void KKNMMGGADLC(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HFLOAIKPPPG_IKHBNOOFHLK_KKNMMGGADLC_OFFSET))(this, DJCNCELJPOM);
	}
};
