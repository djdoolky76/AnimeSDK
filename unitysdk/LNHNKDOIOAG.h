#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
class BMICACAAOGP;
class KAOOFGPIBGF;
class OPBCNNEEFPP;
namespace RPG::GameCore { class GameEntity; }

#define LNHNKDOIOAG_BCOKEPEBNLJ_OFFSET UNITYSDK_OFFSET(0xB7DCBE0)
#define LNHNKDOIOAG_CJNDJOLIPMD_OFFSET UNITYSDK_OFFSET(0xB7DCE70)
#define LNHNKDOIOAG_CKOPDOBCLEK_OFFSET UNITYSDK_OFFSET(0xB7DCB00)
#define LNHNKDOIOAG_CMBJMDHJPMA_OFFSET UNITYSDK_OFFSET(0xB7DC800)
#define LNHNKDOIOAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7DCEA0)
#define LNHNKDOIOAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7DC9A0)
#define LNHNKDOIOAG_EADIELKMELL_OFFSET UNITYSDK_OFFSET(0xB7DCD40)
#define LNHNKDOIOAG_FGHPIAJFMLP_OFFSET UNITYSDK_OFFSET(0xB7DCCE0)
#define LNHNKDOIOAG_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xB7DCE80)
#define LNHNKDOIOAG_IAJJDPLNLFH_OFFSET UNITYSDK_OFFSET(0xB7DCBA0)
#define LNHNKDOIOAG_IPMLKFGDOBD_OFFSET UNITYSDK_OFFSET(0xB7DCA80)
#define LNHNKDOIOAG_LHMKCOHPLMN_OFFSET UNITYSDK_OFFSET(0xB7DCBC0)
#define LNHNKDOIOAG_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB7DC750)
#define LNHNKDOIOAG_NGIBIIOBKNP_OFFSET UNITYSDK_OFFSET(0xB7DCB50)
#define LNHNKDOIOAG_NMILMADLNKN_OFFSET UNITYSDK_OFFSET(0xB7DCC50)
#define LNHNKDOIOAG_NNCMPKBJCDO_OFFSET UNITYSDK_OFFSET(0xB7DCBD0)
#define LNHNKDOIOAG_OIDADHCOKEP_OFFSET UNITYSDK_OFFSET(0xB7DCBB0)
#define LNHNKDOIOAG_PNJPNKJHKLB_OFFSET UNITYSDK_OFFSET(0xB7DCBF0)
#define LNHNKDOIOAG_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xB7DCE90)
#define LNHNKDOIOAG__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB7DC6A0)

inline static constexpr unsigned int LNHNKDOIOAG_TypeDefinitionIndex = 54202;

	class LNHNKDOIOAG : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::KAOOFGPIBGF* NFJMPCJFBGB; // 0x18
		::OPBCNNEEFPP* MMAALAIAJHB; // 0x20
		::BMICACAAOGP* OPJDLPLGCCO; // 0x28
		::System::Int32 _Order_k__BackingField; // 0x30
		::System::Boolean OCCMBJLCEJI; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHNKDOIOAG__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::IVec2 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IVec2, ::System::Boolean))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_LMCEDCHJKFF_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_DISPOSE_OFFSET))(this);
		}

		::System::Void IPMLKFGDOBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_IPMLKFGDOBD_OFFSET))(this);
		}

		::System::Boolean CMBJMDHJPMA(::RPG::GameCore::IVec2 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2, ::System::Boolean))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_CMBJMDHJPMA_OFFSET))(this, a1, a2);
		}

		::System::Void CKOPDOBCLEK(::BMICACAAOGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMICACAAOGP*))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_CKOPDOBCLEK_OFFSET))(this, a1);
		}

		::System::Void NGIBIIOBKNP(::BMICACAAOGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMICACAAOGP*))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_NGIBIIOBKNP_OFFSET))(this, a1);
		}

		::OPBCNNEEFPP* IAJJDPLNLFH()
		{
			return ((::OPBCNNEEFPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_IAJJDPLNLFH_OFFSET))(this);
		}

		::System::Boolean OIDADHCOKEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_OIDADHCOKEP_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* LHMKCOHPLMN()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_LHMKCOHPLMN_OFFSET))(this);
		}

		::KAOOFGPIBGF* NNCMPKBJCDO()
		{
			return ((::KAOOFGPIBGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_NNCMPKBJCDO_OFFSET))(this);
		}

		::BMICACAAOGP* BCOKEPEBNLJ()
		{
			return ((::BMICACAAOGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_BCOKEPEBNLJ_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* PNJPNKJHKLB()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_PNJPNKJHKLB_OFFSET))(this);
		}

		::RPG::GameCore::IVec2 NMILMADLNKN()
		{
			return ((::RPG::GameCore::IVec2(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_NMILMADLNKN_OFFSET))(this);
		}

		::System::Void FGHPIAJFMLP(::RPG::GameCore::IVec2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_FGHPIAJFMLP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixVec3 EADIELKMELL()
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_EADIELKMELL_OFFSET))(this);
		}

		::System::Boolean CJNDJOLIPMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_CJNDJOLIPMD_OFFSET))(this);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LNHNKDOIOAG_SET_ORDER_OFFSET))(this, a1);
		}

	};
