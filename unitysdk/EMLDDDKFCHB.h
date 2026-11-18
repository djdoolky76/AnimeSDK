#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGAANNPEJCH.h"
#include "unitysdk/JGELKBLKFHE.h"

class HGIDAMPAOGK;
class HIHFLCENJHL;
class OIOOCHECLNI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EMLDDDKFCHB_ANFHCPHIFOB_OFFSET UNITYSDK_OFFSET(0x158C13E0)
#define EMLDDDKFCHB_DLGGHDKBECF_OFFSET UNITYSDK_OFFSET(0x158C0D20)
#define EMLDDDKFCHB_ILHLHIGJKJA_OFFSET UNITYSDK_OFFSET(0x158C0A60)
#define EMLDDDKFCHB_KGMMMFENADK_OFFSET UNITYSDK_OFFSET(0x158C1180)
#define EMLDDDKFCHB_LJNBDPHJCAJ_OFFSET UNITYSDK_OFFSET(0x158C0930)
#define EMLDDDKFCHB_PIMNKDMNLOI_OFFSET UNITYSDK_OFFSET(0x158C0C80)
#define EMLDDDKFCHB__CTOR_OFFSET UNITYSDK_OFFSET(0x158C0920)

inline static constexpr unsigned int EMLDDDKFCHB_TypeDefinitionIndex = 92723;

class EMLDDDKFCHB : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::List_1<::OIOOCHECLNI*>* DLEJKJLNHEG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDDDKFCHB__CTOR_OFFSET))(this);
	}

	::HIHFLCENJHL* LJNBDPHJCAJ()
	{
		return ((::HIHFLCENJHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDDDKFCHB_LJNBDPHJCAJ_OFFSET))(this);
	}

	::System::Void ILHLHIGJKJA(::System::Int32 PAEEEHKILOC, ::EGAANNPEJCH HCKDKJHAOMF, ::System::Action* EDNJGMKPFHG, ::System::Action* OLBAKFLBNIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::EGAANNPEJCH, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + EMLDDDKFCHB_ILHLHIGJKJA_OFFSET))(this, PAEEEHKILOC, HCKDKJHAOMF, EDNJGMKPFHG, OLBAKFLBNIG);
	}

	::System::Collections::Generic::List_1<::OIOOCHECLNI*>* PIMNKDMNLOI()
	{
		return ((::System::Collections::Generic::List_1<::OIOOCHECLNI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDDDKFCHB_PIMNKDMNLOI_OFFSET))(this);
	}

	static ::System::Void KGMMMFENADK(::System::Boolean PNKANGKBJEP)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + EMLDDDKFCHB_KGMMMFENADK_OFFSET))(PNKANGKBJEP);
	}

	::System::Void ANFHCPHIFOB(::HGIDAMPAOGK* FKNFHGLBPHF)
	{
		return ((::System::Void(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + EMLDDDKFCHB_ANFHCPHIFOB_OFFSET))(this, FKNFHGLBPHF);
	}

	::System::Void DLGGHDKBECF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDDDKFCHB_DLGGHDKBECF_OFFSET))(this);
	}
};
