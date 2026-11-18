#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ZenkovYokaiHenshinSubSystem; }
namespace System { class String; }

#define AMIFHDGOJJD_ADBAHILIPIH_OFFSET UNITYSDK_OFFSET(0x1422D4C0)
#define AMIFHDGOJJD_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x1422D460)
#define AMIFHDGOJJD_IIPNPCOLMEF_OFFSET UNITYSDK_OFFSET(0x1422D530)
#define AMIFHDGOJJD_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x1422D470)
#define AMIFHDGOJJD_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x1422D5E0)
#define AMIFHDGOJJD_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x1422D490)
#define AMIFHDGOJJD_NNGAGOAFHPP_OFFSET UNITYSDK_OFFSET(0x1422D4E0)
#define AMIFHDGOJJD_ODNPMLLGJJE_OFFSET UNITYSDK_OFFSET(0x1422D480)
#define AMIFHDGOJJD_OEIOJMNIMGK_OFFSET UNITYSDK_OFFSET(0x1422D4D0)
#define AMIFHDGOJJD_OFDJMDKEMLJ_OFFSET UNITYSDK_OFFSET(0x1422D4A0)
#define AMIFHDGOJJD_OOAIABJGLON_OFFSET UNITYSDK_OFFSET(0x1422D5A0)
#define AMIFHDGOJJD_PLMPAGMICCF_OFFSET UNITYSDK_OFFSET(0x1422D4B0)
#define AMIFHDGOJJD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1422D650)
#define AMIFHDGOJJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1422D640)

inline static constexpr unsigned int AMIFHDGOJJD_TypeDefinitionIndex = 52448;

class AMIFHDGOJJD : public ::System::Object
{
public:
	static ::AMIFHDGOJJD** StaticGet_NJLLMPCDOEB()
	{
		return (::AMIFHDGOJJD**)Il2CppClass::FromTypeDefinitionIndex(AMIFHDGOJJD_TypeDefinitionIndex)->GetStaticField(0x445E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFHDGOJJD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMIFHDGOJJD__CCTOR_OFFSET))();
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFHDGOJJD_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFHDGOJJD_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Boolean ODNPMLLGJJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFHDGOJJD_ODNPMLLGJJE_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFHDGOJJD_NIOLACCPKHH_OFFSET))(this);
	}

	::System::String* OFDJMDKEMLJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFHDGOJJD_OFDJMDKEMLJ_OFFSET))(this);
	}

	::System::Int32 PLMPAGMICCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFHDGOJJD_PLMPAGMICCF_OFFSET))(this);
	}

	::System::Int32 ADBAHILIPIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFHDGOJJD_ADBAHILIPIH_OFFSET))(this);
	}

	::System::Boolean OEIOJMNIMGK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFHDGOJJD_OEIOJMNIMGK_OFFSET))(this);
	}

	::System::Boolean NNGAGOAFHPP(::System::Single& EJAOAGGJHHA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + AMIFHDGOJJD_NNGAGOAFHPP_OFFSET))(this, EJAOAGGJHHA);
	}

	::System::Void IIPNPCOLMEF(::System::Boolean& MJAKBLPNJKB, ::System::Single& EJAOAGGJHHA, ::System::Single& PDCFDLKMKHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + AMIFHDGOJJD_IIPNPCOLMEF_OFFSET))(this, MJAKBLPNJKB, EJAOAGGJHHA, PDCFDLKMKHI);
	}

	::System::Boolean OOAIABJGLON()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFHDGOJJD_OOAIABJGLON_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ(::System::UInt32 OIKFFGKDHME, ::System::UInt32 GDHGIAGFBAO, ::MoleMole::ZenkovYokaiHenshinSubSystem* AEGPAMIKIAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::ZenkovYokaiHenshinSubSystem*))((::PBYTE)hIl2Cpp + AMIFHDGOJJD_KDGMEFEJMGJ_OFFSET))(this, OIKFFGKDHME, GDHGIAGFBAO, AEGPAMIKIAO);
	}
};
