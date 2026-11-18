#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OOBAHEDLHOI_DCHIINHHBPE_GNFAGJGDLFD_OFFSET UNITYSDK_OFFSET(0x1551ED10)
#define OOBAHEDLHOI_DCHIINHHBPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1551ED00)

inline static constexpr unsigned int OOBAHEDLHOI_DCHIINHHBPE_TypeDefinitionIndex = 75515;

class OOBAHEDLHOI_DCHIINHHBPE : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_DCHIINHHBPE__CTOR_OFFSET))(this);
	}

	::System::Void GNFAGJGDLFD(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_DCHIINHHBPE_GNFAGJGDLFD_OFFSET))(this, GLAOEHCGCFO);
	}
};
