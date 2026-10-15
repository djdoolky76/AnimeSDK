#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNJGDLKNIEJ;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define EGPLMEHJABI_CIJOFEGLBBC_OFFSET UNITYSDK_OFFSET(0x1549C530)
#define EGPLMEHJABI_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1549C090)
#define EGPLMEHJABI_CTOR_OFFSET UNITYSDK_OFFSET(0x1549C030)
#define EGPLMEHJABI_FDIDFKOHFGF_OFFSET UNITYSDK_OFFSET(0x1549C3B0)
#define EGPLMEHJABI_FMOHKGOKAKM_OFFSET UNITYSDK_OFFSET(0x1549C940)
#define EGPLMEHJABI_IPFDPNFPINH_OFFSET UNITYSDK_OFFSET(0x1549CA80)
#define EGPLMEHJABI_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x1549C040)
#define EGPLMEHJABI_MJHOFDINOOM_OFFSET UNITYSDK_OFFSET(0x1549C7A0)
#define EGPLMEHJABI_NBMGPMBMKJI_OFFSET UNITYSDK_OFFSET(0x1549CB60)
#define EGPLMEHJABI_NKNNIDKJKOJ_OFFSET UNITYSDK_OFFSET(0x1549CCA0)

	class EGPLMEHJABI : public ::System::Object
	{
	public:
		::BNJGDLKNIEJ* FGHLCBFGPEE; // 0x10
		::System::Void _ctor(::BNJGDLKNIEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNJGDLKNIEJ*))((::PBYTE)hIl2Cpp + EGPLMEHJABI_CTOR_OFFSET))(this, a1);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLMEHJABI_MHFNJCLKNMG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CLJEBKODGHK(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGPLMEHJABI_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* CIJOFEGLBBC()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLMEHJABI_CIJOFEGLBBC_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* MJHOFDINOOM()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLMEHJABI_MJHOFDINOOM_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* FDIDFKOHFGF()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLMEHJABI_FDIDFKOHFGF_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* FMOHKGOKAKM()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLMEHJABI_FMOHKGOKAKM_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* IPFDPNFPINH()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLMEHJABI_IPFDPNFPINH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NBMGPMBMKJI()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLMEHJABI_NBMGPMBMKJI_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NKNNIDKJKOJ()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLMEHJABI_NKNNIDKJKOJ_OFFSET))(this);
		}

	};
