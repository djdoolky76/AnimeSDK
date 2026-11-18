#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BEGBIBKGOGB_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x14C39CD0)
#define BEGBIBKGOGB_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x14C39D20)
#define BEGBIBKGOGB__CTOR_OFFSET UNITYSDK_OFFSET(0x14C39D90)

inline static constexpr unsigned int BEGBIBKGOGB_TypeDefinitionIndex = 90890;

class BEGBIBKGOGB : public ::System::Object
{
public:
	::System::String* NGIJLAPEKCM; // 0x10
	::System::Int32 DFPIEAAOLGP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGBIBKGOGB__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGBIBKGOGB_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGBIBKGOGB_ILEEFLAOOOM_OFFSET))(this);
	}
};
