#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/MJNIPBIIFND_SingleModeReason.h"
class AAHPFGHKBOJ;
class EKFMIDBJDIA;
class IHBPHJJBEHE;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define MJNIPBIIFND_ACAOANMOOJI_OFFSET UNITYSDK_OFFSET(0xB96B560)
#define MJNIPBIIFND_AOHEDDEEFCI_OFFSET UNITYSDK_OFFSET(0xB96B640)
#define MJNIPBIIFND_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB96C720)
#define MJNIPBIIFND_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB96C840)
#define MJNIPBIIFND_BMKEIONMBBI_OFFSET UNITYSDK_OFFSET(0xB96AF70)
#define MJNIPBIIFND_BPFNFDLBINP_OFFSET UNITYSDK_OFFSET(0xB96BD20)
#define MJNIPBIIFND_CEAJFPKNLCB_OFFSET UNITYSDK_OFFSET(0xB96B6F0)
#define MJNIPBIIFND_CTOR_OFFSET UNITYSDK_OFFSET(0xB96C930)
#define MJNIPBIIFND_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xB96C1C0)
#define MJNIPBIIFND_DPDOCIHLBOB_OFFSET UNITYSDK_OFFSET(0xB96B7F0)
#define MJNIPBIIFND_EAEMDPPOGIM_OFFSET UNITYSDK_OFFSET(0xB96BA90)
#define MJNIPBIIFND_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB96A9E0)
#define MJNIPBIIFND_EEBEJCNHHOB_OFFSET UNITYSDK_OFFSET(0xB96B230)
#define MJNIPBIIFND_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB96AC40)
#define MJNIPBIIFND_EPNGNJNABJG_OFFSET UNITYSDK_OFFSET(0xB96B010)
#define MJNIPBIIFND_HONHMGPPDBA_OFFSET UNITYSDK_OFFSET(0xB96B790)
#define MJNIPBIIFND_HPPCDHKEDEJ_OFFSET UNITYSDK_OFFSET(0xB96C660)
#define MJNIPBIIFND_IFHDCHKKMCN_OFFSET UNITYSDK_OFFSET(0xB96C4D0)
#define MJNIPBIIFND_IGBACOPFHHD_OFFSET UNITYSDK_OFFSET(0xB96B860)
#define MJNIPBIIFND_IILIABMPCNB_OFFSET UNITYSDK_OFFSET(0xB96ADD0)
#define MJNIPBIIFND_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xB96AD40)
#define MJNIPBIIFND_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0xB96C290)
#define MJNIPBIIFND_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB96B3D0)
#define MJNIPBIIFND_KAPCPJLLOMA_OFFSET UNITYSDK_OFFSET(0xB96B160)
#define MJNIPBIIFND_KILEEIEBPJO_OFFSET UNITYSDK_OFFSET(0xB96C480)
#define MJNIPBIIFND_LLFMMFPFAKB_OFFSET UNITYSDK_OFFSET(0xB96AEE0)
#define MJNIPBIIFND_LOPLPEPEIMM_OFFSET UNITYSDK_OFFSET(0xB96BE40)
#define MJNIPBIIFND_NEPBAIBHKJK_OFFSET UNITYSDK_OFFSET(0xB96BC80)
#define MJNIPBIIFND_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xB96ACD0)
#define MJNIPBIIFND_OEHPIOOIJDN_OFFSET UNITYSDK_OFFSET(0xB96C5A0)
#define MJNIPBIIFND_ONADINBPINH_OFFSET UNITYSDK_OFFSET(0xB96B0C0)
#define MJNIPBIIFND__ONBIND_OFFSET UNITYSDK_OFFSET(0xB96A720)
#define MJNIPBIIFND__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB96AE20)

inline static constexpr unsigned int MJNIPBIIFND_TypeDefinitionIndex = 71781;

	class MJNIPBIIFND : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::RPG::GameCore::CharacterDataComponent* HFKMDPCLJJB; // 0x68
		::UnityEngine::UI::Image* ANIHJHGMMDP; // 0x70
		::UnityEngine::Transform* HHFNDOIOBGN; // 0x78
		::UnityEngine::Transform* FPGJODMGOPJ; // 0x80
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x88
		::UnityEngine::Transform* FKBECEJDJND; // 0x90
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x98
		::UnityEngine::Transform* BCJLFGHECDD; // 0xA0
		::UnityEngine::Transform* PCPPHKODIOB; // 0xA8
		::UnityEngine::RectTransform* PIHAEKMBAGC; // 0xB0
		::RPG::GameCore::EventManager* DOBLIBIFBBK; // 0xB8
		::IHBPHJJBEHE* LEFDOCOCCBH; // 0xC0
		::MJNIPBIIFND_SingleModeReason FKGGKIJIKIM; // 0xC8
		// static const ::System::String* KIDNCNJBLEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MJNIPBIIFND_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MJNIPBIIFND_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void LLFMMFPFAKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_LLFMMFPFAKB_OFFSET))(this, a1);
		}

		::System::Void BMKEIONMBBI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_BMKEIONMBBI_OFFSET))(this, a1);
		}

		::System::Void EPNGNJNABJG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_EPNGNJNABJG_OFFSET))(this, a1);
		}

		::System::Void KAPCPJLLOMA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_KAPCPJLLOMA_OFFSET))(this, a1);
		}

		::System::Void EEBEJCNHHOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_EEBEJCNHHOB_OFFSET))(this, a1);
		}

		::System::Void ACAOANMOOJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_ACAOANMOOJI_OFFSET))(this, a1);
		}

		::System::Void HONHMGPPDBA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_HONHMGPPDBA_OFFSET))(this, a1);
		}

		::System::Void CEAJFPKNLCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND_CEAJFPKNLCB_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void LOPLPEPEIMM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_LOPLPEPEIMM_OFFSET))(this, a1);
		}

		::System::Void DOFNOIEDPFN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void JMNFOCENFLP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_JMNFOCENFLP_OFFSET))(this, a1);
		}

		::System::Void AOHEDDEEFCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND_AOHEDDEEFCI_OFFSET))(this);
		}

		::System::Void ONADINBPINH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND_ONADINBPINH_OFFSET))(this);
		}

		::System::Void IGBACOPFHHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND_IGBACOPFHHD_OFFSET))(this);
		}

		::System::Void IFHDCHKKMCN(::AAHPFGHKBOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAHPFGHKBOJ*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_IFHDCHKKMCN_OFFSET))(this, a1);
		}

		::System::Void EAEMDPPOGIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND_EAEMDPPOGIM_OFFSET))(this);
		}

		::System::Void NEPBAIBHKJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND_NEPBAIBHKJK_OFFSET))(this);
		}

		::System::Void BPFNFDLBINP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND_BPFNFDLBINP_OFFSET))(this);
		}

		::System::Void DPDOCIHLBOB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_DPDOCIHLBOB_OFFSET))(this, a1);
		}

		::System::Void IILIABMPCNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND_IILIABMPCNB_OFFSET))(this);
		}

		::System::Boolean KILEEIEBPJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND_KILEEIEBPJO_OFFSET))(this);
		}

		::System::Void OEHPIOOIJDN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_OEHPIOOIJDN_OFFSET))(this, a1);
		}

		::System::Void HPPCDHKEDEJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJNIPBIIFND_HPPCDHKEDEJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIPBIIFND_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
