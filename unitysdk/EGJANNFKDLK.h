#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class CGDPAMEHOKC;
class DLLDHFAAHEP;
class IIMJBIGBBJO;
namespace RPG::Client { class BattleBuffListViewData; }
namespace RPG::Client { class BeneficialBuffViewData; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define EGJANNFKDLK_BACEDNGHBFM_OFFSET UNITYSDK_OFFSET(0x1451B390)
#define EGJANNFKDLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1451B3E0)
#define EGJANNFKDLK_DAFOLEHPNND_OFFSET UNITYSDK_OFFSET(0x1451AEE0)
#define EGJANNFKDLK_DDNGCAOBKNG_OFFSET UNITYSDK_OFFSET(0x1451B110)
#define EGJANNFKDLK_HFJCENHHBGI_OFFSET UNITYSDK_OFFSET(0x1451AFC0)
#define EGJANNFKDLK_IMPHCKIMGAF_OFFSET UNITYSDK_OFFSET(0x1451B2F0)
#define EGJANNFKDLK_LCMCHGFKGNG_OFFSET UNITYSDK_OFFSET(0x1451B340)
#define EGJANNFKDLK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1451AE30)
#define EGJANNFKDLK__ONBIND_OFFSET UNITYSDK_OFFSET(0x1451AD20)

	class EGJANNFKDLK : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::BeneficialBuffViewData* DHHFNKNNACJ; // 0x60
		::CGDPAMEHOKC* IJPIJOCCDOK; // 0x68
		::UnityEngine::UI::Text* PHOBDPAPHND; // 0x70
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* ADEOCFAAFDP; // 0x78
		::UnityEngine::UI::Text* CAIFPFGECIN; // 0x80
		::RPG::Client::NodeListViewPanel_1<::DLLDHFAAHEP*>* JEGGMMIBIBN; // 0x88
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* CAKCILOCMAC; // 0x90
		::RPG::Client::NodeListViewPanel_1<::DLLDHFAAHEP*>* GIKDAFOHBJM; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJANNFKDLK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJANNFKDLK__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::BattleBuffListViewData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleBuffListViewData*))((::PBYTE)hIl2Cpp + EGJANNFKDLK_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void DAFOLEHPNND(::RPG::Client::BeneficialBuffViewData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BeneficialBuffViewData*))((::PBYTE)hIl2Cpp + EGJANNFKDLK_DAFOLEHPNND_OFFSET))(this, a1);
		}

		::System::Void HFJCENHHBGI(::RPG::Client::NodeListViewPanel_1<::DLLDHFAAHEP*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2, ::UnityEngine::UI::Text* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NodeListViewPanel_1<::DLLDHFAAHEP*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + EGJANNFKDLK_HFJCENHHBGI_OFFSET))(this, a1, a2, a3);
		}

		::IIMJBIGBBJO* DDNGCAOBKNG(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::IIMJBIGBBJO*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + EGJANNFKDLK_DDNGCAOBKNG_OFFSET))(this, a1);
		}

		::IIMJBIGBBJO* IMPHCKIMGAF()
		{
			return ((::IIMJBIGBBJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJANNFKDLK_IMPHCKIMGAF_OFFSET))(this);
		}

		::System::Boolean LCMCHGFKGNG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJANNFKDLK_LCMCHGFKGNG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* BACEDNGHBFM()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJANNFKDLK_BACEDNGHBFM_OFFSET))(this);
		}

	};
