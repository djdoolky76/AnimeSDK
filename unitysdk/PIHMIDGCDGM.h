#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EANKAFJCEEH;
class EKFMIDBJDIA;
class MMHPBKNKBGP_EHCHDILLGPK;
namespace RPG::Client { class EnhanceSkillParam; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIHMIDGCDGM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC263010)
#define PIHMIDGCDGM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC2632E0)
#define PIHMIDGCDGM_CJJCKCCKONB_OFFSET UNITYSDK_OFFSET(0xC2626F0)
#define PIHMIDGCDGM_CNLDMGAKNBA_OFFSET UNITYSDK_OFFSET(0xC262BD0)
#define PIHMIDGCDGM_CTOR_OFFSET UNITYSDK_OFFSET(0xC263570)
#define PIHMIDGCDGM_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC2620D0)
#define PIHMIDGCDGM_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xC262190)
#define PIHMIDGCDGM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC262230)
#define PIHMIDGCDGM_HEBCEFFKJIM_OFFSET UNITYSDK_OFFSET(0xC262B40)
#define PIHMIDGCDGM_INMDKGIGJNA_OFFSET UNITYSDK_OFFSET(0xC262840)
#define PIHMIDGCDGM_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xC262270)
#define PIHMIDGCDGM_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0xC262530)
#define PIHMIDGCDGM_LEDGFKKGOJE_OFFSET UNITYSDK_OFFSET(0xC2629F0)
#define PIHMIDGCDGM_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xC2624B0)
#define PIHMIDGCDGM_MFCGCFAFMPA_OFFSET UNITYSDK_OFFSET(0xC262EF0)
#define PIHMIDGCDGM_MMDPHANJGBH_OFFSET UNITYSDK_OFFSET(0xC262360)
#define PIHMIDGCDGM_NIMGEJLLJME_OFFSET UNITYSDK_OFFSET(0xC262580)
#define PIHMIDGCDGM_OCKFBJOAKLE_OFFSET UNITYSDK_OFFSET(0xC262DD0)
#define PIHMIDGCDGM_OFDDFDGKNPJ_OFFSET UNITYSDK_OFFSET(0xC262960)
#define PIHMIDGCDGM_PADHGKJFDGD_OFFSET UNITYSDK_OFFSET(0xC262300)
#define PIHMIDGCDGM_PAHFGFOJNFL_OFFSET UNITYSDK_OFFSET(0xC262740)
#define PIHMIDGCDGM__ONBIND_OFFSET UNITYSDK_OFFSET(0xC262060)
#define PIHMIDGCDGM__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC262450)

	class PIHMIDGCDGM : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::EnhanceSkillParam*>* ENJEHNBLAEM; // 0x68
		::EANKAFJCEEH* MODMKBNMDKC; // 0x70
		::MMHPBKNKBGP_EHCHDILLGPK* LFBDNBLMGOH; // 0x78
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x80
		::RPG::Client::RPGAnimationEvent* FPIHKNJFHEA; // 0x88
		// static const ::System::String* PAHKELPMCAF; // 0x0
		// static const ::System::String* DBLHHNEALFL; // 0x0
		// static const ::System::String* PGFEHPNBIJB; // 0x0
		// static const ::System::String* NKBJGLCKBBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM__ONDISPOSE_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void CJJCKCCKONB(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_CJJCKCCKONB_OFFSET))(this, a1);
		}

		::System::Void PADHGKJFDGD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_PADHGKJFDGD_OFFSET))(this, a1);
		}

		::System::Void LACAPACNEPI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_LACAPACNEPI_OFFSET))(this, a1);
		}

		::System::Void OFDDFDGKNPJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_OFDDFDGKNPJ_OFFSET))(this, a1);
		}

		::System::Void HEBCEFFKJIM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_HEBCEFFKJIM_OFFSET))(this, a1);
		}

		::System::Void LEDGFKKGOJE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_LEDGFKKGOJE_OFFSET))(this, a1);
		}

		::System::Void CNLDMGAKNBA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_CNLDMGAKNBA_OFFSET))(this, a1);
		}

		::System::Void PAHFGFOJNFL(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_PAHFGFOJNFL_OFFSET))(this, a1);
		}

		::System::Void INMDKGIGJNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_INMDKGIGJNA_OFFSET))(this);
		}

		::System::Void MMDPHANJGBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_MMDPHANJGBH_OFFSET))(this);
		}

		::System::Void NIMGEJLLJME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_NIMGEJLLJME_OFFSET))(this);
		}

		::System::Void OCKFBJOAKLE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_OCKFBJOAKLE_OFFSET))(this, a1);
		}

		::System::Void MFCGCFAFMPA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_MFCGCFAFMPA_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
