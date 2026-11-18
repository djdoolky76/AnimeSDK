#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class JODMGCIFBLC;

#define HOMOKEKNFOI_JCIBJALGPKM_OFFSET UNITYSDK_OFFSET(0x1819B740)
#define HOMOKEKNFOI_KAEGOIJDKEJ_OFFSET UNITYSDK_OFFSET(0x1819B610)

inline static constexpr unsigned int HOMOKEKNFOI_TypeDefinitionIndex = 43914;

class HOMOKEKNFOI : public ::System::Object
{
public:
	static ::System::Boolean KAEGOIJDKEJ(::LGCNEDCMPKM BKBGPKNGNMF, ::JODMGCIFBLC*& PMJFAGNEDOF)
	{
		return ((::System::Boolean(*)(::LGCNEDCMPKM, ::JODMGCIFBLC*&))((::PBYTE)hIl2Cpp + HOMOKEKNFOI_KAEGOIJDKEJ_OFFSET))(BKBGPKNGNMF, PMJFAGNEDOF);
	}

	static ::System::Boolean JCIBJALGPKM(::LGCNEDCMPKM BKBGPKNGNMF, ::JODMGCIFBLC*& PMJFAGNEDOF)
	{
		return ((::System::Boolean(*)(::LGCNEDCMPKM, ::JODMGCIFBLC*&))((::PBYTE)hIl2Cpp + HOMOKEKNFOI_JCIBJALGPKM_OFFSET))(BKBGPKNGNMF, PMJFAGNEDOF);
	}
};
