#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EANKAFJCEEH;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class LongPressEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define FENBKKMELOI_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x15728150)
#define FENBKKMELOI_CTOR_OFFSET UNITYSDK_OFFSET(0x15728510)
#define FENBKKMELOI_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15727230)
#define FENBKKMELOI_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x157272F0)
#define FENBKKMELOI_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15727570)
#define FENBKKMELOI_GAODPHKHBIP_OFFSET UNITYSDK_OFFSET(0x157283B0)
#define FENBKKMELOI_GBLPCLMMEGF_OFFSET UNITYSDK_OFFSET(0x15728410)
#define FENBKKMELOI_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x157284F0)
#define FENBKKMELOI_HLJFOJDPGBO_OFFSET UNITYSDK_OFFSET(0x15728340)
#define FENBKKMELOI_JIHIBDDMAPG_OFFSET UNITYSDK_OFFSET(0x15727340)
#define FENBKKMELOI_KNGGBAMPKID_OFFSET UNITYSDK_OFFSET(0x15727C50)
#define FENBKKMELOI_LCBAGLPOCPE_OFFSET UNITYSDK_OFFSET(0x157282E0)
#define FENBKKMELOI_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x157280E0)
#define FENBKKMELOI_MJMIMFCGKND_OFFSET UNITYSDK_OFFSET(0x15728490)
#define FENBKKMELOI_NENEOCNLNPP_OFFSET UNITYSDK_OFFSET(0x15727C00)
#define FENBKKMELOI_ONFKCDLHHEJ_OFFSET UNITYSDK_OFFSET(0x157281E0)
#define FENBKKMELOI_PIHMHCMHJLP_OFFSET UNITYSDK_OFFSET(0x15727D80)
#define FENBKKMELOI_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x15728500)
#define FENBKKMELOI__ONBIND_OFFSET UNITYSDK_OFFSET(0x15727030)
#define FENBKKMELOI__ONTICK_OFFSET UNITYSDK_OFFSET(0x15727CF0)

inline static constexpr unsigned int FENBKKMELOI_TypeDefinitionIndex = 71875;

	class FENBKKMELOI : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		::UnityEngine::Transform* PJNLAHMNPJP; // 0x68
		::EANKAFJCEEH* ABOBEBEOHPA; // 0x70
		::RPG::Client::LongPressEvent* BDGDKFKOBIM; // 0x78
		::UnityEngine::Transform* EEEDLPNBLND; // 0x80
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0x88
		::RPG::Client::LocalizedText* CNKCNJDBIJD; // 0x90
		::RPG::GameCore::SkillData* OCOIDGHBAEH; // 0x98
		::UnityEngine::Transform* JEKIAKPFELH; // 0xA0
		::RPG::Client::LocalizedText* CICDAIDENDF; // 0xA8
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xB0
		::System::Boolean _IsEnable_k__BackingField; // 0xB8
		::System::Boolean FHBNNGCEPFD; // 0xB9
		::System::Byte _padding0[0x2];
		::RPG::Client::UISkillIndex CKGLFLGFPPP; // 0xBC
		::System::Single DCIHJHCJNMI; // 0xC0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* JGEGLOKFOCM; // 0x0
		// static const ::System::String* JCLANKOMIIP; // 0x0
		// static const ::System::String* AEGLBFIEBAC; // 0x0
		// static const ::System::String* GAOFPPDCPCE; // 0x0
		// static const ::System::String* OPHLDLOJNGP; // 0x0
		// static const ::System::String* OCDKLPJMOLJ; // 0x0
		// static const ::System::String* IHJIOPAKFJO; // 0x0
		// static const ::System::String* BMBBPNFLIGC; // 0x0
		// static const ::System::Object LFLJFBNOKOB; // 0x0
		// static const ::System::String* OKIMBLGMCFD; // 0x0
		// static const ::System::String* ONNNIHPEFDL; // 0x0
		// static const ::System::String* KLMIBMHDODN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBKKMELOI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBKKMELOI__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FENBKKMELOI_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBKKMELOI_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBKKMELOI_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void KNGGBAMPKID(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FENBKKMELOI_KNGGBAMPKID_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FENBKKMELOI__ONTICK_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FENBKKMELOI_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ICharacterSkillRowData* a2, ::RPG::GameCore::SkillData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ICharacterSkillRowData*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + FENBKKMELOI_AFOCNOKBNBH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ONFKCDLHHEJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FENBKKMELOI_ONFKCDLHHEJ_OFFSET))(this, a1);
		}

		::System::Void JIHIBDDMAPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBKKMELOI_JIHIBDDMAPG_OFFSET))(this);
		}

		::System::Void LCBAGLPOCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBKKMELOI_LCBAGLPOCPE_OFFSET))(this);
		}

		::System::Void HLJFOJDPGBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBKKMELOI_HLJFOJDPGBO_OFFSET))(this);
		}

		::System::Void GBLPCLMMEGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBKKMELOI_GBLPCLMMEGF_OFFSET))(this);
		}

		::System::Void GAODPHKHBIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBKKMELOI_GAODPHKHBIP_OFFSET))(this);
		}

		::System::Void MJMIMFCGKND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBKKMELOI_MJMIMFCGKND_OFFSET))(this);
		}

		::System::Void PIHMHCMHJLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBKKMELOI_PIHMHCMHJLP_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBKKMELOI_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FENBKKMELOI_SET_ISENABLE_OFFSET))(this, a1);
		}

		::RPG::Client::UISkillIndex NENEOCNLNPP()
		{
			return ((::RPG::Client::UISkillIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBKKMELOI_NENEOCNLNPP_OFFSET))(this);
		}

	};
