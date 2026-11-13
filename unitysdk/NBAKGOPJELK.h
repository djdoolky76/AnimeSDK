#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCLPKMIIANI.h"
class AFEPOFEOCDI;
class IAJLHKIHBFB;
class JCDLGNPBKEN;
class OMPCEECHGJK;
namespace RPG::Client { class PingPongModule_PingPongAddPointUIInfo; }
namespace RPG::Client { class PingPongModule_PingPongUIInfo; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class Action; }
namespace System { class String; }

#define NBAKGOPJELK_BHEIANKOOPN_OFFSET UNITYSDK_OFFSET(0x1BB0D300)
#define NBAKGOPJELK_CJIPIGDIDDD_OFFSET UNITYSDK_OFFSET(0x1BB0D7A0)
#define NBAKGOPJELK_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0ECB0)
#define NBAKGOPJELK_GETENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1BB0E450)
#define NBAKGOPJELK_GETLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1BB0D240)
#define NBAKGOPJELK_GIJLAFIBMCG_OFFSET UNITYSDK_OFFSET(0x1BB0E740)
#define NBAKGOPJELK_GLAGFNGFBCD_OFFSET UNITYSDK_OFFSET(0x1BB0D990)
#define NBAKGOPJELK_ICENDBFOHMK_OFFSET UNITYSDK_OFFSET(0x1BB0EB90)
#define NBAKGOPJELK_ICFIMFHCKDG_OFFSET UNITYSDK_OFFSET(0x1BB0EB20)
#define NBAKGOPJELK_IFLMKGFCBOO_OFFSET UNITYSDK_OFFSET(0x1BB0DB20)
#define NBAKGOPJELK_JDBEJCHBACO_OFFSET UNITYSDK_OFFSET(0x1BB0D450)
#define NBAKGOPJELK_KCNIJHILADH_OFFSET UNITYSDK_OFFSET(0x1BB0E8B0)
#define NBAKGOPJELK_KLJDINJODIP_OFFSET UNITYSDK_OFFSET(0x1BB0E960)
#define NBAKGOPJELK_NFAFFKFBHKJ_OFFSET UNITYSDK_OFFSET(0x1BB0EA40)
#define NBAKGOPJELK_NLAJGPMMGCL_OFFSET UNITYSDK_OFFSET(0x1BB0DEF0)
#define NBAKGOPJELK_NMLPOLAMHPB_OFFSET UNITYSDK_OFFSET(0x1BB0DA70)
#define NBAKGOPJELK_PEGEBNACNCL_OFFSET UNITYSDK_OFFSET(0x1BB0D1D0)
#define NBAKGOPJELK_PGCBCKNNCGH_OFFSET UNITYSDK_OFFSET(0x1BB0DEB0)
#define NBAKGOPJELK_PIJAPGGFIEK_OFFSET UNITYSDK_OFFSET(0x1BB0E4C0)
#define NBAKGOPJELK__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BB0DC80)
#define NBAKGOPJELK__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1BB0DD30)
#define NBAKGOPJELK__ONINIT_OFFSET UNITYSDK_OFFSET(0x1BB0D280)
#define NBAKGOPJELK__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BB0DCC0)
#define NBAKGOPJELK__ONSTART_OFFSET UNITYSDK_OFFSET(0x1BB0D340)
#define NBAKGOPJELK__ONTICK_OFFSET UNITYSDK_OFFSET(0x1BB0DC10)
#define NBAKGOPJELK___ONSTART_B__3_0_OFFSET UNITYSDK_OFFSET(0x1BB0ED40)

inline static constexpr unsigned int NBAKGOPJELK_TypeDefinitionIndex = 61719;

	class NBAKGOPJELK : public ::HCLPKMIIANI
	{
	public:
		::JCDLGNPBKEN* JEIALFDCPND; // 0x78
		::AFEPOFEOCDI* FKINCGODJEP; // 0x80
		::OMPCEECHGJK* PDENFEFCAGN; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_CTOR_OFFSET))(this);
		}

		::System::Boolean PEGEBNACNCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_PEGEBNACNCL_OFFSET))(this);
		}

		::RPG::GameCore::LittleGameLevelConfig* GetLevelConfig()
		{
			return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_GETLEVELCONFIG_OFFSET))(this);
		}

		::System::Void _OnInit(::IAJLHKIHBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLHKIHBFB*))((::PBYTE)hIl2Cpp + NBAKGOPJELK__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK__ONSTART_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBAKGOPJELK__ONTICK_OFFSET))(this, a1);
		}

		::System::Boolean _CanLateUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK__CANLATEUPDATE_OFFSET))(this);
		}

		::System::Void _OnLateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBAKGOPJELK__ONLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK__ONCLEAR_OFFSET))(this);
		}

		::System::String* GetEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_GETENTITYNAME_OFFSET))(this);
		}

		::System::Void PIJAPGGFIEK(::RPG::Client::PingPongModule_PingPongUIInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PingPongModule_PingPongUIInfo*))((::PBYTE)hIl2Cpp + NBAKGOPJELK_PIJAPGGFIEK_OFFSET))(this, a1);
		}

		::System::Void GIJLAFIBMCG(::RPG::Client::PingPongModule_PingPongAddPointUIInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PingPongModule_PingPongAddPointUIInfo*))((::PBYTE)hIl2Cpp + NBAKGOPJELK_GIJLAFIBMCG_OFFSET))(this, a1);
		}

		::System::Void CJIPIGDIDDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_CJIPIGDIDDD_OFFSET))(this);
		}

		::System::Void NMLPOLAMHPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_NMLPOLAMHPB_OFFSET))(this);
		}

		::System::Void GLAGFNGFBCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_GLAGFNGFBCD_OFFSET))(this);
		}

		::System::Void IFLMKGFCBOO(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NBAKGOPJELK_IFLMKGFCBOO_OFFSET))(this, a1);
		}

		::System::Void KCNIJHILADH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_KCNIJHILADH_OFFSET))(this);
		}

		::System::Void ICFIMFHCKDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_ICFIMFHCKDG_OFFSET))(this);
		}

		::System::Void ICENDBFOHMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_ICENDBFOHMK_OFFSET))(this);
		}

		::System::Void KLJDINJODIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_KLJDINJODIP_OFFSET))(this);
		}

		::System::Void NFAFFKFBHKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_NFAFFKFBHKJ_OFFSET))(this);
		}

		::System::Void BHEIANKOOPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_BHEIANKOOPN_OFFSET))(this);
		}

		::System::Void PGCBCKNNCGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_PGCBCKNNCGH_OFFSET))(this);
		}

		::System::Void JDBEJCHBACO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_JDBEJCHBACO_OFFSET))(this);
		}

		::System::Void NLAJGPMMGCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK_NLAJGPMMGCL_OFFSET))(this);
		}

		::System::Void __OnStart_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKGOPJELK___ONSTART_B__3_0_OFFSET))(this);
		}

	};
