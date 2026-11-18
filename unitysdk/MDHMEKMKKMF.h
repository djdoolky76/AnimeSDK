#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCIMMDDIFBJ;

#define MDHMEKMKKMF_HOMHHCGKHAJ_OFFSET UNITYSDK_OFFSET(0x12D53BD0)
#define MDHMEKMKKMF_KDIIHFEEKAD_OFFSET UNITYSDK_OFFSET(0x12D53BC0)
#define MDHMEKMKKMF_OKBEMKLBPOC_OFFSET UNITYSDK_OFFSET(0x12D53CD0)
#define MDHMEKMKKMF__CTOR_OFFSET UNITYSDK_OFFSET(0x12D53BB0)

inline static constexpr unsigned int MDHMEKMKKMF_TypeDefinitionIndex = 89683;

class MDHMEKMKKMF : public ::System::Object
{
public:
	::GCIMMDDIFBJ* EEFOCCNFJCO; // 0x10
	::System::Boolean JEJIFNJMGNF; // 0x18

	::System::Void _ctor(::GCIMMDDIFBJ* AOKJEGNBALI)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + MDHMEKMKKMF__CTOR_OFFSET))(this, AOKJEGNBALI);
	}

	::System::Void KDIIHFEEKAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHMEKMKKMF_KDIIHFEEKAD_OFFSET))(this);
	}

	::System::Void OKBEMKLBPOC(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDHMEKMKKMF_OKBEMKLBPOC_OFFSET))(this, FIPHFGHNNBE);
	}

	::System::Void HOMHHCGKHAJ(::System::Boolean BFALHDBHDBB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDHMEKMKKMF_HOMHHCGKHAJ_OFFSET))(this, BFALHDBHDBB);
	}
};
