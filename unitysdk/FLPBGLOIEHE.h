#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class NCGPIKOCNNL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLPBGLOIEHE_ALKENBJJKDN_OFFSET UNITYSDK_OFFSET(0x158443E0)
#define FLPBGLOIEHE_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0x15843C90)
#define FLPBGLOIEHE_CTOR_OFFSET UNITYSDK_OFFSET(0x15844420)
#define FLPBGLOIEHE_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15843BB0)
#define FLPBGLOIEHE_EHABAPJLEGL_OFFSET UNITYSDK_OFFSET(0x15844390)
#define FLPBGLOIEHE_FKMDEFDJPAI_OFFSET UNITYSDK_OFFSET(0x158442C0)
#define FLPBGLOIEHE_IHJNDOCFMHM_OFFSET UNITYSDK_OFFSET(0x15843A30)
#define FLPBGLOIEHE_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x15843F20)
#define FLPBGLOIEHE_MKHFOBCLIHH_OFFSET UNITYSDK_OFFSET(0x15844310)
#define FLPBGLOIEHE_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15843ED0)
#define FLPBGLOIEHE_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15843C30)
#define FLPBGLOIEHE__ONBIND_OFFSET UNITYSDK_OFFSET(0x15843610)

	class FLPBGLOIEHE : public ::FMPCODLIOLG
	{
	public:
		::System::Action* FMIPFDBCILF; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::System::Collections::Generic::List_1<::NCGPIKOCNNL*>* MJEEJKIIIMN; // 0x70
		::System::Boolean EINNACFPAEN; // 0x78
		::System::Boolean KICAHMGNMED; // 0x79
		::System::Boolean OLENFKOCMNA; // 0x7A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPBGLOIEHE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPBGLOIEHE__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FLPBGLOIEHE_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPBGLOIEHE_ONRETURN_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FLPBGLOIEHE_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FLPBGLOIEHE_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Void FKMDEFDJPAI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLPBGLOIEHE_FKMDEFDJPAI_OFFSET))(this, a1);
		}

		::System::Void MKHFOBCLIHH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLPBGLOIEHE_MKHFOBCLIHH_OFFSET))(this, a1);
		}

		::System::Void EHABAPJLEGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPBGLOIEHE_EHABAPJLEGL_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPBGLOIEHE_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void IHJNDOCFMHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPBGLOIEHE_IHJNDOCFMHM_OFFSET))(this);
		}

		::System::Boolean ALKENBJJKDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPBGLOIEHE_ALKENBJJKDN_OFFSET))(this);
		}

	};
