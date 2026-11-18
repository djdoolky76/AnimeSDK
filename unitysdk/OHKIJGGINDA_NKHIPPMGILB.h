#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OHKIJGGINDA_NKHIPPMGILB_FNDJBNIJGJI_OFFSET UNITYSDK_OFFSET(0x16C17470)
#define OHKIJGGINDA_NKHIPPMGILB__CTOR_OFFSET UNITYSDK_OFFSET(0x16C17460)

inline static constexpr unsigned int OHKIJGGINDA_NKHIPPMGILB_TypeDefinitionIndex = 64298;

class OHKIJGGINDA_NKHIPPMGILB : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::UInt32 HAABDEAADGI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKIJGGINDA_NKHIPPMGILB__CTOR_OFFSET))(this);
	}

	::System::Void FNDJBNIJGJI(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OHKIJGGINDA_NKHIPPMGILB_FNDJBNIJGJI_OFFSET))(this, BHDNBGLCNOM);
	}
};
