#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define FPOOKGEOJOC_JMDPFJPDBHP_ILJLIIMGKAB_OFFSET UNITYSDK_OFFSET(0x15E7E2A0)
#define FPOOKGEOJOC_JMDPFJPDBHP_JLNCGGEKOGC_OFFSET UNITYSDK_OFFSET(0x15E7E290)
#define FPOOKGEOJOC_JMDPFJPDBHP__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7E280)

inline static constexpr unsigned int FPOOKGEOJOC_JMDPFJPDBHP_TypeDefinitionIndex = 66255;

class FPOOKGEOJOC_JMDPFJPDBHP : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOOKGEOJOC_JMDPFJPDBHP__CTOR_OFFSET))(this);
	}

	::System::Void JLNCGGEKOGC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FPOOKGEOJOC_JMDPFJPDBHP_JLNCGGEKOGC_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void ILJLIIMGKAB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FPOOKGEOJOC_JMDPFJPDBHP_ILJLIIMGKAB_OFFSET))(this, PIIPCLCCOIG);
	}
};
