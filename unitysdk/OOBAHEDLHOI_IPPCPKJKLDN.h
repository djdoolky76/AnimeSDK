#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OOBAHEDLHOI_IPPCPKJKLDN_CCJJEFPFCJC_OFFSET UNITYSDK_OFFSET(0xFD979B0)
#define OOBAHEDLHOI_IPPCPKJKLDN__CTOR_OFFSET UNITYSDK_OFFSET(0xFD979A0)

inline static constexpr unsigned int OOBAHEDLHOI_IPPCPKJKLDN_TypeDefinitionIndex = 75513;

class OOBAHEDLHOI_IPPCPKJKLDN : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_IPPCPKJKLDN__CTOR_OFFSET))(this);
	}

	::System::Void CCJJEFPFCJC(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_IPPCPKJKLDN_CCJJEFPFCJC_OFFSET))(this, GLAOEHCGCFO);
	}
};
