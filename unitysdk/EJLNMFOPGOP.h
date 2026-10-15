#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EANKAFJCEEH;
class FMPCODLIOLG;
class JCPOFHFHMLD;
class MHOEIMBHDGK;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class SkillData; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define EJLNMFOPGOP_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x154EB7B0)
#define EJLNMFOPGOP_BDFEBABFDKD_OFFSET UNITYSDK_OFFSET(0x154EBEB0)
#define EJLNMFOPGOP_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x154EBA50)
#define EJLNMFOPGOP_CFNGHKMBLDM_OFFSET UNITYSDK_OFFSET(0x154EB240)
#define EJLNMFOPGOP_CTOR_OFFSET UNITYSDK_OFFSET(0x154ECCB0)
#define EJLNMFOPGOP_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0x154EB860)
#define EJLNMFOPGOP_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x154EB720)
#define EJLNMFOPGOP_EAGFCBLIOBM_OFFSET UNITYSDK_OFFSET(0x154EC880)
#define EJLNMFOPGOP_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x154EB630)
#define EJLNMFOPGOP_EMBLBFNACLN_OFFSET UNITYSDK_OFFSET(0x154EB3C0)
#define EJLNMFOPGOP_EOEIPIPHOEK_OFFSET UNITYSDK_OFFSET(0x154ECB80)
#define EJLNMFOPGOP_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0x154EBC40)
#define EJLNMFOPGOP_GBLPCLMMEGF_OFFSET UNITYSDK_OFFSET(0x154ECB10)
#define EJLNMFOPGOP_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0x154EBC90)
#define EJLNMFOPGOP_HLJFOJDPGBO_OFFSET UNITYSDK_OFFSET(0x154EC360)
#define EJLNMFOPGOP_IKHMEKACNBB_OFFSET UNITYSDK_OFFSET(0x154EBFF0)
#define EJLNMFOPGOP_KCCAGHPJICO_OFFSET UNITYSDK_OFFSET(0x154EB460)
#define EJLNMFOPGOP_KNNCADODGOK_OFFSET UNITYSDK_OFFSET(0x154EBD30)
#define EJLNMFOPGOP_LCBAGLPOCPE_OFFSET UNITYSDK_OFFSET(0x154EC230)
#define EJLNMFOPGOP_LJAEPOPOLDM_OFFSET UNITYSDK_OFFSET(0x154EB410)
#define EJLNMFOPGOP_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x154EB8B0)
#define EJLNMFOPGOP_MJMIMFCGKND_OFFSET UNITYSDK_OFFSET(0x154EC310)
#define EJLNMFOPGOP_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x154EB4B0)
#define EJLNMFOPGOP_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x154EBCE0)
#define EJLNMFOPGOP_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0x154EB380)
#define EJLNMFOPGOP_OCEBFAAAJBJ_OFFSET UNITYSDK_OFFSET(0x154EB680)
#define EJLNMFOPGOP_ODHBBFCDGJB_OFFSET UNITYSDK_OFFSET(0x154EC780)
#define EJLNMFOPGOP_PIHMHCMHJLP_OFFSET UNITYSDK_OFFSET(0x154EC3B0)
#define EJLNMFOPGOP__ONBIND_OFFSET UNITYSDK_OFFSET(0x154EAFE0)
#define EJLNMFOPGOP__ONTICK_OFFSET UNITYSDK_OFFSET(0x154EB5D0)

inline static constexpr unsigned int EJLNMFOPGOP_TypeDefinitionIndex = 71905;

	class EJLNMFOPGOP : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::SkillData* OCOIDGHBAEH; // 0x60
		::EANKAFJCEEH* ABOBEBEOHPA; // 0x68
		::RPG::Client::LocalizedText* HAPJFLCGOMC; // 0x70
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x78
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x80
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x88
		::MHOEIMBHDGK* ELKGJBJIOKG; // 0x90
		::RPG::Client::MonoInControlButton* OKPAHCBDGKF; // 0x98
		::JCPOFHFHMLD* AKCIJFEMHKB; // 0xA0
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xA8
		::UnityEngine::RectTransform* EGKOCBGAFPB; // 0xB0
		::UnityEngine::Transform* NKMKJHIIHEG; // 0xB8
		::RPG::Client::LongPressEvent* BDGDKFKOBIM; // 0xC0
		::RPG::Client::UISkillIndex FFNBLDFFMCN; // 0xC8
		::System::Boolean HAECKDHIFMM; // 0xCC
		// static const ::System::String* BKNKKNOEEMM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP__ONBIND_OFFSET))(this);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_OAAOHHINHPH_OFFSET))(this);
		}

		::RPG::Client::LongPressEvent* EMBLBFNACLN()
		{
			return ((::RPG::Client::LongPressEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_EMBLBFNACLN_OFFSET))(this);
		}

		::RPG::Client::MonoInControlButton* LJAEPOPOLDM()
		{
			return ((::RPG::Client::MonoInControlButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_LJAEPOPOLDM_OFFSET))(this);
		}

		::RPG::Client::MonoInControlTip* KCCAGHPJICO()
		{
			return ((::RPG::Client::MonoInControlTip*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_KCCAGHPJICO_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJLNMFOPGOP__ONTICK_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void OCEBFAAAJBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_OCEBFAAAJBJ_OFFSET))(this);
		}

		::System::Void BDFEBABFDKD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_BDFEBABFDKD_OFFSET))(this, a1, a2);
		}

		::System::Void CFNGHKMBLDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_CFNGHKMBLDM_OFFSET))(this);
		}

		::System::Void KNNCADODGOK(::RPG::GameCore::ICharacterSkillRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_KNNCADODGOK_OFFSET))(this, a1);
		}

		::System::Void IKHMEKACNBB(::RPG::Client::LongPressEvent* a1, ::RPG::Client::MonoInControlTip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LongPressEvent*, ::RPG::Client::MonoInControlTip*))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_IKHMEKACNBB_OFFSET))(this, a1, a2);
		}

		::System::Void LCBAGLPOCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_LCBAGLPOCPE_OFFSET))(this);
		}

		::System::Void HLJFOJDPGBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_HLJFOJDPGBO_OFFSET))(this);
		}

		::System::Void ODHBBFCDGJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_ODHBBFCDGJB_OFFSET))(this);
		}

		::System::Void GBLPCLMMEGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_GBLPCLMMEGF_OFFSET))(this);
		}

		::System::Boolean EAGFCBLIOBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_EAGFCBLIOBM_OFFSET))(this);
		}

		::System::Void MJMIMFCGKND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_MJMIMFCGKND_OFFSET))(this);
		}

		::System::Void PIHMHCMHJLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_PIHMHCMHJLP_OFFSET))(this);
		}

		::System::Boolean EOEIPIPHOEK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EJLNMFOPGOP_EOEIPIPHOEK_OFFSET))(this, a1);
		}

	};
