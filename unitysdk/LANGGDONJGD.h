#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IILMGLCLKKF;
namespace MoleMole { class ZenkovYokaiHenshinSubSystem; }
namespace System { class String; }

#define LANGGDONJGD_ACGIECKHMMG_OFFSET UNITYSDK_OFFSET(0x18650A50)
#define LANGGDONJGD_ADBAHILIPIH_OFFSET UNITYSDK_OFFSET(0x18650320)
#define LANGGDONJGD_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x1864FE60)
#define LANGGDONJGD_IIPNPCOLMEF_OFFSET UNITYSDK_OFFSET(0x18650630)
#define LANGGDONJGD_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x1864FE70)
#define LANGGDONJGD_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x1864FE00)
#define LANGGDONJGD_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x1864FE90)
#define LANGGDONJGD_NNGAGOAFHPP_OFFSET UNITYSDK_OFFSET(0x186505E0)
#define LANGGDONJGD_ODNPMLLGJJE_OFFSET UNITYSDK_OFFSET(0x1864FE80)
#define LANGGDONJGD_OEIOJMNIMGK_OFFSET UNITYSDK_OFFSET(0x18650460)
#define LANGGDONJGD_OFDJMDKEMLJ_OFFSET UNITYSDK_OFFSET(0x186500A0)
#define LANGGDONJGD_OOAIABJGLON_OFFSET UNITYSDK_OFFSET(0x18650AB0)
#define LANGGDONJGD_PLMPAGMICCF_OFFSET UNITYSDK_OFFSET(0x186501E0)
#define LANGGDONJGD__CTOR_OFFSET UNITYSDK_OFFSET(0x186512A0)

inline static constexpr unsigned int LANGGDONJGD_TypeDefinitionIndex = 91331;

class LANGGDONJGD : public ::System::Object
{
public:
	::IILMGLCLKKF* HCPLHCCLLGA; // 0x10
	::MoleMole::ZenkovYokaiHenshinSubSystem* OINGMNOBBFF; // 0x18
	::System::Int32 LKBGJPFDNDH; // 0x20
	::System::Int32 DAEENJIGFBI; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGGDONJGD__CTOR_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ(::System::UInt32 OIKFFGKDHME, ::System::UInt32 GDHGIAGFBAO, ::MoleMole::ZenkovYokaiHenshinSubSystem* AEGPAMIKIAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::ZenkovYokaiHenshinSubSystem*))((::PBYTE)hIl2Cpp + LANGGDONJGD_KDGMEFEJMGJ_OFFSET))(this, OIKFFGKDHME, GDHGIAGFBAO, AEGPAMIKIAO);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGGDONJGD_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGGDONJGD_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Boolean ODNPMLLGJJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGGDONJGD_ODNPMLLGJJE_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGGDONJGD_NIOLACCPKHH_OFFSET))(this);
	}

	::System::String* OFDJMDKEMLJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGGDONJGD_OFDJMDKEMLJ_OFFSET))(this);
	}

	::System::Int32 PLMPAGMICCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGGDONJGD_PLMPAGMICCF_OFFSET))(this);
	}

	::System::Int32 ADBAHILIPIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGGDONJGD_ADBAHILIPIH_OFFSET))(this);
	}

	::System::Boolean OEIOJMNIMGK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGGDONJGD_OEIOJMNIMGK_OFFSET))(this);
	}

	::System::Boolean NNGAGOAFHPP(::System::Single& EJAOAGGJHHA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + LANGGDONJGD_NNGAGOAFHPP_OFFSET))(this, EJAOAGGJHHA);
	}

	::System::Void IIPNPCOLMEF(::System::Boolean& MJAKBLPNJKB, ::System::Single& EJAOAGGJHHA, ::System::Single& PDCFDLKMKHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + LANGGDONJGD_IIPNPCOLMEF_OFFSET))(this, MJAKBLPNJKB, EJAOAGGJHHA, PDCFDLKMKHI);
	}

	::System::Boolean OOAIABJGLON()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGGDONJGD_OOAIABJGLON_OFFSET))(this);
	}

	::IILMGLCLKKF* ACGIECKHMMG()
	{
		return ((::IILMGLCLKKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGGDONJGD_ACGIECKHMMG_OFFSET))(this);
	}
};
