#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OOBAHEDLHOI_EFMOPEPDPKO_KJEDJDHLOHA_OFFSET UNITYSDK_OFFSET(0x172E0640)
#define OOBAHEDLHOI_EFMOPEPDPKO__CTOR_OFFSET UNITYSDK_OFFSET(0x172E0630)

inline static constexpr unsigned int OOBAHEDLHOI_EFMOPEPDPKO_TypeDefinitionIndex = 75521;

class OOBAHEDLHOI_EFMOPEPDPKO : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_EFMOPEPDPKO__CTOR_OFFSET))(this);
	}

	::System::Void KJEDJDHLOHA(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_EFMOPEPDPKO_KJEDJDHLOHA_OFFSET))(this, GLAOEHCGCFO);
	}
};
