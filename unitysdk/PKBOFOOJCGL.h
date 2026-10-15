#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ActivityHipplen/StatusViewData.h"
class JCHBFEIOIHA;
class OEECGAHNFDI;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectCalculator; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace RPG::GameCore { class ActivityHipplenIncidentRow; }
namespace RPG::GameCore { class HipplenIncidentConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKBOFOOJCGL_CTOR_OFFSET UNITYSDK_OFFSET(0xC2A9010)
#define PKBOFOOJCGL_EJACOFEBELP_OFFSET UNITYSDK_OFFSET(0xC2A8FC0)
#define PKBOFOOJCGL_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xC2A9300)
#define PKBOFOOJCGL_HKNMMIABJIN_OFFSET UNITYSDK_OFFSET(0xC2A9390)
#define PKBOFOOJCGL_JJBFKJEGJPN_OFFSET UNITYSDK_OFFSET(0xC2A9210)
#define PKBOFOOJCGL_KFAELPMFCNE_OFFSET UNITYSDK_OFFSET(0xC2A9630)
#define PKBOFOOJCGL_LOMALBDODND_OFFSET UNITYSDK_OFFSET(0xC2A9270)
#define PKBOFOOJCGL_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC2A9020)

inline static constexpr unsigned int PKBOFOOJCGL_TypeDefinitionIndex = 75544;

	class PKBOFOOJCGL : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* KJEDGKFEPLM; // 0x10
		::RPG::GameCore::ActivityHipplenIncidentRow* POBMBPIIJND; // 0x18
		::JCHBFEIOIHA* EOMLMNOEKDJ; // 0x20
		::System::Action* JCGCCGDNFFI; // 0x28
		::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator* EOFFAMLLEJK; // 0x30
		::System::Void _ctor(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1, ::RPG::GameCore::ActivityHipplenIncidentRow* a2, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*, ::RPG::GameCore::ActivityHipplenIncidentRow*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator*))((::PBYTE)hIl2Cpp + PKBOFOOJCGL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EJACOFEBELP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOFOOJCGL_EJACOFEBELP_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::RPG::GameCore::HipplenIncidentConfig* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + PKBOFOOJCGL_NPAFMEBNFOB_OFFSET))(this, a1, a2);
		}

		::System::Void LOMALBDODND(::OEECGAHNFDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEECGAHNFDI*))((::PBYTE)hIl2Cpp + PKBOFOOJCGL_LOMALBDODND_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOFOOJCGL_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>* HKNMMIABJIN()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOFOOJCGL_HKNMMIABJIN_OFFSET))(this);
		}

		::System::Void KFAELPMFCNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOFOOJCGL_KFAELPMFCNE_OFFSET))(this);
		}

		::System::Void JJBFKJEGJPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOFOOJCGL_JJBFKJEGJPN_OFFSET))(this);
		}

	};
