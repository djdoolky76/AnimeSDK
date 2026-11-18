#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OOBAHEDLHOI_BNILHNGCDFJ_NEFBHAPPNGO_OFFSET UNITYSDK_OFFSET(0x1551EBC0)
#define OOBAHEDLHOI_BNILHNGCDFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1551EBB0)

inline static constexpr unsigned int OOBAHEDLHOI_BNILHNGCDFJ_TypeDefinitionIndex = 75535;

class OOBAHEDLHOI_BNILHNGCDFJ : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_BNILHNGCDFJ__CTOR_OFFSET))(this);
	}

	::System::Void NEFBHAPPNGO(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_BNILHNGCDFJ_NEFBHAPPNGO_OFFSET))(this, GLAOEHCGCFO);
	}
};
