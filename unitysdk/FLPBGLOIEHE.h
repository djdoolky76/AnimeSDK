#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class NCGPIKOCNNL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLPBGLOIEHE_ALKENBJJKDN_OFFSET UNITYSDK_OFFSET(0x189738E0)
#define FLPBGLOIEHE_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0x18973190)
#define FLPBGLOIEHE_CTOR_OFFSET UNITYSDK_OFFSET(0x18973920)
#define FLPBGLOIEHE_EHABAPJLEGL_OFFSET UNITYSDK_OFFSET(0x18973890)
#define FLPBGLOIEHE_FKMDEFDJPAI_OFFSET UNITYSDK_OFFSET(0x189737C0)
#define FLPBGLOIEHE_IHJNDOCFMHM_OFFSET UNITYSDK_OFFSET(0x18972F30)
#define FLPBGLOIEHE_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x18973420)
#define FLPBGLOIEHE_MKHFOBCLIHH_OFFSET UNITYSDK_OFFSET(0x18973810)
#define FLPBGLOIEHE_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x189733D0)
#define FLPBGLOIEHE_ONRETURN_OFFSET UNITYSDK_OFFSET(0x18973130)
#define FLPBGLOIEHE__ONBIND_OFFSET UNITYSDK_OFFSET(0x18972B10)
#define FLPBGLOIEHE__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x189730B0)

inline static constexpr unsigned int FLPBGLOIEHE_TypeDefinitionIndex = 73774;

	class FLPBGLOIEHE : public ::FMPCODLIOLG
	{
	public:
		::System::Action* FMIPFDBCILF; // 0x60
		::System::Collections::Generic::List_1<::NCGPIKOCNNL*>* MJEEJKIIIMN; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FLPBGLOIEHE__ONINITPARAMS_OFFSET))(this, a1);
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
