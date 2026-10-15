#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMEJEFBKPCH;
namespace RPG::Client::TrainParty { class TrainPartyGameInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define EMJDFLPCDBF_BJPKEFPHNPJ_OFFSET UNITYSDK_OFFSET(0x15545730)
#define EMJDFLPCDBF_BLACNCBOOIP_OFFSET UNITYSDK_OFFSET(0x15545D70)
#define EMJDFLPCDBF_CTOR_OFFSET UNITYSDK_OFFSET(0x15546090)
#define EMJDFLPCDBF_DFPPPONPIDD_OFFSET UNITYSDK_OFFSET(0x15545C30)
#define EMJDFLPCDBF_EABDLIEOIDE_OFFSET UNITYSDK_OFFSET(0x15545900)
#define EMJDFLPCDBF_GOLMLGHOBPH_OFFSET UNITYSDK_OFFSET(0x15545AF0)
#define EMJDFLPCDBF_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x155456A0)
#define EMJDFLPCDBF_HGLKMOHCJIK_OFFSET UNITYSDK_OFFSET(0x15545DE0)
#define EMJDFLPCDBF_JMIBNIBHGBC_OFFSET UNITYSDK_OFFSET(0x15546020)
#define EMJDFLPCDBF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15545650)
#define EMJDFLPCDBF_MGEMPEEENNG_OFFSET UNITYSDK_OFFSET(0x15545BB0)
#define EMJDFLPCDBF_MNIKJPJHCOA_OFFSET UNITYSDK_OFFSET(0x15545C80)
#define EMJDFLPCDBF_NLKNOCEGJJL_OFFSET UNITYSDK_OFFSET(0x15545840)
#define EMJDFLPCDBF_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x155456E0)

	class EMJDFLPCDBF : public ::System::Object
	{
	public:
		::System::Action* BIEFJLECKAM; // 0x10
		::RPG::GameCore::GameEntity* DJIIBECJDBP; // 0x18
		::AMEJEFBKPCH* LJFNAGIDAEH; // 0x20
		::RPG::Client::TrainParty::TrainPartyGameInstance* CFKHNPGEAJA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJDFLPCDBF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::TrainParty::TrainPartyGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyGameInstance*))((::PBYTE)hIl2Cpp + EMJDFLPCDBF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJDFLPCDBF_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJDFLPCDBF_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void BJPKEFPHNPJ(::AMEJEFBKPCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEJEFBKPCH*))((::PBYTE)hIl2Cpp + EMJDFLPCDBF_BJPKEFPHNPJ_OFFSET))(this, a1);
		}

		::System::Void NLKNOCEGJJL(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + EMJDFLPCDBF_NLKNOCEGJJL_OFFSET))(this, a1, a2);
		}

		::System::Void MGEMPEEENNG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EMJDFLPCDBF_MGEMPEEENNG_OFFSET))(this, a1);
		}

		::System::Boolean DFPPPONPIDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJDFLPCDBF_DFPPPONPIDD_OFFSET))(this);
		}

		::System::Void MNIKJPJHCOA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EMJDFLPCDBF_MNIKJPJHCOA_OFFSET))(this, a1);
		}

		::System::Void BLACNCBOOIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJDFLPCDBF_BLACNCBOOIP_OFFSET))(this);
		}

		::System::Void JMIBNIBHGBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJDFLPCDBF_JMIBNIBHGBC_OFFSET))(this);
		}

		::System::Void EABDLIEOIDE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EMJDFLPCDBF_EABDLIEOIDE_OFFSET))(this, a1);
		}

		::System::Void HGLKMOHCJIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJDFLPCDBF_HGLKMOHCJIK_OFFSET))(this);
		}

		::System::Void GOLMLGHOBPH(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EMJDFLPCDBF_GOLMLGHOBPH_OFFSET))(this, a1);
		}

	};
