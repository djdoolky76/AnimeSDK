#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIDPLADONNO;
class BDCFFJMABPM;
class BDCNPEJKDGD;

#define LAKIKBJAEBJ_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1ED73C00)
#define LAKIKBJAEBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED73BF0)

inline static constexpr unsigned int LAKIKBJAEBJ_TypeDefinitionIndex = 94402;

class LAKIKBJAEBJ : public ::System::Object
{
public:
	::BDCFFJMABPM* BKCNANPOKMJ; // 0x10
	::AIDPLADONNO* OGMIKIPIJGI; // 0x18

	::System::Void _ctor(::AIDPLADONNO* OGMIKIPIJGI, ::BDCFFJMABPM* BKCNANPOKMJ)
	{
		return ((::System::Void(*)(::PVOID, ::AIDPLADONNO*, ::BDCFFJMABPM*))((::PBYTE)hIl2Cpp + LAKIKBJAEBJ__CTOR_OFFSET))(this, OGMIKIPIJGI, BKCNANPOKMJ);
	}

	::BDCNPEJKDGD* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::UInt32 JGDOIBLCMCL)
	{
		return ((::BDCNPEJKDGD*(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + LAKIKBJAEBJ_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, JGDOIBLCMCL);
	}
};
