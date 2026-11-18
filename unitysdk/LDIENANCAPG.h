#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCMJNECADGK.h"
#include "unitysdk/EJPFPDLFPEN.h"
#include "unitysdk/IMPGHLBGMNJ.h"

class KCKJCNDLCEM;
namespace MoleMole::Config { class ButtonQTETaskEntryBase; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }

#define LDIENANCAPG_AOFGNDEEJFK_OFFSET UNITYSDK_OFFSET(0x17739C90)
#define LDIENANCAPG_DNAKACNGFMC_OFFSET UNITYSDK_OFFSET(0x17739E50)
#define LDIENANCAPG_GOBOHIKPBMI_OFFSET UNITYSDK_OFFSET(0x17739EC0)
#define LDIENANCAPG_IJOCPOKBNEN_OFFSET UNITYSDK_OFFSET(0x17739C50)
#define LDIENANCAPG_IMEEMFNECIJ_OFFSET UNITYSDK_OFFSET(0x17739D10)
#define LDIENANCAPG_JLGPJGAOOPC_OFFSET UNITYSDK_OFFSET(0x17739BD0)
#define LDIENANCAPG_KAJKGHMFAEC_OFFSET UNITYSDK_OFFSET(0x17739BC0)
#define LDIENANCAPG_KLHELOJNGON_OFFSET UNITYSDK_OFFSET(0x17739F20)
#define LDIENANCAPG_NBILDPGEBDD_OFFSET UNITYSDK_OFFSET(0x17739CD0)
#define LDIENANCAPG_NIBDOAOFBOC_OFFSET UNITYSDK_OFFSET(0x17739DF0)
#define LDIENANCAPG__CTOR_OFFSET UNITYSDK_OFFSET(0x17739BE0)

inline static constexpr unsigned int LDIENANCAPG_TypeDefinitionIndex = 49991;

class LDIENANCAPG : public ::BCMJNECADGK
{
public:
	::MoleMole::Config::ButtonQTETaskEntryBase* IBOHLMPMGMN; // 0x38

	::System::Void _ctor(::MoleMole::Config::RealtimeQTETaskEntryBase* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RealtimeQTETaskEntryBase*))((::PBYTE)hIl2Cpp + LDIENANCAPG__CTOR_OFFSET))(this, AAIJGGIEOGK);
	}

	::IMPGHLBGMNJ KAJKGHMFAEC()
	{
		return ((::IMPGHLBGMNJ(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIENANCAPG_KAJKGHMFAEC_OFFSET))(this);
	}

	::EJPFPDLFPEN JLGPJGAOOPC()
	{
		return ((::EJPFPDLFPEN(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIENANCAPG_JLGPJGAOOPC_OFFSET))(this);
	}

	::System::Void IJOCPOKBNEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIENANCAPG_IJOCPOKBNEN_OFFSET))(this);
	}

	::System::Void AOFGNDEEJFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIENANCAPG_AOFGNDEEJFK_OFFSET))(this);
	}

	::System::Void NBILDPGEBDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIENANCAPG_NBILDPGEBDD_OFFSET))(this);
	}

	::KCKJCNDLCEM* IMEEMFNECIJ()
	{
		return ((::KCKJCNDLCEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIENANCAPG_IMEEMFNECIJ_OFFSET))(this);
	}

	::System::Void NIBDOAOFBOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIENANCAPG_NIBDOAOFBOC_OFFSET))(this);
	}

	::System::Void DNAKACNGFMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIENANCAPG_DNAKACNGFMC_OFFSET))(this);
	}

	::System::Void GOBOHIKPBMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIENANCAPG_GOBOHIKPBMI_OFFSET))(this);
	}

	::System::Void KLHELOJNGON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIENANCAPG_KLHELOJNGON_OFFSET))(this);
	}
};
