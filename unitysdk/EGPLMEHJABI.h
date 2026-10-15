#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNJGDLKNIEJ;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define EGPLMEHJABI_CIJOFEGLBBC_OFFSET UNITYSDK_OFFSET(0x15490910)
#define EGPLMEHJABI_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x15490470)
#define EGPLMEHJABI_CTOR_OFFSET UNITYSDK_OFFSET(0x15490410)
#define EGPLMEHJABI_FDIDFKOHFGF_OFFSET UNITYSDK_OFFSET(0x15490790)
#define EGPLMEHJABI_FMOHKGOKAKM_OFFSET UNITYSDK_OFFSET(0x15490D20)
#define EGPLMEHJABI_IPFDPNFPINH_OFFSET UNITYSDK_OFFSET(0x15490E60)
#define EGPLMEHJABI_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x15490420)
#define EGPLMEHJABI_MJHOFDINOOM_OFFSET UNITYSDK_OFFSET(0x15490B80)
#define EGPLMEHJABI_NBMGPMBMKJI_OFFSET UNITYSDK_OFFSET(0x15490F40)
#define EGPLMEHJABI_NKNNIDKJKOJ_OFFSET UNITYSDK_OFFSET(0x15491080)

inline static constexpr unsigned int EGPLMEHJABI_TypeDefinitionIndex = 77729;

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
