#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHAHLGJIHLP_State.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/OKLBEPJCBJG.h"
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class StageCaptureAliasData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define NHAHLGJIHLP_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xBBB9D60)
#define NHAHLGJIHLP_CTOR_OFFSET UNITYSDK_OFFSET(0xBBB5790)
#define NHAHLGJIHLP_EHKBCGNPFMJ_OFFSET UNITYSDK_OFFSET(0xBBB5950)
#define NHAHLGJIHLP_GLKPIJNDKMM_OFFSET UNITYSDK_OFFSET(0xBBB5EC0)
#define NHAHLGJIHLP_HBMBFKNFPOO_OFFSET UNITYSDK_OFFSET(0xBBB9DC0)
#define NHAHLGJIHLP_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xBBB58B0)
#define NHAHLGJIHLP_IKMDGEHMGJG_OFFSET UNITYSDK_OFFSET(0xBBB9A90)
#define NHAHLGJIHLP_JGCFGHLLODI_OFFSET UNITYSDK_OFFSET(0xBBB9CB0)
#define NHAHLGJIHLP_LEJPDLFCNEL_OFFSET UNITYSDK_OFFSET(0xBBB98E0)
#define NHAHLGJIHLP_LKIPNECLBBN_OFFSET UNITYSDK_OFFSET(0xBBB9E00)
#define NHAHLGJIHLP_MENLHFEFIMJ_OFFSET UNITYSDK_OFFSET(0xBBB5B00)
#define NHAHLGJIHLP_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0xBBB99A0)

	class NHAHLGJIHLP : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* MKDBPGHLNJJ; // 0x10
		::UnityEngine::GameObject* LIPOLMIEDOH; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* HAMLLHEKAPA; // 0x20
		::System::String* OENAMINOLLF; // 0x28
		::RPG::Client::Stage* FODBAAPMJNJ; // 0x30
		::UnityEngine::Object* NBOLCONKFKG; // 0x38
		::RPG::GameCore::BlockNodeConfig* EPNIOAKAJGJ; // 0x40
		::UnityEngine::Transform* KJMDDAHEODL; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* NPENGFBHFJN; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::StageCaptureAliasData*>*>* NDENELAPDLF; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* BCHJDKAMFCG; // 0x60
		::UnityEngine::Bounds KILJOCNJLPC; // 0x68
		::NHAHLGJIHLP_State CNOFAABNBEG; // 0x80
		::System::Int32 GMDBHJKEAEI; // 0x84
		// static const ::System::Object BLDDLJCACAE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAHLGJIHLP_CTOR_OFFSET))(this);
		}

		::System::Void HCFINLKPIHL(::RPG::GameCore::BlockNodeConfig* a1, ::RPG::Client::Stage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + NHAHLGJIHLP_HCFINLKPIHL_OFFSET))(this, a1, a2);
		}

		::System::Void EHKBCGNPFMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAHLGJIHLP_EHKBCGNPFMJ_OFFSET))(this);
		}

		::System::Void MENLHFEFIMJ(::OKLBEPJCBJG a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OKLBEPJCBJG, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NHAHLGJIHLP_MENLHFEFIMJ_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GLKPIJNDKMM(::UnityEngine::GameObject* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NHAHLGJIHLP_GLKPIJNDKMM_OFFSET))(this, a1);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NHAHLGJIHLP_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Void IKMDGEHMGJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAHLGJIHLP_IKMDGEHMGJG_OFFSET))(this);
		}

		::UnityEngine::GameObject* JGCFGHLLODI(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NHAHLGJIHLP_JGCFGHLLODI_OFFSET))(this, a1);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAHLGJIHLP_BJMNKLGEMPM_OFFSET))(this);
		}

		::RPG::GameCore::BlockNodeConfig* HBMBFKNFPOO()
		{
			return ((::RPG::GameCore::BlockNodeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAHLGJIHLP_HBMBFKNFPOO_OFFSET))(this);
		}

		::System::String* LEJPDLFCNEL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAHLGJIHLP_LEJPDLFCNEL_OFFSET))(this);
		}

		::RPG::GameCore::BlockNodeConfig* LKIPNECLBBN()
		{
			return ((::RPG::GameCore::BlockNodeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAHLGJIHLP_LKIPNECLBBN_OFFSET))(this);
		}

	};
