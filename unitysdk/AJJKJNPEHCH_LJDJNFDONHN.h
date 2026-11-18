#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KLIOLPDEKLK;
namespace System { class Action; }

#define AJJKJNPEHCH_LJDJNFDONHN_FCGCDGGCOPI_OFFSET UNITYSDK_OFFSET(0x16FF3D10)
#define AJJKJNPEHCH_LJDJNFDONHN__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF3D00)

inline static constexpr unsigned int AJJKJNPEHCH_LJDJNFDONHN_TypeDefinitionIndex = 83675;

class AJJKJNPEHCH_LJDJNFDONHN : public ::System::Object
{
public:
	::System::Action* DLGKCFLAPCC; // 0x10
	::System::UInt32 CDLGNOICKAF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_LJDJNFDONHN__CTOR_OFFSET))(this);
	}

	::System::Void FCGCDGGCOPI(::KLIOLPDEKLK* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::KLIOLPDEKLK*))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_LJDJNFDONHN_FCGCDGGCOPI_OFFSET))(this, IGAAKDOIPNN);
	}
};
