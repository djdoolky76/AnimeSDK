#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BGIKFIJNAED;
class HGHMPIGFLGP;
class KNOCJADNCOA;
class NMNIJNNFPGP;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animator; }

#define ODJGGABDOGD_AJFDLJJCFGA_OFFSET UNITYSDK_OFFSET(0xBD8DEC0)
#define ODJGGABDOGD_AJOANIFICMB_OFFSET UNITYSDK_OFFSET(0xBD8DC50)
#define ODJGGABDOGD_CBHGEGECCDH_OFFSET UNITYSDK_OFFSET(0xBD8DE20)
#define ODJGGABDOGD_CTOR_OFFSET UNITYSDK_OFFSET(0xBD8E5F0)
#define ODJGGABDOGD_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBD8D400)
#define ODJGGABDOGD_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBD8DAD0)
#define ODJGGABDOGD_FBIEPHFOCPA_OFFSET UNITYSDK_OFFSET(0xBD8E3F0)
#define ODJGGABDOGD_HBBLJKMBFAI_OFFSET UNITYSDK_OFFSET(0xBD8E0F0)
#define ODJGGABDOGD_IDEMNIOAACE_OFFSET UNITYSDK_OFFSET(0xBD8E0A0)
#define ODJGGABDOGD_IFEKAHNLAOE_OFFSET UNITYSDK_OFFSET(0xBD8DFA0)
#define ODJGGABDOGD_IKANLMKJEIO_OFFSET UNITYSDK_OFFSET(0xBD8D6A0)
#define ODJGGABDOGD_IOPKJIONPAE_OFFSET UNITYSDK_OFFSET(0xBD8E000)
#define ODJGGABDOGD_JHPOMOBIMHN_OFFSET UNITYSDK_OFFSET(0xBD8E540)
#define ODJGGABDOGD_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBD8DB20)
#define ODJGGABDOGD_MACIKPPJDKA_OFFSET UNITYSDK_OFFSET(0xBD8E2D0)
#define ODJGGABDOGD_NFFCFBOBIDA_OFFSET UNITYSDK_OFFSET(0xBD8DD50)
#define ODJGGABDOGD_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBD8DC00)
#define ODJGGABDOGD_PBHOJLHJCNO_OFFSET UNITYSDK_OFFSET(0xBD8E190)
#define ODJGGABDOGD_PNJKFOILFOB_OFFSET UNITYSDK_OFFSET(0xBD8DF50)
#define ODJGGABDOGD__ONBIND_OFFSET UNITYSDK_OFFSET(0xBD8D610)

inline static constexpr unsigned int ODJGGABDOGD_TypeDefinitionIndex = 71995;

	class ODJGGABDOGD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x60
		::HGHMPIGFLGP* CHAPCPPJAAK; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::Client::UISkillIndex, ::NMNIJNNFPGP*>* OMBMEAGNBNL; // 0x70
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x78
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x80
		::RPG::Client::LocalizedText* BMNOOHFKLDB; // 0x88
		::HGHMPIGFLGP* CAICEMLCJMI; // 0x90
		::System::Int32 HKKAILFMCDJ; // 0x98
		::System::Int32 EPNJOMEFLFM; // 0x9C
		::System::Boolean EINNACFPAEN; // 0xA0
		::System::Byte _padding0[0x3];
		::System::Int32 COEMCOBPMKD; // 0xA4
		::System::Int32 LMJOBKFHBMN; // 0xA8
		::System::Int32 IGMOLKIDPFC; // 0xAC
		// static const ::System::Object PHMAHGMDPPD; // 0x0
		// static const ::System::Object MDMGHOGMOCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJGGABDOGD_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ODJGGABDOGD_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJGGABDOGD__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJGGABDOGD_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::KNOCJADNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOCJADNCOA*))((::PBYTE)hIl2Cpp + ODJGGABDOGD_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void NFFCFBOBIDA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODJGGABDOGD_NFFCFBOBIDA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* CBHGEGECCDH(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + ODJGGABDOGD_CBHGEGECCDH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* AJFDLJJCFGA()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJGGABDOGD_AJFDLJJCFGA_OFFSET))(this);
		}

		::RPG::Client::UISkillIndex PNJKFOILFOB(::RPG::Client::UISkillIndex a1)
		{
			return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + ODJGGABDOGD_PNJKFOILFOB_OFFSET))(this, a1);
		}

		::System::Void IKANLMKJEIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJGGABDOGD_IKANLMKJEIO_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJGGABDOGD_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void IFEKAHNLAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJGGABDOGD_IFEKAHNLAOE_OFFSET))(this);
		}

		::System::Void IOPKJIONPAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJGGABDOGD_IOPKJIONPAE_OFFSET))(this);
		}

		::System::Void AJOANIFICMB(::KNOCJADNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOCJADNCOA*))((::PBYTE)hIl2Cpp + ODJGGABDOGD_AJOANIFICMB_OFFSET))(this, a1);
		}

		::System::Void HBBLJKMBFAI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODJGGABDOGD_HBBLJKMBFAI_OFFSET))(this, a1);
		}

		::System::Void PBHOJLHJCNO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODJGGABDOGD_PBHOJLHJCNO_OFFSET))(this, a1);
		}

		::System::Void IDEMNIOAACE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJGGABDOGD_IDEMNIOAACE_OFFSET))(this);
		}

		::System::Boolean MACIKPPJDKA(::BGIKFIJNAED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGIKFIJNAED*))((::PBYTE)hIl2Cpp + ODJGGABDOGD_MACIKPPJDKA_OFFSET))(this, a1);
		}

		::System::Void FBIEPHFOCPA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODJGGABDOGD_FBIEPHFOCPA_OFFSET))(this, a1);
		}

		::System::Void JHPOMOBIMHN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODJGGABDOGD_JHPOMOBIMHN_OFFSET))(this, a1);
		}

	};
