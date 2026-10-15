#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
class FMHEHLIFNGJ;
namespace RPG::Client { class MarbleModule; }
namespace RPG::Client::ActivityMarble { class MarbleMatchContext; }
namespace RPG::Client::ActivityMarble { class MarblePVPMatchContext; }
namespace System { class Action; }

#define IHMLICJHPKA_CKBJLONFGBD_OFFSET UNITYSDK_OFFSET(0x16425B10)
#define IHMLICJHPKA_CTOR_OFFSET UNITYSDK_OFFSET(0x16425A60)
#define IHMLICJHPKA_DPKEMGPDHHF_OFFSET UNITYSDK_OFFSET(0x16425BB0)
#define IHMLICJHPKA_EBHCMOFJAAH_OFFSET UNITYSDK_OFFSET(0x16426010)
#define IHMLICJHPKA_EIIDAAAGLOG_OFFSET UNITYSDK_OFFSET(0x16425AC0)
#define IHMLICJHPKA_FMHGNIEGKCJ_OFFSET UNITYSDK_OFFSET(0x16425CE0)
#define IHMLICJHPKA_GMBJKKPCOBK_OFFSET UNITYSDK_OFFSET(0x16425EC0)
#define IHMLICJHPKA_GNEPNHOFNJD_OFFSET UNITYSDK_OFFSET(0x16426140)
#define IHMLICJHPKA_HFPODBLDFOI_OFFSET UNITYSDK_OFFSET(0x16425A70)
#define IHMLICJHPKA_JGNEAGGGJKK_OFFSET UNITYSDK_OFFSET(0x16425C90)
#define IHMLICJHPKA_KBJEGLNKKEB_OFFSET UNITYSDK_OFFSET(0x16425D60)
#define IHMLICJHPKA_KGNLBAMENIJ_OFFSET UNITYSDK_OFFSET(0x16425C30)
#define IHMLICJHPKA_KNGHLGMFNIF_OFFSET UNITYSDK_OFFSET(0x16425DF0)
#define IHMLICJHPKA_NKNAMNHNKIE_OFFSET UNITYSDK_OFFSET(0x16425F00)
#define IHMLICJHPKA_OEBJKAGPDAG_OFFSET UNITYSDK_OFFSET(0x16425E70)

	class IHMLICJHPKA : public ::System::Object
	{
	public:
		::RPG::Client::MarbleModule* OJMMJIALPON; // 0x10
		::System::Void _ctor(::RPG::Client::MarbleModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MarbleModule*))((::PBYTE)hIl2Cpp + IHMLICJHPKA_CTOR_OFFSET))(this, a1);
		}

		::FJPMJPEKLJL HFPODBLDFOI()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMLICJHPKA_HFPODBLDFOI_OFFSET))(this);
		}

		::System::Boolean EIIDAAAGLOG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMLICJHPKA_EIIDAAAGLOG_OFFSET))(this);
		}

		::System::Void CKBJLONFGBD(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IHMLICJHPKA_CKBJLONFGBD_OFFSET))(this, a1);
		}

		::System::Void DPKEMGPDHHF(::RPG::Client::ActivityMarble::MarbleMatchContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleMatchContext*))((::PBYTE)hIl2Cpp + IHMLICJHPKA_DPKEMGPDHHF_OFFSET))(this, a1);
		}

		::System::Void KGNLBAMENIJ(::RPG::Client::ActivityMarble::MarbleMatchContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleMatchContext*))((::PBYTE)hIl2Cpp + IHMLICJHPKA_KGNLBAMENIJ_OFFSET))(this, a1);
		}

		::System::Void JGNEAGGGJKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMLICJHPKA_JGNEAGGGJKK_OFFSET))(this);
		}

		::System::UInt32 FMHGNIEGKCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMLICJHPKA_FMHGNIEGKCJ_OFFSET))(this);
		}

		::System::Boolean KBJEGLNKKEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMLICJHPKA_KBJEGLNKKEB_OFFSET))(this);
		}

		::System::Boolean KNGHLGMFNIF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHMLICJHPKA_KNGHLGMFNIF_OFFSET))(this, a1);
		}

		::System::UInt32 OEBJKAGPDAG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMLICJHPKA_OEBJKAGPDAG_OFFSET))(this);
		}

		::FMHEHLIFNGJ* GMBJKKPCOBK()
		{
			return ((::FMHEHLIFNGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMLICJHPKA_GMBJKKPCOBK_OFFSET))(this);
		}

		::System::UInt32 NKNAMNHNKIE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMLICJHPKA_NKNAMNHNKIE_OFFSET))(this);
		}

		::System::Void EBHCMOFJAAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMLICJHPKA_EBHCMOFJAAH_OFFSET))(this);
		}

		::System::Void GNEPNHOFNJD(::RPG::Client::ActivityMarble::MarblePVPMatchContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMatchContext*))((::PBYTE)hIl2Cpp + IHMLICJHPKA_GNEPNHOFNJD_OFFSET))(this, a1);
		}

	};
