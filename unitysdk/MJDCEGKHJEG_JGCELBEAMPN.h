#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define MJDCEGKHJEG_JGCELBEAMPN_ADDNHBPAMAB_OFFSET UNITYSDK_OFFSET(0x11F4E9C0)
#define MJDCEGKHJEG_JGCELBEAMPN__CTOR_OFFSET UNITYSDK_OFFSET(0x11F4E9B0)

inline static constexpr unsigned int MJDCEGKHJEG_JGCELBEAMPN_TypeDefinitionIndex = 56407;

class MJDCEGKHJEG_JGCELBEAMPN : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JGCELBEAMPN__CTOR_OFFSET))(this);
	}

	::System::Void ADDNHBPAMAB(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JGCELBEAMPN_ADDNHBPAMAB_OFFSET))(this, GLAOEHCGCFO);
	}
};
