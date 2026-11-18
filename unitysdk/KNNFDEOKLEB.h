#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;

#define KNNFDEOKLEB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1634D320)
#define KNNFDEOKLEB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1634D290)
#define KNNFDEOKLEB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1634D8E0)
#define KNNFDEOKLEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1634D820)

inline static constexpr unsigned int KNNFDEOKLEB_TypeDefinitionIndex = 70764;

class KNNFDEOKLEB : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNFDEOKLEB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNFDEOKLEB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KNNFDEOKLEB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNFDEOKLEB_GDEOPIBNOIN_OFFSET))(this);
	}
};
