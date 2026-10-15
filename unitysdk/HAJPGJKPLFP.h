#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/CharacterResourceLoadOption.h"
class CMFFLPBJJKN;
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAJPGJKPLFP_AFDBCIKJMKE_1_OFFSET UNITYSDK_OFFSET(0x15B74EE0)
#define HAJPGJKPLFP_AFDBCIKJMKE_OFFSET UNITYSDK_OFFSET(0x15B75240)
#define HAJPGJKPLFP_AFIJBDMGDPE_OFFSET UNITYSDK_OFFSET(0x15B74060)
#define HAJPGJKPLFP_ALOHNNKDJDJ_OFFSET UNITYSDK_OFFSET(0x15B75540)
#define HAJPGJKPLFP_AMIOJAHDIKM_OFFSET UNITYSDK_OFFSET(0x15B75AA0)
#define HAJPGJKPLFP_BAOEMABIDKK_OFFSET UNITYSDK_OFFSET(0x15B75360)
#define HAJPGJKPLFP_CBNNHPGHPHE_OFFSET UNITYSDK_OFFSET(0x15B75780)
#define HAJPGJKPLFP_CDOJEEBCELL_OFFSET UNITYSDK_OFFSET(0x15B756B0)
#define HAJPGJKPLFP_CJJEBAJEMKN_OFFSET UNITYSDK_OFFSET(0x15B74D90)
#define HAJPGJKPLFP_CPNGMFEBOIJ_OFFSET UNITYSDK_OFFSET(0x15B75AB0)
#define HAJPGJKPLFP_CTOR_OFFSET UNITYSDK_OFFSET(0x15B75AC0)
#define HAJPGJKPLFP_DEBCFOKBKNH_OFFSET UNITYSDK_OFFSET(0x15B75A00)
#define HAJPGJKPLFP_DPIIHPNEHJA_OFFSET UNITYSDK_OFFSET(0x15B75300)
#define HAJPGJKPLFP_HOJPFILHBCD_OFFSET UNITYSDK_OFFSET(0x15B75910)
#define HAJPGJKPLFP_IEBLFDHBNPG_OFFSET UNITYSDK_OFFSET(0x15B755D0)
#define HAJPGJKPLFP_JONOICPHFDP_OFFSET UNITYSDK_OFFSET(0x15B75850)
#define HAJPGJKPLFP_MKLADMJAOOM_OFFSET UNITYSDK_OFFSET(0x15B75A50)
#define HAJPGJKPLFP_NGMAKGIOJJP_1_OFFSET UNITYSDK_OFFSET(0x15B74A20)
#define HAJPGJKPLFP_NGMAKGIOJJP_OFFSET UNITYSDK_OFFSET(0x15B74920)
#define HAJPGJKPLFP_NMOBDGCOOJE_OFFSET UNITYSDK_OFFSET(0x15B753F0)
#define HAJPGJKPLFP_NNMMHHGOJEI_OFFSET UNITYSDK_OFFSET(0x15B73F10)
#define HAJPGJKPLFP_OJPEPHHINAI_OFFSET UNITYSDK_OFFSET(0x15B74120)
#define HAJPGJKPLFP_ONINIT_OFFSET UNITYSDK_OFFSET(0x15B72E20)
#define HAJPGJKPLFP_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x15B739C0)
#define HAJPGJKPLFP_PMHPENCGMGJ_OFFSET UNITYSDK_OFFSET(0x15B754B0)

inline static constexpr unsigned int HAJPGJKPLFP_TypeDefinitionIndex = 73336;

	class HAJPGJKPLFP : public ::HBCMHADMLOP
	{
	public:
		::RPG::GameCore::GameEntity* GIFFANEAEHP; // 0x20
		::CMFFLPBJJKN* PFLOGEDPGJJ; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* EDBCFFAHJBF; // 0x30
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* BAIFPLAOGNK; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* JIAIKBBNHEC; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* GKCCIEKOBFA; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::UInt32>* GGONANOOJCL; // 0x50
		::System::UInt32 NHOEOLJECOA; // 0x58
		::System::Single JNEENKLEJNK; // 0x5C
		::System::UInt32 FOKCIMLGDPO; // 0x60
		// static const ::System::String* CEJJPOBKHFC; // 0x0
		// static const ::System::String* PJPBKFLNFHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_CTOR_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_ONUNINIT_OFFSET))(this);
		}

		::System::Void NNMMHHGOJEI(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::CharacterResourceLoadOption a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterResourceLoadOption))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_NNMMHHGOJEI_OFFSET))(this, a1, a2);
		}

		::System::Void AFIJBDMGDPE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_AFIJBDMGDPE_OFFSET))(this, a1);
		}

		::System::Void NGMAKGIOJJP(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_NGMAKGIOJJP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NGMAKGIOJJP_1(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_NGMAKGIOJJP_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CJJEBAJEMKN(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_CJJEBAJEMKN_OFFSET))(this, a1, a2);
		}

		::System::Void AFDBCIKJMKE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_AFDBCIKJMKE_OFFSET))(this, a1);
		}

		::System::Void AFDBCIKJMKE_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_AFDBCIKJMKE_1_OFFSET))(this, a1);
		}

		::System::Void DPIIHPNEHJA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_DPIIHPNEHJA_OFFSET))(this, a1, a2);
		}

		::System::Void BAOEMABIDKK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_BAOEMABIDKK_OFFSET))(this, a1);
		}

		::System::Void NMOBDGCOOJE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_NMOBDGCOOJE_OFFSET))(this, a1);
		}

		::System::Void PMHPENCGMGJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_PMHPENCGMGJ_OFFSET))(this, a1);
		}

		::System::Void ALOHNNKDJDJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_ALOHNNKDJDJ_OFFSET))(this, a1);
		}

		::System::Void IEBLFDHBNPG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_IEBLFDHBNPG_OFFSET))(this, a1);
		}

		::System::Void CDOJEEBCELL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_CDOJEEBCELL_OFFSET))(this, a1);
		}

		::System::Void CBNNHPGHPHE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_CBNNHPGHPHE_OFFSET))(this, a1);
		}

		::System::Void JONOICPHFDP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_JONOICPHFDP_OFFSET))(this, a1);
		}

		::System::Void HOJPFILHBCD(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_HOJPFILHBCD_OFFSET))(this, a1);
		}

		::System::Void DEBCFOKBKNH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_DEBCFOKBKNH_OFFSET))(this, a1);
		}

		::System::Void MKLADMJAOOM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_MKLADMJAOOM_OFFSET))(this, a1);
		}

		::System::Void OJPEPHHINAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_OJPEPHHINAI_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* AMIOJAHDIKM()
		{
			return ((::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_AMIOJAHDIKM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::UInt32>* CPNGMFEBOIJ()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJPGJKPLFP_CPNGMFEBOIJ_OFFSET))(this);
		}

	};
