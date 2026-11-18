#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CHEKDBPKDFF_OFPJIKAHDCO_KEEFCICHLOB_OFFSET UNITYSDK_OFFSET(0x14550F20)
#define CHEKDBPKDFF_OFPJIKAHDCO__CTOR_OFFSET UNITYSDK_OFFSET(0x14550F10)

inline static constexpr unsigned int CHEKDBPKDFF_OFPJIKAHDCO_TypeDefinitionIndex = 42800;

class CHEKDBPKDFF_OFPJIKAHDCO : public ::System::Object
{
public:
	::System::Int32 JEBLLGJLECJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF_OFPJIKAHDCO__CTOR_OFFSET))(this);
	}

	::System::Void KEEFCICHLOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF_OFPJIKAHDCO_KEEFCICHLOB_OFFSET))(this);
	}
};
