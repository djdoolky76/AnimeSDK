#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PKOKFINBMPP_BKGIMLIFPAO_OFFSET UNITYSDK_OFFSET(0x1E302420)
#define PKOKFINBMPP_CPPNPLHNKLL_OFFSET UNITYSDK_OFFSET(0x1E3023D0)
#define PKOKFINBMPP_DLHCCLMMJKP_OFFSET UNITYSDK_OFFSET(0x1E302370)
#define PKOKFINBMPP_IJKICOOEIIM_OFFSET UNITYSDK_OFFSET(0x1E302430)
#define PKOKFINBMPP_LIPACPAGDLM_OFFSET UNITYSDK_OFFSET(0x1E302480)
#define PKOKFINBMPP_NCPJFFLGLMF_OFFSET UNITYSDK_OFFSET(0x1E302380)
#define PKOKFINBMPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E302360)

inline static constexpr unsigned int PKOKFINBMPP_TypeDefinitionIndex = 93905;

class PKOKFINBMPP : public ::System::Object
{
public:
	::System::UInt16 JHEAMKIIFOG; // 0x10
	::System::UInt16 PCHGOCPOJAH; // 0x12
	::System::UInt16 DMPDJDFLBIE; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOKFINBMPP__CTOR_OFFSET))(this);
	}

	::System::UInt16 DLHCCLMMJKP()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOKFINBMPP_DLHCCLMMJKP_OFFSET))(this);
	}

	::System::UInt16 NCPJFFLGLMF()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOKFINBMPP_NCPJFFLGLMF_OFFSET))(this);
	}

	::System::UInt16 CPPNPLHNKLL()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOKFINBMPP_CPPNPLHNKLL_OFFSET))(this);
	}

	::System::UInt16 BKGIMLIFPAO()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOKFINBMPP_BKGIMLIFPAO_OFFSET))(this);
	}

	::System::UInt16 IJKICOOEIIM()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOKFINBMPP_IJKICOOEIIM_OFFSET))(this);
	}

	::System::UInt16 LIPACPAGDLM()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOKFINBMPP_LIPACPAGDLM_OFFSET))(this);
	}
};
