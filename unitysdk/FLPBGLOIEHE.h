#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class NCGPIKOCNNL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLPBGLOIEHE_ALKENBJJKDN_OFFSET UNITYSDK_OFFSET(0x15838720)
#define FLPBGLOIEHE_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0x15837FD0)
#define FLPBGLOIEHE_CTOR_OFFSET UNITYSDK_OFFSET(0x15838760)
#define FLPBGLOIEHE_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15837EF0)
#define FLPBGLOIEHE_EHABAPJLEGL_OFFSET UNITYSDK_OFFSET(0x158386D0)
#define FLPBGLOIEHE_FKMDEFDJPAI_OFFSET UNITYSDK_OFFSET(0x15838600)
#define FLPBGLOIEHE_IHJNDOCFMHM_OFFSET UNITYSDK_OFFSET(0x15837D70)
#define FLPBGLOIEHE_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x15838260)
#define FLPBGLOIEHE_MKHFOBCLIHH_OFFSET UNITYSDK_OFFSET(0x15838650)
#define FLPBGLOIEHE_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15838210)
#define FLPBGLOIEHE_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15837F70)
#define FLPBGLOIEHE__ONBIND_OFFSET UNITYSDK_OFFSET(0x15837950)

inline static constexpr unsigned int FLPBGLOIEHE_TypeDefinitionIndex = 71766;

	class FLPBGLOIEHE : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::System::Action* FMIPFDBCILF; // 0x68
		::System::Collections::Generic::List_1<::NCGPIKOCNNL*>* MJEEJKIIIMN; // 0x70
		::System::Boolean OLENFKOCMNA; // 0x78
		::System::Boolean EINNACFPAEN; // 0x79
		::System::Boolean KICAHMGNMED; // 0x7A
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
