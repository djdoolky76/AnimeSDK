#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPFNLOFNPDM.h"
#include "unitysdk/System/Object.h"

class LKPHLOELDOO;

#define LKPHLOELDOO_OOIOLEJKKIK_LEMPAECDAJP_OFFSET UNITYSDK_OFFSET(0x11F20920)
#define LKPHLOELDOO_OOIOLEJKKIK_LGCMHBJFLOM_OFFSET UNITYSDK_OFFSET(0x11F20890)
#define LKPHLOELDOO_OOIOLEJKKIK__CTOR_OFFSET UNITYSDK_OFFSET(0x11F20880)

inline static constexpr unsigned int LKPHLOELDOO_OOIOLEJKKIK_TypeDefinitionIndex = 54082;

class LKPHLOELDOO_OOIOLEJKKIK : public ::System::Object
{
public:
	::LKPHLOELDOO* KLHPEBKNIFB; // 0x10
	::DPFNLOFNPDM IGAAKDOIPNN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_OOIOLEJKKIK__CTOR_OFFSET))(this);
	}

	::System::Void LGCMHBJFLOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_OOIOLEJKKIK_LGCMHBJFLOM_OFFSET))(this);
	}

	::System::Void LEMPAECDAJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_OOIOLEJKKIK_LEMPAECDAJP_OFFSET))(this);
	}
};
