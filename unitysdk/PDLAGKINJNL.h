#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKLPCMMHKEO.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/OMGFCFDABLN.h"

#define PDLAGKINJNL_MPBDOBFIKAB_OFFSET UNITYSDK_OFFSET(0x17315160)
#define PDLAGKINJNL__CTOR_OFFSET UNITYSDK_OFFSET(0x17315150)

inline static constexpr unsigned int PDLAGKINJNL_TypeDefinitionIndex = 53703;

class PDLAGKINJNL : public ::AKLPCMMHKEO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDLAGKINJNL__CTOR_OFFSET))(this);
	}

	::System::Void MPBDOBFIKAB(::LGCNEDCMPKM& BKBGPKNGNMF, ::OMGFCFDABLN& LOACBJBANNC)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + PDLAGKINJNL_MPBDOBFIKAB_OFFSET))(this, BKBGPKNGNMF, LOACBJBANNC);
	}
};
