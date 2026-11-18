#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ZenkovYokaiHenshinSubSystem; }
namespace System { class String; }

#define AOHNHGJELLJ_ADBAHILIPIH_OFFSET UNITYSDK_OFFSET(0x14232960)
#define AOHNHGJELLJ_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x142324A0)
#define AOHNHGJELLJ_IIPNPCOLMEF_OFFSET UNITYSDK_OFFSET(0x14232B50)
#define AOHNHGJELLJ_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x142324B0)
#define AOHNHGJELLJ_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x14232440)
#define AOHNHGJELLJ_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x142324D0)
#define AOHNHGJELLJ_NNGAGOAFHPP_OFFSET UNITYSDK_OFFSET(0x14232AD0)
#define AOHNHGJELLJ_ODNPMLLGJJE_OFFSET UNITYSDK_OFFSET(0x142324C0)
#define AOHNHGJELLJ_OEIOJMNIMGK_OFFSET UNITYSDK_OFFSET(0x14232AA0)
#define AOHNHGJELLJ_OFDJMDKEMLJ_OFFSET UNITYSDK_OFFSET(0x142326E0)
#define AOHNHGJELLJ_OOAIABJGLON_OFFSET UNITYSDK_OFFSET(0x14232BD0)
#define AOHNHGJELLJ_PLMPAGMICCF_OFFSET UNITYSDK_OFFSET(0x14232820)
#define AOHNHGJELLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14232E20)

inline static constexpr unsigned int AOHNHGJELLJ_TypeDefinitionIndex = 42126;

class AOHNHGJELLJ : public ::System::Object
{
public:
	::MoleMole::ZenkovYokaiHenshinSubSystem* OINGMNOBBFF; // 0x10
	::System::Int32 DAEENJIGFBI; // 0x18
	::System::Int32 LKBGJPFDNDH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHNHGJELLJ__CTOR_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ(::System::UInt32 OIKFFGKDHME, ::System::UInt32 GDHGIAGFBAO, ::MoleMole::ZenkovYokaiHenshinSubSystem* AEGPAMIKIAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::ZenkovYokaiHenshinSubSystem*))((::PBYTE)hIl2Cpp + AOHNHGJELLJ_KDGMEFEJMGJ_OFFSET))(this, OIKFFGKDHME, GDHGIAGFBAO, AEGPAMIKIAO);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHNHGJELLJ_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHNHGJELLJ_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Boolean ODNPMLLGJJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHNHGJELLJ_ODNPMLLGJJE_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHNHGJELLJ_NIOLACCPKHH_OFFSET))(this);
	}

	::System::String* OFDJMDKEMLJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHNHGJELLJ_OFDJMDKEMLJ_OFFSET))(this);
	}

	::System::Int32 PLMPAGMICCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHNHGJELLJ_PLMPAGMICCF_OFFSET))(this);
	}

	::System::Int32 ADBAHILIPIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHNHGJELLJ_ADBAHILIPIH_OFFSET))(this);
	}

	::System::Boolean OEIOJMNIMGK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHNHGJELLJ_OEIOJMNIMGK_OFFSET))(this);
	}

	::System::Boolean NNGAGOAFHPP(::System::Single& EJAOAGGJHHA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + AOHNHGJELLJ_NNGAGOAFHPP_OFFSET))(this, EJAOAGGJHHA);
	}

	::System::Void IIPNPCOLMEF(::System::Boolean& MJAKBLPNJKB, ::System::Single& EJAOAGGJHHA, ::System::Single& PDCFDLKMKHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + AOHNHGJELLJ_IIPNPCOLMEF_OFFSET))(this, MJAKBLPNJKB, EJAOAGGJHHA, PDCFDLKMKHI);
	}

	::System::Boolean OOAIABJGLON()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHNHGJELLJ_OOAIABJGLON_OFFSET))(this);
	}
};
