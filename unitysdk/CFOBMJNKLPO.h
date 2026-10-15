#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
class FMHEHLIFNGJ;
namespace RPG::Client { class MarbleModule; }
namespace RPG::Client::ActivityMarble { class MarbleMatchContext; }
namespace RPG::Client::ActivityMarble { class MarblePVPMatchContext; }
namespace System { class Action; }

#define CFOBMJNKLPO_CKBJLONFGBD_OFFSET UNITYSDK_OFFSET(0xCC59670)
#define CFOBMJNKLPO_CTOR_OFFSET UNITYSDK_OFFSET(0xCC595C0)
#define CFOBMJNKLPO_DPKEMGPDHHF_OFFSET UNITYSDK_OFFSET(0xCC59710)
#define CFOBMJNKLPO_EBHCMOFJAAH_OFFSET UNITYSDK_OFFSET(0xCC59B70)
#define CFOBMJNKLPO_EIIDAAAGLOG_OFFSET UNITYSDK_OFFSET(0xCC59620)
#define CFOBMJNKLPO_FMHGNIEGKCJ_OFFSET UNITYSDK_OFFSET(0xCC59840)
#define CFOBMJNKLPO_GMBJKKPCOBK_OFFSET UNITYSDK_OFFSET(0xCC59A20)
#define CFOBMJNKLPO_GNEPNHOFNJD_OFFSET UNITYSDK_OFFSET(0xCC59CD0)
#define CFOBMJNKLPO_HFPODBLDFOI_OFFSET UNITYSDK_OFFSET(0xCC595D0)
#define CFOBMJNKLPO_JGNEAGGGJKK_OFFSET UNITYSDK_OFFSET(0xCC597F0)
#define CFOBMJNKLPO_KBJEGLNKKEB_OFFSET UNITYSDK_OFFSET(0xCC598C0)
#define CFOBMJNKLPO_KGNLBAMENIJ_OFFSET UNITYSDK_OFFSET(0xCC59790)
#define CFOBMJNKLPO_KNGHLGMFNIF_OFFSET UNITYSDK_OFFSET(0xCC59950)
#define CFOBMJNKLPO_NKNAMNHNKIE_OFFSET UNITYSDK_OFFSET(0xCC59A60)
#define CFOBMJNKLPO_OEBJKAGPDAG_OFFSET UNITYSDK_OFFSET(0xCC599D0)

	class CFOBMJNKLPO : public ::System::Object
	{
	public:
		::RPG::Client::MarbleModule* OJMMJIALPON; // 0x10
		::System::Void _ctor(::RPG::Client::MarbleModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MarbleModule*))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_CTOR_OFFSET))(this, a1);
		}

		::FJPMJPEKLJL HFPODBLDFOI()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_HFPODBLDFOI_OFFSET))(this);
		}

		::System::Boolean EIIDAAAGLOG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_EIIDAAAGLOG_OFFSET))(this);
		}

		::System::Void CKBJLONFGBD(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_CKBJLONFGBD_OFFSET))(this, a1);
		}

		::System::Void DPKEMGPDHHF(::RPG::Client::ActivityMarble::MarbleMatchContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleMatchContext*))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_DPKEMGPDHHF_OFFSET))(this, a1);
		}

		::System::Void KGNLBAMENIJ(::RPG::Client::ActivityMarble::MarbleMatchContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleMatchContext*))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_KGNLBAMENIJ_OFFSET))(this, a1);
		}

		::System::Void JGNEAGGGJKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_JGNEAGGGJKK_OFFSET))(this);
		}

		::System::UInt32 FMHGNIEGKCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_FMHGNIEGKCJ_OFFSET))(this);
		}

		::System::Boolean KBJEGLNKKEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_KBJEGLNKKEB_OFFSET))(this);
		}

		::System::Boolean KNGHLGMFNIF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_KNGHLGMFNIF_OFFSET))(this, a1);
		}

		::System::UInt32 OEBJKAGPDAG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_OEBJKAGPDAG_OFFSET))(this);
		}

		::FMHEHLIFNGJ* GMBJKKPCOBK()
		{
			return ((::FMHEHLIFNGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_GMBJKKPCOBK_OFFSET))(this);
		}

		::System::UInt32 NKNAMNHNKIE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_NKNAMNHNKIE_OFFSET))(this);
		}

		::System::Void EBHCMOFJAAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_EBHCMOFJAAH_OFFSET))(this);
		}

		::System::Void GNEPNHOFNJD(::RPG::Client::ActivityMarble::MarblePVPMatchContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMatchContext*))((::PBYTE)hIl2Cpp + CFOBMJNKLPO_GNEPNHOFNJD_OFFSET))(this, a1);
		}

	};
