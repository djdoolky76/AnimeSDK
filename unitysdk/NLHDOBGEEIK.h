#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPPPCLJMLCL.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

class AMFAHGEFDFJ;
class MLKKDHPBPNJ;
class PHCAOEMIJPJ;

#define NLHDOBGEEIK_DEGAELEHEDI_OFFSET UNITYSDK_OFFSET(0x6FDE20)
#define NLHDOBGEEIK_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x6FDEA0)
#define NLHDOBGEEIK_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x6FDE30)
#define NLHDOBGEEIK_JCGGGMONBJO_OFFSET UNITYSDK_OFFSET(0x6FDE10)
#define NLHDOBGEEIK_LCEKNHNIPIC_OFFSET UNITYSDK_OFFSET(0x6FDE90)
#define NLHDOBGEEIK_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x6FDE00)
#define NLHDOBGEEIK__CTOR_OFFSET UNITYSDK_OFFSET(0x6FDDB0)

inline static constexpr unsigned int NLHDOBGEEIK_TypeDefinitionIndex = 50814;

struct alignas(8) NLHDOBGEEIK
{
	::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA; // 0x10
	::AMFAHGEFDFJ* IKFLKDGEPGL; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA, ::MLKKDHPBPNJ* NCLJEDFMCID)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle, ::MLKKDHPBPNJ*))((::PBYTE)hIl2Cpp + NLHDOBGEEIK__CTOR_OFFSET))(this, PHHDHIBOCKA, NCLJEDFMCID);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHDOBGEEIK_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void JCGGGMONBJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHDOBGEEIK_JCGGGMONBJO_OFFSET))(this);
	}

	::PHCAOEMIJPJ* DEGAELEHEDI(::System::UInt32 BKLHJJAEAID)
	{
		return ((::PHCAOEMIJPJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLHDOBGEEIK_DEGAELEHEDI_OFFSET))(this, BKLHJJAEAID);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHDOBGEEIK_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Boolean LCEKNHNIPIC(::LPPPCLJMLCL& JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LPPPCLJMLCL&))((::PBYTE)hIl2Cpp + NLHDOBGEEIK_LCEKNHNIPIC_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHDOBGEEIK_ECEBDPJEKNN_OFFSET))(this);
	}
};
