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

#define EJLNMFOPGOP_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x19AC23C0)
#define EJLNMFOPGOP_BDFEBABFDKD_OFFSET UNITYSDK_OFFSET(0x19AC2AC0)
#define EJLNMFOPGOP_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x19AC2660)
#define EJLNMFOPGOP_CFNGHKMBLDM_OFFSET UNITYSDK_OFFSET(0x19AC1E50)
#define EJLNMFOPGOP_CTOR_OFFSET UNITYSDK_OFFSET(0x19AC38C0)
#define EJLNMFOPGOP_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0x19AC2470)
#define EJLNMFOPGOP_EAGFCBLIOBM_OFFSET UNITYSDK_OFFSET(0x19AC3490)
#define EJLNMFOPGOP_EMBLBFNACLN_OFFSET UNITYSDK_OFFSET(0x19AC1FD0)
#define EJLNMFOPGOP_EOEIPIPHOEK_OFFSET UNITYSDK_OFFSET(0x19AC3790)
#define EJLNMFOPGOP_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0x19AC2850)
#define EJLNMFOPGOP_GBLPCLMMEGF_OFFSET UNITYSDK_OFFSET(0x19AC3720)
#define EJLNMFOPGOP_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0x19AC28A0)
#define EJLNMFOPGOP_HLJFOJDPGBO_OFFSET UNITYSDK_OFFSET(0x19AC2F70)
#define EJLNMFOPGOP_IKHMEKACNBB_OFFSET UNITYSDK_OFFSET(0x19AC2C00)
#define EJLNMFOPGOP_KCCAGHPJICO_OFFSET UNITYSDK_OFFSET(0x19AC2070)
#define EJLNMFOPGOP_KNNCADODGOK_OFFSET UNITYSDK_OFFSET(0x19AC2940)
#define EJLNMFOPGOP_LCBAGLPOCPE_OFFSET UNITYSDK_OFFSET(0x19AC2E40)
#define EJLNMFOPGOP_LJAEPOPOLDM_OFFSET UNITYSDK_OFFSET(0x19AC2020)
#define EJLNMFOPGOP_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x19AC24C0)
#define EJLNMFOPGOP_MJMIMFCGKND_OFFSET UNITYSDK_OFFSET(0x19AC2F20)
#define EJLNMFOPGOP_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x19AC28F0)
#define EJLNMFOPGOP_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0x19AC1F90)
#define EJLNMFOPGOP_OCEBFAAAJBJ_OFFSET UNITYSDK_OFFSET(0x19AC2290)
#define EJLNMFOPGOP_ODHBBFCDGJB_OFFSET UNITYSDK_OFFSET(0x19AC3390)
#define EJLNMFOPGOP_PIHMHCMHJLP_OFFSET UNITYSDK_OFFSET(0x19AC2FC0)
#define EJLNMFOPGOP__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x19AC20C0)
#define EJLNMFOPGOP__ONBIND_OFFSET UNITYSDK_OFFSET(0x19AC19D0)
#define EJLNMFOPGOP__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x19AC2330)
#define EJLNMFOPGOP__ONTICK_OFFSET UNITYSDK_OFFSET(0x19AC21E0)
#define EJLNMFOPGOP__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19AC2240)

inline static constexpr unsigned int EJLNMFOPGOP_TypeDefinitionIndex = 73925;

	class EJLNMFOPGOP : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::SkillData* OCOIDGHBAEH; // 0x60
		::MHOEIMBHDGK* ELKGJBJIOKG; // 0x68
		::JCPOFHFHMLD* AKCIJFEMHKB; // 0x70
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x78
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x80
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x88
		::RPG::Client::LocalizedText* HAPJFLCGOMC; // 0x90
		::UnityEngine::RectTransform* EGKOCBGAFPB; // 0x98
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0xA0
		::RPG::Client::MonoInControlButton* OKPAHCBDGKF; // 0xA8
		::RPG::Client::LongPressEvent* BDGDKFKOBIM; // 0xB0
		::EANKAFJCEEH* ABOBEBEOHPA; // 0xB8
		::UnityEngine::Transform* NKMKJHIIHEG; // 0xC0
		::System::Boolean HAECKDHIFMM; // 0xC8
		::System::Byte _padding0[0x3];
		::RPG::Client::UISkillIndex FFNBLDFFMCN; // 0xCC
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

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJLNMFOPGOP__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNMFOPGOP__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EJLNMFOPGOP__ONINITPARAMS_OFFSET))(this, a1);
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
