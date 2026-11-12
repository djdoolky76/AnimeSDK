#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"
class AJACKPCNNDM;
class FGDGPEABLMN;
class FKIODIMJPNA;
class HFFHEPEBJFE;
class OOIBNCGLMML;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MDNGGPDFFIE_ADAFGCAKADI_OFFSET UNITYSDK_OFFSET(0xC164D50)
#define MDNGGPDFFIE_ADD_SLOTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xC165080)
#define MDNGGPDFFIE_ADD_SLOTENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0xC165180)
#define MDNGGPDFFIE_ALNKJNNPIEI_OFFSET UNITYSDK_OFFSET(0xC1648E0)
#define MDNGGPDFFIE_BEAPHCCJJLL_OFFSET UNITYSDK_OFFSET(0xC164B90)
#define MDNGGPDFFIE_BOJCKBELLDJ_OFFSET UNITYSDK_OFFSET(0xC165060)
#define MDNGGPDFFIE_CTOR_OFFSET UNITYSDK_OFFSET(0xC165280)
#define MDNGGPDFFIE_DHEHFKPJBKO_OFFSET UNITYSDK_OFFSET(0xC164F70)
#define MDNGGPDFFIE_DKFLDPBDCFG_OFFSET UNITYSDK_OFFSET(0xC164A80)
#define MDNGGPDFFIE_FJPKOKNEFPG_OFFSET UNITYSDK_OFFSET(0xC1647E0)
#define MDNGGPDFFIE_FLBDIAOLIND_OFFSET UNITYSDK_OFFSET(0xC164100)
#define MDNGGPDFFIE_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xC164650)
#define MDNGGPDFFIE_GGDCNFIOOGK_OFFSET UNITYSDK_OFFSET(0xC164E90)
#define MDNGGPDFFIE_GGDDCIDPKPK_OFFSET UNITYSDK_OFFSET(0xC164750)
#define MDNGGPDFFIE_IBNPLADLEMB_OFFSET UNITYSDK_OFFSET(0xC164940)
#define MDNGGPDFFIE_IICJMLNDKFJ_OFFSET UNITYSDK_OFFSET(0xC164A10)
#define MDNGGPDFFIE_LHGIJPNCAJC_OFFSET UNITYSDK_OFFSET(0xC164E00)
#define MDNGGPDFFIE_LLODBBGDNMB_OFFSET UNITYSDK_OFFSET(0xC1649A0)
#define MDNGGPDFFIE_LMKGHCMKKMC_OFFSET UNITYSDK_OFFSET(0xC165050)
#define MDNGGPDFFIE_MHADHEBJJBG_OFFSET UNITYSDK_OFFSET(0xC164850)
#define MDNGGPDFFIE_OBKONAALFJF_OFFSET UNITYSDK_OFFSET(0xC165070)
#define MDNGGPDFFIE_OKOIENGEOII_OFFSET UNITYSDK_OFFSET(0xC1646E0)
#define MDNGGPDFFIE_ONINIT_OFFSET UNITYSDK_OFFSET(0xC163D60)
#define MDNGGPDFFIE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xC1644E0)
#define MDNGGPDFFIE_REMOVE_SLOTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xC165100)
#define MDNGGPDFFIE_REMOVE_SLOTENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0xC165200)
#define MDNGGPDFFIE_TICK_OFFSET UNITYSDK_OFFSET(0xC164660)

inline static constexpr unsigned int MDNGGPDFFIE_TypeDefinitionIndex = 61487;

	class MDNGGPDFFIE : public ::HBCMHADMLOP
	{
	public:
		::AJACKPCNNDM* GFLJHCJEJBG; // 0x20
		::System::Action_1<::FKIODIMJPNA*>* SlotEntityReleased; // 0x28
		::FGDGPEABLMN* CKOCJELELGK; // 0x30
		::HFFHEPEBJFE* BKCDKMAHANK; // 0x38
		::System::Action_1<::FKIODIMJPNA*>* SlotEntityReady; // 0x40
		::OOIBNCGLMML* FHBNIHNMAJF; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_CTOR_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_ONUNINIT_OFFSET))(this);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_TICK_OFFSET))(this, a1);
		}

		::System::Void OKOIENGEOII(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_OKOIENGEOII_OFFSET))(this, a1, a2);
		}

		::System::Void GGDDCIDPKPK(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_GGDDCIDPKPK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FJPKOKNEFPG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_FJPKOKNEFPG_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* MHADHEBJJBG(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_MHADHEBJJBG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ALNKJNNPIEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_ALNKJNNPIEI_OFFSET))(this, a1);
		}

		::System::Void IBNPLADLEMB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_IBNPLADLEMB_OFFSET))(this, a1);
		}

		::System::Void LLODBBGDNMB(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_LLODBBGDNMB_OFFSET))(this, a1);
		}

		::System::Void IICJMLNDKFJ(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_IICJMLNDKFJ_OFFSET))(this, a1);
		}

		::System::Void FLBDIAOLIND(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_FLBDIAOLIND_OFFSET))(this, a1);
		}

		::System::Void DKFLDPBDCFG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_DKFLDPBDCFG_OFFSET))(this, a1);
		}

		static ::System::Void BEAPHCCJJLL(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_BEAPHCCJJLL_OFFSET))(a1);
		}

		static ::System::Void ADAFGCAKADI(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_ADAFGCAKADI_OFFSET))(a1);
		}

		static ::System::Boolean GGDCNFIOOGK(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_GGDCNFIOOGK_OFFSET))(a1);
		}

		static ::System::Boolean DHEHFKPJBKO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_DHEHFKPJBKO_OFFSET))(a1);
		}

		static ::OOIBNCGLMML* LHGIJPNCAJC(::System::UInt32 a1)
		{
			return ((::OOIBNCGLMML*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_LHGIJPNCAJC_OFFSET))(a1);
		}

		::FGDGPEABLMN* LMKGHCMKKMC()
		{
			return ((::FGDGPEABLMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_LMKGHCMKKMC_OFFSET))(this);
		}

		::HFFHEPEBJFE* BOJCKBELLDJ()
		{
			return ((::HFFHEPEBJFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_BOJCKBELLDJ_OFFSET))(this);
		}

		::AJACKPCNNDM* OBKONAALFJF()
		{
			return ((::AJACKPCNNDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_OBKONAALFJF_OFFSET))(this);
		}

		::System::Void add_SlotEntityReady(::System::Action_1<::FKIODIMJPNA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::FKIODIMJPNA*>*))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_ADD_SLOTENTITYREADY_OFFSET))(this, a1);
		}

		::System::Void remove_SlotEntityReady(::System::Action_1<::FKIODIMJPNA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::FKIODIMJPNA*>*))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_REMOVE_SLOTENTITYREADY_OFFSET))(this, a1);
		}

		::System::Void add_SlotEntityReleased(::System::Action_1<::FKIODIMJPNA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::FKIODIMJPNA*>*))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_ADD_SLOTENTITYRELEASED_OFFSET))(this, a1);
		}

		::System::Void remove_SlotEntityReleased(::System::Action_1<::FKIODIMJPNA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::FKIODIMJPNA*>*))((::PBYTE)hIl2Cpp + MDNGGPDFFIE_REMOVE_SLOTENTITYRELEASED_OFFSET))(this, a1);
		}

	};
