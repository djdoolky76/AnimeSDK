#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OJMONJELOAF.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/RtMoveStopReason.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
class BAJEFKOPOPL;
class BGMKDGACBNI;
class CENEFPOMFKG;
class CKMLAGBDPIL;
class EGINDHHBNPD;
class MACGJKCMFKP;
class OPBCNNEEFPP;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define MMINFNAMIFB_AIFBNMPDJOO_OFFSET UNITYSDK_OFFSET(0xB9D3060)
#define MMINFNAMIFB_BEMHFPJIJME_OFFSET UNITYSDK_OFFSET(0xB9D21F0)
#define MMINFNAMIFB_CPOHFAFGELG_OFFSET UNITYSDK_OFFSET(0xB9D33D0)
#define MMINFNAMIFB_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D3420)
#define MMINFNAMIFB_DNBPIGCANPC_OFFSET UNITYSDK_OFFSET(0xB9D3020)
#define MMINFNAMIFB_EJNBJPPGNJF_OFFSET UNITYSDK_OFFSET(0xB9D3330)
#define MMINFNAMIFB_GPLCPLHKDNM_OFFSET UNITYSDK_OFFSET(0xB9D30D0)
#define MMINFNAMIFB_JPCHDGKKELO_OFFSET UNITYSDK_OFFSET(0xB9D2F10)
#define MMINFNAMIFB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB9D2170)
#define MMINFNAMIFB_LDHHPDEAEFB_OFFSET UNITYSDK_OFFSET(0xB9D3180)
#define MMINFNAMIFB_LGIPJIPLMGO_OFFSET UNITYSDK_OFFSET(0xB9D30C0)
#define MMINFNAMIFB_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB9D2840)
#define MMINFNAMIFB_LNNLMNBOPCB_OFFSET UNITYSDK_OFFSET(0xB9D24F0)
#define MMINFNAMIFB_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB9D2240)
#define MMINFNAMIFB_NILKOAOEOHL_OFFSET UNITYSDK_OFFSET(0xB9D3230)

inline static constexpr unsigned int MMINFNAMIFB_TypeDefinitionIndex = 54217;

	class MMINFNAMIFB : public ::OJMONJELOAF
	{
	public:
		::System::Action* JKJJMHOMHAO; // 0x20
		::EGINDHHBNPD* ECABOCFJCND; // 0x28
		::BGMKDGACBNI* POLIHAMFHCI; // 0x30
		::RPG::GameCore::GameEntity* JLDOKCGGLAJ; // 0x38
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x40
		::CENEFPOMFKG* OCOIDGHBAEH; // 0x48
		::MACGJKCMFKP* IPEJMLAKNJH; // 0x50
		::OPBCNNEEFPP* NPMFLJPODJF; // 0x58
		::BAJEFKOPOPL* KKANBKCEJEF; // 0x60
		::System::Boolean OJNFEKBGMOG; // 0x68
		::System::Boolean OMJFOKIEEDB; // 0x69
		::System::Byte _padding0[0x2];
		::RPG::GameCore::IVec2 IKMGJIHBAAI; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMINFNAMIFB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::CKMLAGBDPIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKMLAGBDPIL*))((::PBYTE)hIl2Cpp + MMINFNAMIFB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void BEMHFPJIJME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMINFNAMIFB_BEMHFPJIJME_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMINFNAMIFB_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void LNNLMNBOPCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMINFNAMIFB_LNNLMNBOPCB_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MMINFNAMIFB_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void JPCHDGKKELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMINFNAMIFB_JPCHDGKKELO_OFFSET))(this);
		}

		::System::Boolean DNBPIGCANPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMINFNAMIFB_DNBPIGCANPC_OFFSET))(this);
		}

		::System::Void AIFBNMPDJOO(::RPG::GameCore::RtMoveStopReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtMoveStopReason))((::PBYTE)hIl2Cpp + MMINFNAMIFB_AIFBNMPDJOO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* LGIPJIPLMGO()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMINFNAMIFB_LGIPJIPLMGO_OFFSET))(this);
		}

		::RPG::GameCore::FixVec3 GPLCPLHKDNM()
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID))((::PBYTE)hIl2Cpp + MMINFNAMIFB_GPLCPLHKDNM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LDHHPDEAEFB()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + MMINFNAMIFB_LDHHPDEAEFB_OFFSET))(this);
		}

		::RPG::GameCore::IVec2 NILKOAOEOHL()
		{
			return ((::RPG::GameCore::IVec2(*)(::PVOID))((::PBYTE)hIl2Cpp + MMINFNAMIFB_NILKOAOEOHL_OFFSET))(this);
		}

		::System::Void EJNBJPPGNJF(::CENEFPOMFKG* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + MMINFNAMIFB_EJNBJPPGNJF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CPOHFAFGELG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMINFNAMIFB_CPOHFAFGELG_OFFSET))(this);
		}

	};
