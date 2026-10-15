#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace UnityEngine::UI { class Text; }

#define GDJDKGHHHMP_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15993360)
#define GDJDKGHHHMP_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15993500)
#define GDJDKGHHHMP_CTOR_OFFSET UNITYSDK_OFFSET(0x15993670)
#define GDJDKGHHHMP_DGFAEFPNIFH_OFFSET UNITYSDK_OFFSET(0x15993270)
#define GDJDKGHHHMP_DIPIIJANHMM_OFFSET UNITYSDK_OFFSET(0x159931B0)
#define GDJDKGHHHMP_EKGBPJEEMNI_OFFSET UNITYSDK_OFFSET(0x15992F70)
#define GDJDKGHHHMP_EKIAGMOCHLH_OFFSET UNITYSDK_OFFSET(0x15992FC0)
#define GDJDKGHHHMP_EMNHLHKAAIN_OFFSET UNITYSDK_OFFSET(0x15992CE0)
#define GDJDKGHHHMP_EPNODAKOILI_OFFSET UNITYSDK_OFFSET(0x15992870)
#define GDJDKGHHHMP_FKFDFNGFPMB_OFFSET UNITYSDK_OFFSET(0x15992EF0)
#define GDJDKGHHHMP_GHNEOIADKAK_OFFSET UNITYSDK_OFFSET(0x15993010)
#define GDJDKGHHHMP_HAAALOKGEKA_OFFSET UNITYSDK_OFFSET(0x15993120)
#define GDJDKGHHHMP_HMLILPCJILE_OFFSET UNITYSDK_OFFSET(0x15992BF0)
#define GDJDKGHHHMP_MECIBCKCNMC_OFFSET UNITYSDK_OFFSET(0x15993060)
#define GDJDKGHHHMP_NJHINLAMJHO_OFFSET UNITYSDK_OFFSET(0x15992B20)
#define GDJDKGHHHMP_PFAHEOHCAIL_OFFSET UNITYSDK_OFFSET(0x15992A50)

inline static constexpr unsigned int GDJDKGHHHMP_TypeDefinitionIndex = 71857;

	class GDJDKGHHHMP : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIController* GEBPKHDOKAB; // 0x60
		::RPG::Client::UIController* LMIONFLHAGE; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_CTOR_OFFSET))(this);
		}

		::System::Void EPNODAKOILI(::RPG::Client::BattleShowUIPageParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleShowUIPageParam*))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_EPNODAKOILI_OFFSET))(this, a1);
		}

		::System::Void HMLILPCJILE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_HMLILPCJILE_OFFSET))(this);
		}

		::System::Void EMNHLHKAAIN(::RPG::Client::BattleShowUIPageParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleShowUIPageParam*))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_EMNHLHKAAIN_OFFSET))(this, a1);
		}

		::System::Void FKFDFNGFPMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_FKFDFNGFPMB_OFFSET))(this);
		}

		::RPG::Client::UIController* NJHINLAMJHO(::RPG::Client::BattleShowUIPageParam* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::Client::BattleShowUIPageParam*))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_NJHINLAMJHO_OFFSET))(this, a1);
		}

		::System::Void PFAHEOHCAIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_PFAHEOHCAIL_OFFSET))(this);
		}

		::System::Void EKGBPJEEMNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_EKGBPJEEMNI_OFFSET))(this);
		}

		::System::Void EKIAGMOCHLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_EKIAGMOCHLH_OFFSET))(this);
		}

		::System::Void GHNEOIADKAK(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_GHNEOIADKAK_OFFSET))(this, a1);
		}

		::System::Void MECIBCKCNMC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_MECIBCKCNMC_OFFSET))(this, a1);
		}

		::System::Void HAAALOKGEKA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_HAAALOKGEKA_OFFSET))(this, a1);
		}

		::System::Void DIPIIJANHMM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_DIPIIJANHMM_OFFSET))(this, a1);
		}

		::System::Void DGFAEFPNIFH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_DGFAEFPNIFH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJDKGHHHMP_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
