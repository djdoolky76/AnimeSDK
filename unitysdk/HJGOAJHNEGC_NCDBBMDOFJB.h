#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCOAGGHCODK;

#define HJGOAJHNEGC_NCDBBMDOFJB_AIILGEGGIIG_OFFSET UNITYSDK_OFFSET(0x14D30EC0)
#define HJGOAJHNEGC_NCDBBMDOFJB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D30EB0)

inline static constexpr unsigned int HJGOAJHNEGC_NCDBBMDOFJB_TypeDefinitionIndex = 59076;

class HJGOAJHNEGC_NCDBBMDOFJB : public ::System::Object
{
public:
	::System::Int32 ABHBKFJKINO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGOAJHNEGC_NCDBBMDOFJB__CTOR_OFFSET))(this);
	}

	::System::Boolean AIILGEGGIIG(::KCOAGGHCODK* HEAJMIGHEHG)
	{
		return ((::System::Boolean(*)(::PVOID, ::KCOAGGHCODK*))((::PBYTE)hIl2Cpp + HJGOAJHNEGC_NCDBBMDOFJB_AIILGEGGIIG_OFFSET))(this, HEAJMIGHEHG);
	}
};
