#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OOBAHEDLHOI_BLNHNPGHGBB_OKEPGLGPABE_OFFSET UNITYSDK_OFFSET(0x1B7B01D0)
#define OOBAHEDLHOI_BLNHNPGHGBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B01C0)

inline static constexpr unsigned int OOBAHEDLHOI_BLNHNPGHGBB_TypeDefinitionIndex = 75538;

class OOBAHEDLHOI_BLNHNPGHGBB : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_BLNHNPGHGBB__CTOR_OFFSET))(this);
	}

	::System::Void OKEPGLGPABE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_BLNHNPGHGBB_OKEPGLGPABE_OFFSET))(this, GLAOEHCGCFO);
	}
};
