#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
class JAJHAJEHPON;

#define JAJHAJEHPON_MMLKOMMMCBA_ILMDMPDOKMO_OFFSET UNITYSDK_OFFSET(0x15C32410)
#define JAJHAJEHPON_MMLKOMMMCBA__CTOR_OFFSET UNITYSDK_OFFSET(0x15C32400)

inline static constexpr unsigned int JAJHAJEHPON_MMLKOMMMCBA_TypeDefinitionIndex = 55488;

class JAJHAJEHPON_MMLKOMMMCBA : public ::System::Object
{
public:
	::IBENDELLLAO* IPPHGJDBGPK; // 0x10
	::JAJHAJEHPON* KLHPEBKNIFB; // 0x18
	::System::Int32 NPAKMAGBOCH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJHAJEHPON_MMLKOMMMCBA__CTOR_OFFSET))(this);
	}

	::System::Void ILMDMPDOKMO(::System::Int32 PPKEDEIDCGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JAJHAJEHPON_MMLKOMMMCBA_ILMDMPDOKMO_OFFSET))(this, PPKEDEIDCGD);
	}
};
