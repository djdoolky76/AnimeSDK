#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FPGLKKMDFID;
class IDGDIFDMIDP;

#define HCLKNFIEOGC_AMNFLEPIFLB_FFEPNJIEFIA_OFFSET UNITYSDK_OFFSET(0x17A3E530)
#define HCLKNFIEOGC_AMNFLEPIFLB__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3E520)

inline static constexpr unsigned int HCLKNFIEOGC_AMNFLEPIFLB_TypeDefinitionIndex = 72319;

class HCLKNFIEOGC_AMNFLEPIFLB : public ::System::Object
{
public:
	::IDGDIFDMIDP* LJBPECKCCEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLKNFIEOGC_AMNFLEPIFLB__CTOR_OFFSET))(this);
	}

	::System::Boolean FFEPNJIEFIA(::FPGLKKMDFID* EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::FPGLKKMDFID*))((::PBYTE)hIl2Cpp + HCLKNFIEOGC_AMNFLEPIFLB_FFEPNJIEFIA_OFFSET))(this, EGEGIMGMJHN);
	}
};
