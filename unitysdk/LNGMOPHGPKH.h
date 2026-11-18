#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class MonoHackProgressItem; }
namespace MoleMole { class UIControlCollection; }

#define LNGMOPHGPKH_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x156780B0)
#define LNGMOPHGPKH_IKFCJJCCHPN_OFFSET UNITYSDK_OFFSET(0x156782A0)
#define LNGMOPHGPKH_JBHHDHEEPIN_OFFSET UNITYSDK_OFFSET(0x15678290)
#define LNGMOPHGPKH_NGOCJDJIFNO_OFFSET UNITYSDK_OFFSET(0x15678280)
#define LNGMOPHGPKH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15677FD0)
#define LNGMOPHGPKH_PMEIBMCDHCN_OFFSET UNITYSDK_OFFSET(0x156782B0)
#define LNGMOPHGPKH__CTOR_OFFSET UNITYSDK_OFFSET(0x156781F0)

inline static constexpr unsigned int LNGMOPHGPKH_TypeDefinitionIndex = 49277;

class LNGMOPHGPKH : public ::IOOIHHOJOPI
{
public:
	::GCIMMDDIFBJ* _ANNBEOHEGIG_k__BackingField; // 0x28
	::MoleMole::MonoHackProgressItem* _GNHFHDIPKDI_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGMOPHGPKH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNGMOPHGPKH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void NGOCJDJIFNO(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + LNGMOPHGPKH_NGOCJDJIFNO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGMOPHGPKH_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void JBHHDHEEPIN(::MoleMole::MonoHackProgressItem* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoHackProgressItem*))((::PBYTE)hIl2Cpp + LNGMOPHGPKH_JBHHDHEEPIN_OFFSET))(this, EGEGIMGMJHN);
	}

	::GCIMMDDIFBJ* IKFCJJCCHPN()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGMOPHGPKH_IKFCJJCCHPN_OFFSET))(this);
	}

	::MoleMole::MonoHackProgressItem* PMEIBMCDHCN()
	{
		return ((::MoleMole::MonoHackProgressItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGMOPHGPKH_PMEIBMCDHCN_OFFSET))(this);
	}
};
