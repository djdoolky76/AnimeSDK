#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/Client/TextID.h"
class KOAOAKKCCPK;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitEffectConfig; }
namespace RPG::Client { class PlanetFesPileToast; }
namespace RPG::Client { class PlanetFesToastItem; }
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace XLua { class LuaTable; }

#define OCNFFGBIMPD_BPMAIMOMBCL_OFFSET UNITYSDK_OFFSET(0xC677700)
#define OCNFFGBIMPD_CTOR_OFFSET UNITYSDK_OFFSET(0xC678140)
#define OCNFFGBIMPD_DDJLLLNADIL_OFFSET UNITYSDK_OFFSET(0xC677E80)
#define OCNFFGBIMPD_DEHKCAINBEN_OFFSET UNITYSDK_OFFSET(0xC677BB0)
#define OCNFFGBIMPD_EGLHCCFNAGK_OFFSET UNITYSDK_OFFSET(0xC677DB0)
#define OCNFFGBIMPD_EHELEMMLLFK_OFFSET UNITYSDK_OFFSET(0xC6779B0)
#define OCNFFGBIMPD_FMCLLMAHGON_OFFSET UNITYSDK_OFFSET(0xC677A80)
#define OCNFFGBIMPD_GCPDHJNNOPJ_OFFSET UNITYSDK_OFFSET(0xC677CE0)
#define OCNFFGBIMPD_HCEHGJFHFIO_OFFSET UNITYSDK_OFFSET(0xC677A00)
#define OCNFFGBIMPD_IPGFGKHOLDE_OFFSET UNITYSDK_OFFSET(0xC677B10)
#define OCNFFGBIMPD_JFDCIOCHNPH_OFFSET UNITYSDK_OFFSET(0xC677F00)
#define OCNFFGBIMPD_MOMCPCBNKGC_OFFSET UNITYSDK_OFFSET(0xC677750)
#define OCNFFGBIMPD_OCIDJJAJBBE_OFFSET UNITYSDK_OFFSET(0xC677890)
#define OCNFFGBIMPD_OHOONKCGEMM_OFFSET UNITYSDK_OFFSET(0xC677C90)
#define OCNFFGBIMPD__ONBIND_OFFSET UNITYSDK_OFFSET(0xC676600)
#define OCNFFGBIMPD__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC677390)
#define OCNFFGBIMPD___ONBIND_B__1_0_OFFSET UNITYSDK_OFFSET(0xC6781B0)
#define OCNFFGBIMPD___ONBIND_B__1_1_OFFSET UNITYSDK_OFFSET(0xC6781D0)
#define OCNFFGBIMPD___ONBIND_B__1_2_OFFSET UNITYSDK_OFFSET(0xC678200)

inline static constexpr unsigned int OCNFFGBIMPD_TypeDefinitionIndex = 74370;

	class OCNFFGBIMPD : public ::FMPCODLIOLG
	{
	public:
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x60
		::UnityEngine::Transform* EOHPFMPALCM; // 0x68
		::System::String* IIFENECAOBG; // 0x70
		::UnityEngine::UI::Text* BMNOOHFKLDB; // 0x78
		::RPG::Client::SPProgress* MFABGPCLCEE; // 0x80
		::UnityEngine::UI::Text* HHCKFCILELK; // 0x88
		::RPG::Client::GridFightTraitConfigBase* AJDMLJMMPMJ; // 0x90
		::RPG::Client::GridFightTraitEffectConfig* HECGJKBHOMI; // 0x98
		::RPG::GameCore::BattleGridFightTeamTraitData* NHDBMHJLKNF; // 0xA0
		::UnityEngine::UI::Text* JBMFLIDFHCC; // 0xA8
		::System::String* CGNGHKIIGCM; // 0xB0
		::RPG::Client::GridFightTrait* ENFAMOIAMGL; // 0xB8
		::UnityEngine::Transform* IPBNIJLCAHL; // 0xC0
		::UnityEngine::UI::Text* OMFNCCFLLCJ; // 0xC8
		::UnityEngine::UI::Text* KPICPMEANJJ; // 0xD0
		::UnityEngine::UI::Text* GKAOKENILKM; // 0xD8
		::UnityEngine::Animation* HBEEFKHLPGJ; // 0xE0
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0xE8
		::UnityEngine::Transform* GBGMCPAPOOH; // 0xF0
		::UnityEngine::Animation* CKKPBOJLMGN; // 0xF8
		::RPG::Client::PlanetFesPileToast* FBBAMPDHMMJ; // 0x100
		::System::Action_1<::System::Object*>* AMIEOPJOEIJ; // 0x108
		::UnityEngine::Transform* AMAEADENAGL; // 0x110
		::RPG::Client::AnimatorButton* NHNPPHCCPGA; // 0x118
		::RPG::Client::PlanetFesPileToast* CCGOIGGGPBP; // 0x120
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object MOIKPPOCGOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNFFGBIMPD__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + OCNFFGBIMPD__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void BPMAIMOMBCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_BPMAIMOMBCL_OFFSET))(this, a1);
		}

		::System::Void MOMCPCBNKGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_MOMCPCBNKGC_OFFSET))(this);
		}

		::System::Void OCIDJJAJBBE(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_OCIDJJAJBBE_OFFSET))(this, a1, a2);
		}

		::System::Void EHELEMMLLFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_EHELEMMLLFK_OFFSET))(this);
		}

		::System::Void HCEHGJFHFIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_HCEHGJFHFIO_OFFSET))(this);
		}

		::System::Void FMCLLMAHGON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_FMCLLMAHGON_OFFSET))(this, a1);
		}

		::System::Void IPGFGKHOLDE(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_IPGFGKHOLDE_OFFSET))(this, a1, a2);
		}

		::System::Void DEHKCAINBEN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_DEHKCAINBEN_OFFSET))(this, a1);
		}

		::System::Void OHOONKCGEMM(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_OHOONKCGEMM_OFFSET))(this, a1);
		}

		::System::Void GCPDHJNNOPJ(::RPG::Client::TextID a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_GCPDHJNNOPJ_OFFSET))(this, a1, a2);
		}

		::System::Void EGLHCCFNAGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_EGLHCCFNAGK_OFFSET))(this);
		}

		::System::Void DDJLLLNADIL(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_DDJLLLNADIL_OFFSET))(this, a1, a2);
		}

		::System::Void JFDCIOCHNPH(::XLua::LuaTable* a1, ::RPG::Client::PlanetFesToastItem* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_JFDCIOCHNPH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __OnBind_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNFFGBIMPD___ONBIND_B__1_0_OFFSET))(this);
		}

		::System::Void __OnBind_b__1_1(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OCNFFGBIMPD___ONBIND_B__1_1_OFFSET))(this, a1);
		}

		::System::Void __OnBind_b__1_2(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OCNFFGBIMPD___ONBIND_B__1_2_OFFSET))(this, a1);
		}

	};
