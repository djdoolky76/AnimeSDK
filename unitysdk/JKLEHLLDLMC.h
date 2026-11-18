#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEFLPPHHLNK.h"
#include "unitysdk/EGGIHFMGEEJ.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define JKLEHLLDLMC_BILHEFEDLKM_OFFSET UNITYSDK_OFFSET(0x14FC1570)
#define JKLEHLLDLMC_CLOPNGMAMMA_OFFSET UNITYSDK_OFFSET(0x14FC1420)
#define JKLEHLLDLMC_EMHIGKJJJAG_OFFSET UNITYSDK_OFFSET(0x14FC1190)
#define JKLEHLLDLMC_MPGFGMGAHLO_OFFSET UNITYSDK_OFFSET(0x14FC12E0)
#define JKLEHLLDLMC__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC1610)

inline static constexpr unsigned int JKLEHLLDLMC_TypeDefinitionIndex = 91761;

class JKLEHLLDLMC : public ::System::Object
{
public:
	::EGGIHFMGEEJ GANNEFKHNAB; // 0x10
	::AEFLPPHHLNK OFODHMBHKEJ; // 0x14
	::System::UInt64 FCOMCHJLFOA; // 0x18
	::System::UInt64 DGCNAFMPKMA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLEHLLDLMC__CTOR_OFFSET))(this);
	}

	::System::String* EMHIGKJJJAG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLEHLLDLMC_EMHIGKJJJAG_OFFSET))(this);
	}

	::System::String* MPGFGMGAHLO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLEHLLDLMC_MPGFGMGAHLO_OFFSET))(this);
	}

	::System::String* CLOPNGMAMMA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLEHLLDLMC_CLOPNGMAMMA_OFFSET))(this);
	}

	::System::String* BILHEFEDLKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLEHLLDLMC_BILHEFEDLKM_OFFSET))(this);
	}
};
