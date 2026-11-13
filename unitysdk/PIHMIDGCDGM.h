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

#define PIHMIDGCDGM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A9C7E50)
#define PIHMIDGCDGM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A9C8120)
#define PIHMIDGCDGM_CJJCKCCKONB_OFFSET UNITYSDK_OFFSET(0x1A9C7520)
#define PIHMIDGCDGM_CNLDMGAKNBA_OFFSET UNITYSDK_OFFSET(0x1A9C7A00)
#define PIHMIDGCDGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9C83B0)
#define PIHMIDGCDGM_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1A9C6FB0)
#define PIHMIDGCDGM_HEBCEFFKJIM_OFFSET UNITYSDK_OFFSET(0x1A9C7970)
#define PIHMIDGCDGM_INMDKGIGJNA_OFFSET UNITYSDK_OFFSET(0x1A9C7670)
#define PIHMIDGCDGM_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x1A9C7090)
#define PIHMIDGCDGM_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0x1A9C7350)
#define PIHMIDGCDGM_LEDGFKKGOJE_OFFSET UNITYSDK_OFFSET(0x1A9C7820)
#define PIHMIDGCDGM_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x1A9C72D0)
#define PIHMIDGCDGM_MFCGCFAFMPA_OFFSET UNITYSDK_OFFSET(0x1A9C7D30)
#define PIHMIDGCDGM_MMDPHANJGBH_OFFSET UNITYSDK_OFFSET(0x1A9C7180)
#define PIHMIDGCDGM_NIMGEJLLJME_OFFSET UNITYSDK_OFFSET(0x1A9C73A0)
#define PIHMIDGCDGM_OCKFBJOAKLE_OFFSET UNITYSDK_OFFSET(0x1A9C7C10)
#define PIHMIDGCDGM_OFDDFDGKNPJ_OFFSET UNITYSDK_OFFSET(0x1A9C7790)
#define PIHMIDGCDGM_PADHGKJFDGD_OFFSET UNITYSDK_OFFSET(0x1A9C7120)
#define PIHMIDGCDGM_PAHFGFOJNFL_OFFSET UNITYSDK_OFFSET(0x1A9C7570)
#define PIHMIDGCDGM__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A9C6E30)
#define PIHMIDGCDGM__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A9C7270)
#define PIHMIDGCDGM__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A9C6EF0)
#define PIHMIDGCDGM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A9C7050)

inline static constexpr unsigned int PIHMIDGCDGM_TypeDefinitionIndex = 73969;

	class PIHMIDGCDGM : public ::FMPCODLIOLG
	{
	public:
		::MMHPBKNKBGP_EHCHDILLGPK* LFBDNBLMGOH; // 0x60
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x68
		::RPG::Client::RPGAnimationEvent* FPIHKNJFHEA; // 0x70
		::EANKAFJCEEH* MODMKBNMDKC; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::EnhanceSkillParam*>* ENJEHNBLAEM; // 0x80
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x88
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PIHMIDGCDGM__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM__SETUPVIEW_OFFSET))(this);
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
