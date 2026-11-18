#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DAJOGALOKGE_ADDMLPEEBIL_POKNFOJKHEI_OFFSET UNITYSDK_OFFSET(0x147BE9E0)
#define DAJOGALOKGE_ADDMLPEEBIL__CTOR_OFFSET UNITYSDK_OFFSET(0x147BE9D0)

inline static constexpr unsigned int DAJOGALOKGE_ADDMLPEEBIL_TypeDefinitionIndex = 85440;

class DAJOGALOKGE_ADDMLPEEBIL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Int32 FGHNHOCJEGB; // 0x18
	::System::Boolean MJLGHGFCHOM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJOGALOKGE_ADDMLPEEBIL__CTOR_OFFSET))(this);
	}

	::System::Void POKNFOJKHEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJOGALOKGE_ADDMLPEEBIL_POKNFOJKHEI_OFFSET))(this);
	}
};
