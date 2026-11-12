#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAIBJGAMDAI;
class DLCOGLMFDPI;
class LMHBFGADIMD;
class MALMEFBOHFN;
class OCGCEFDKIEA;
class PPIKHNMNLDK;
namespace RPG::Client { class ExpeditionBattleActionDispatch; }
namespace System { class Action; }
namespace System { class Object; }

#define BEACKINOAPF_ADD_ONSTATEENTERED_OFFSET UNITYSDK_OFFSET(0xB7BE5F0)
#define BEACKINOAPF_AGOMMLGGKKH_OFFSET UNITYSDK_OFFSET(0xB7BF360)
#define BEACKINOAPF_CCHHPEFHGKC_OFFSET UNITYSDK_OFFSET(0xB7BE6B0)
#define BEACKINOAPF_CELMPAALHHK_OFFSET UNITYSDK_OFFSET(0xB7BF010)
#define BEACKINOAPF_CTOR_OFFSET UNITYSDK_OFFSET(0xB7BE850)
#define BEACKINOAPF_FDKGFMGLLBF_OFFSET UNITYSDK_OFFSET(0xB7BE870)
#define BEACKINOAPF_FEAOGEMGHAP_OFFSET UNITYSDK_OFFSET(0xB7BEC00)
#define BEACKINOAPF_FHJJGODPPIN_OFFSET UNITYSDK_OFFSET(0xB7BFA70)
#define BEACKINOAPF_GNMGOJAIGPF_OFFSET UNITYSDK_OFFSET(0xB7BECA0)
#define BEACKINOAPF_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB7BFC30)
#define BEACKINOAPF_HIINEMEPFBN_OFFSET UNITYSDK_OFFSET(0xB7BFB30)
#define BEACKINOAPF_KPILIPIEMJA_OFFSET UNITYSDK_OFFSET(0xB7BFB80)
#define BEACKINOAPF_NGDDEPBNGNB_OFFSET UNITYSDK_OFFSET(0xB7BF870)
#define BEACKINOAPF_PHFMPMLKFMH_OFFSET UNITYSDK_OFFSET(0xB7BED00)
#define BEACKINOAPF_PKMMDGKOCPB_OFFSET UNITYSDK_OFFSET(0xB7BED80)
#define BEACKINOAPF_REMOVE_ONSTATEENTERED_OFFSET UNITYSDK_OFFSET(0xB7BE650)

inline static constexpr unsigned int BEACKINOAPF_TypeDefinitionIndex = 65331;

	class BEACKINOAPF : public ::System::Object
	{
	public:
		::OCGCEFDKIEA* JMLGBIGGHJM; // 0x10
		::DLCOGLMFDPI* BCLOAGOJAMP; // 0x18
		::PPIKHNMNLDK* JEIJHDEPGGC; // 0x20
		::MALMEFBOHFN* COOHMLHMKMH; // 0x28
		::System::Action* OnStateEntered; // 0x30
		::BAIBJGAMDAI* JIHBGMMGJCE; // 0x38
		::System::Boolean PKAHNLFOIID; // 0x40
		::System::Void _ctor(::BAIBJGAMDAI* a1, ::OCGCEFDKIEA* a2, ::DLCOGLMFDPI* a3, ::MALMEFBOHFN* a4, ::PPIKHNMNLDK* a5)
		{
			return ((::System::Void(*)(::PVOID, ::BAIBJGAMDAI*, ::OCGCEFDKIEA*, ::DLCOGLMFDPI*, ::MALMEFBOHFN*, ::PPIKHNMNLDK*))((::PBYTE)hIl2Cpp + BEACKINOAPF_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void add_OnStateEntered(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BEACKINOAPF_ADD_ONSTATEENTERED_OFFSET))(this, a1);
		}

		::System::Void remove_OnStateEntered(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BEACKINOAPF_REMOVE_ONSTATEENTERED_OFFSET))(this, a1);
		}

		::System::Boolean CCHHPEFHGKC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEACKINOAPF_CCHHPEFHGKC_OFFSET))(this);
		}

		::System::Void FDKGFMGLLBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEACKINOAPF_FDKGFMGLLBF_OFFSET))(this);
		}

		::System::Void FEAOGEMGHAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEACKINOAPF_FEAOGEMGHAP_OFFSET))(this);
		}

		::System::Void PHFMPMLKFMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BEACKINOAPF_PHFMPMLKFMH_OFFSET))(this, a1);
		}

		::System::Boolean CELMPAALHHK(::RPG::Client::ExpeditionBattleActionDispatch* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ExpeditionBattleActionDispatch*))((::PBYTE)hIl2Cpp + BEACKINOAPF_CELMPAALHHK_OFFSET))(this, a1);
		}

		::System::Boolean AGOMMLGGKKH(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEACKINOAPF_AGOMMLGGKKH_OFFSET))(this, a1);
		}

		::System::Void NGDDEPBNGNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEACKINOAPF_NGDDEPBNGNB_OFFSET))(this);
		}

		::System::Void HIINEMEPFBN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEACKINOAPF_HIINEMEPFBN_OFFSET))(this, a1);
		}

		::System::Void KPILIPIEMJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEACKINOAPF_KPILIPIEMJA_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEACKINOAPF_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void PKMMDGKOCPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BEACKINOAPF_PKMMDGKOCPB_OFFSET))(this, a1);
		}

		::System::Void FHJJGODPPIN(::LMHBFGADIMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMHBFGADIMD*))((::PBYTE)hIl2Cpp + BEACKINOAPF_FHJJGODPPIN_OFFSET))(this, a1);
		}

		::System::Void GNMGOJAIGPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEACKINOAPF_GNMGOJAIGPF_OFFSET))(this);
		}

	};
