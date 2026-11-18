#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGNCILNLFEE;
class OAEFGCLEHHO;
namespace System { class Action; }

#define MBPFOMCIHMJ_MKHKHHHLNLA_FLGJFEENBJH_OFFSET UNITYSDK_OFFSET(0x14D5F070)
#define MBPFOMCIHMJ_MKHKHHHLNLA_MEBHFBBONEE_OFFSET UNITYSDK_OFFSET(0x14D5F060)
#define MBPFOMCIHMJ_MKHKHHHLNLA__CTOR_OFFSET UNITYSDK_OFFSET(0x14D5F050)

inline static constexpr unsigned int MBPFOMCIHMJ_MKHKHHHLNLA_TypeDefinitionIndex = 92033;

class MBPFOMCIHMJ_MKHKHHHLNLA : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPFOMCIHMJ_MKHKHHHLNLA__CTOR_OFFSET))(this);
	}

	::System::Void MEBHFBBONEE(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MBPFOMCIHMJ_MKHKHHHLNLA_MEBHFBBONEE_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::Void FLGJFEENBJH(::JGNCILNLFEE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::JGNCILNLFEE*))((::PBYTE)hIl2Cpp + MBPFOMCIHMJ_MKHKHHHLNLA_FLGJFEENBJH_OFFSET))(this, GLAOEHCGCFO);
	}
};
