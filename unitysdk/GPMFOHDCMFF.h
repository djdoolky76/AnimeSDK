#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KCMGAIFFBPL;
class MIHPAKHLACK;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define GPMFOHDCMFF_CJDPHKGDJAA_OFFSET UNITYSDK_OFFSET(0x17DC2060)
#define GPMFOHDCMFF_CTOR_OFFSET UNITYSDK_OFFSET(0x17DC2360)
#define GPMFOHDCMFF_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x17DC15C0)
#define GPMFOHDCMFF_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0x17DC1BF0)
#define GPMFOHDCMFF_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0x17DC21E0)
#define GPMFOHDCMFF_LCJLLGBJENF_1_OFFSET UNITYSDK_OFFSET(0x17DC1CE0)
#define GPMFOHDCMFF_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0x17DC1C40)
#define GPMFOHDCMFF_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x17DC1E90)
#define GPMFOHDCMFF_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0x17DC1950)
#define GPMFOHDCMFF_MOGOAGHNDJA_OFFSET UNITYSDK_OFFSET(0x17DC1C90)
#define GPMFOHDCMFF_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x17DC12A0)
#define GPMFOHDCMFF_ONRETURN_OFFSET UNITYSDK_OFFSET(0x17DC1490)
#define GPMFOHDCMFF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x17DC1240)
#define GPMFOHDCMFF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x17DC1900)

inline static constexpr unsigned int GPMFOHDCMFF_TypeDefinitionIndex = 73753;

	class GPMFOHDCMFF : public ::FMPCODLIOLG
	{
	public:
		::MIHPAKHLACK* GAFPHDDABLJ; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GPMFOHDCMFF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_ONRETURN_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMFOHDCMFF__SETUPVIEW_OFFSET))(this);
		}

		::System::Void MIIHAJHPKAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_MIIHAJHPKAF_OFFSET))(this);
		}

		::System::Void GGAHGOJJBIP(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_GGAHGOJJBIP_OFFSET))(this, a1);
		}

		::System::Void LCJLLGBJENF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_LCJLLGBJENF_OFFSET))(this, a1);
		}

		::System::Void MOGOAGHNDJA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_MOGOAGHNDJA_OFFSET))(this, a1);
		}

		::System::Void LCJLLGBJENF_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_LCJLLGBJENF_1_OFFSET))(this, a1);
		}

		::System::Void LEHJAPMONNN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_LEHJAPMONNN_OFFSET))(this, a1);
		}

		::System::Void CJDPHKGDJAA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_CJDPHKGDJAA_OFFSET))(this, a1);
		}

		::System::Void JMBFOHAMFGI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_JMBFOHAMFGI_OFFSET))(this, a1);
		}

	};
