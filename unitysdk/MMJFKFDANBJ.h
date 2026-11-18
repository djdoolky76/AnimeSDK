#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ZenkovYokaiHenshinSubSystem; }
namespace System { class String; }

#define MMJFKFDANBJ_ADBAHILIPIH_OFFSET UNITYSDK_OFFSET(0x177CD810)
#define MMJFKFDANBJ_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x177CD7B0)
#define MMJFKFDANBJ_IIPNPCOLMEF_OFFSET UNITYSDK_OFFSET(0x177CD880)
#define MMJFKFDANBJ_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x177CD7C0)
#define MMJFKFDANBJ_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x177CD930)
#define MMJFKFDANBJ_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x177CD7E0)
#define MMJFKFDANBJ_NNGAGOAFHPP_OFFSET UNITYSDK_OFFSET(0x177CD830)
#define MMJFKFDANBJ_ODNPMLLGJJE_OFFSET UNITYSDK_OFFSET(0x177CD7D0)
#define MMJFKFDANBJ_OEIOJMNIMGK_OFFSET UNITYSDK_OFFSET(0x177CD820)
#define MMJFKFDANBJ_OFDJMDKEMLJ_OFFSET UNITYSDK_OFFSET(0x177CD7F0)
#define MMJFKFDANBJ_OOAIABJGLON_OFFSET UNITYSDK_OFFSET(0x177CD8F0)
#define MMJFKFDANBJ_PLMPAGMICCF_OFFSET UNITYSDK_OFFSET(0x177CD800)
#define MMJFKFDANBJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x177CD9A0)
#define MMJFKFDANBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x177CD990)

inline static constexpr unsigned int MMJFKFDANBJ_TypeDefinitionIndex = 76224;

class MMJFKFDANBJ : public ::System::Object
{
public:
	static ::MMJFKFDANBJ** StaticGet_NJLLMPCDOEB()
	{
		return (::MMJFKFDANBJ**)Il2CppClass::FromTypeDefinitionIndex(MMJFKFDANBJ_TypeDefinitionIndex)->GetStaticField(0x41850);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJFKFDANBJ__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMJFKFDANBJ__CCTOR_OFFSET))();
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJFKFDANBJ_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJFKFDANBJ_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Boolean ODNPMLLGJJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJFKFDANBJ_ODNPMLLGJJE_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJFKFDANBJ_NIOLACCPKHH_OFFSET))(this);
	}

	::System::String* OFDJMDKEMLJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJFKFDANBJ_OFDJMDKEMLJ_OFFSET))(this);
	}

	::System::Int32 PLMPAGMICCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJFKFDANBJ_PLMPAGMICCF_OFFSET))(this);
	}

	::System::Int32 ADBAHILIPIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJFKFDANBJ_ADBAHILIPIH_OFFSET))(this);
	}

	::System::Boolean OEIOJMNIMGK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJFKFDANBJ_OEIOJMNIMGK_OFFSET))(this);
	}

	::System::Boolean NNGAGOAFHPP(::System::Single& EJAOAGGJHHA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MMJFKFDANBJ_NNGAGOAFHPP_OFFSET))(this, EJAOAGGJHHA);
	}

	::System::Void IIPNPCOLMEF(::System::Boolean& MJAKBLPNJKB, ::System::Single& EJAOAGGJHHA, ::System::Single& PDCFDLKMKHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MMJFKFDANBJ_IIPNPCOLMEF_OFFSET))(this, MJAKBLPNJKB, EJAOAGGJHHA, PDCFDLKMKHI);
	}

	::System::Boolean OOAIABJGLON()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJFKFDANBJ_OOAIABJGLON_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ(::System::UInt32 OIKFFGKDHME, ::System::UInt32 GDHGIAGFBAO, ::MoleMole::ZenkovYokaiHenshinSubSystem* AEGPAMIKIAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::ZenkovYokaiHenshinSubSystem*))((::PBYTE)hIl2Cpp + MMJFKFDANBJ_KDGMEFEJMGJ_OFFSET))(this, OIKFFGKDHME, GDHGIAGFBAO, AEGPAMIKIAO);
	}
};
