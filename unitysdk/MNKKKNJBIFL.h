#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EANKAFJCEEH;
class FMPCODLIOLG;
class KANKEPCJION;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MNKKKNJBIFL_ABKALPICPLD_OFFSET UNITYSDK_OFFSET(0x1B1F8560)
#define MNKKKNJBIFL_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x1B1F7AE0)
#define MNKKKNJBIFL_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x1B1F7F70)
#define MNKKKNJBIFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1F85B0)
#define MNKKKNJBIFL_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0x1B1F7EF0)
#define MNKKKNJBIFL_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1B1F8410)
#define MNKKKNJBIFL_EMBLBFNACLN_OFFSET UNITYSDK_OFFSET(0x1B1F8390)
#define MNKKKNJBIFL_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0x1B1F8050)
#define MNKKKNJBIFL_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0x1B1F80D0)
#define MNKKKNJBIFL_KCCAGHPJICO_OFFSET UNITYSDK_OFFSET(0x1B1F8320)
#define MNKKKNJBIFL_LJAEPOPOLDM_OFFSET UNITYSDK_OFFSET(0x1B1F82A0)
#define MNKKKNJBIFL_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x1B1F7FF0)
#define MNKKKNJBIFL_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x1B1F8150)
#define MNKKKNJBIFL_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0x1B1F8230)
#define MNKKKNJBIFL_OCEBFAAAJBJ_OFFSET UNITYSDK_OFFSET(0x1B1F7CB0)
#define MNKKKNJBIFL__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B1F7880)
#define MNKKKNJBIFL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B1F7A60)

inline static constexpr unsigned int MNKKKNJBIFL_TypeDefinitionIndex = 73949;

	class MNKKKNJBIFL : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* COGOPBJHLME; // 0x60
		::UnityEngine::Animation* GPOEFFELJPG; // 0x68
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x70
		::IGKFNIEJGLM PMECLILMEDH; // 0x78
		::KANKEPCJION* HPADAGJIHAO; // 0x80
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x88
		::EANKAFJCEEH* ABOBEBEOHPA; // 0x90
		::System::Boolean NDMHHIAJCFP; // 0x98
		::System::Boolean AIJFMOBBACL; // 0x99
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* DADAJKEHPGC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKKNJBIFL__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MNKKKNJBIFL__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_OAAOHHINHPH_OFFSET))(this);
		}

		::RPG::Client::MonoInControlButton* LJAEPOPOLDM()
		{
			return ((::RPG::Client::MonoInControlButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_LJAEPOPOLDM_OFFSET))(this);
		}

		::RPG::Client::MonoInControlTip* KCCAGHPJICO()
		{
			return ((::RPG::Client::MonoInControlTip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_KCCAGHPJICO_OFFSET))(this);
		}

		::RPG::Client::LongPressEvent* EMBLBFNACLN()
		{
			return ((::RPG::Client::LongPressEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_EMBLBFNACLN_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void ABKALPICPLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_ABKALPICPLD_OFFSET))(this);
		}

		::System::Void OCEBFAAAJBJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + MNKKKNJBIFL_OCEBFAAAJBJ_OFFSET))(this, a1, a2);
		}

	};
