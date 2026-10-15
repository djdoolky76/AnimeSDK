#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class PlanetFesPileToast; }
namespace RPG::Client { class PlanetFesToastItem; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace XLua { class LuaTable; }

#define NNCKBIHOFIP_BCHBCHGIHFH_OFFSET UNITYSDK_OFFSET(0xBC9ECA0)
#define NNCKBIHOFIP_CTOR_OFFSET UNITYSDK_OFFSET(0xBC9ED20)
#define NNCKBIHOFIP_DEBGJNAJFGE_OFFSET UNITYSDK_OFFSET(0xBC9E6B0)
#define NNCKBIHOFIP_ECECDBNNMCG_OFFSET UNITYSDK_OFFSET(0xBC783E0)
#define NNCKBIHOFIP_EGLHCCFNAGK_OFFSET UNITYSDK_OFFSET(0xBC78090)
#define NNCKBIHOFIP_FGLPIJMMOLG_OFFSET UNITYSDK_OFFSET(0xBC9E820)
#define NNCKBIHOFIP_GCPDHJNNOPJ_OFFSET UNITYSDK_OFFSET(0xBC78180)
#define NNCKBIHOFIP_IADFEHDKIMJ_OFFSET UNITYSDK_OFFSET(0xBC9E7C0)
#define NNCKBIHOFIP_JFDCIOCHNPH_OFFSET UNITYSDK_OFFSET(0xBC9EAE0)
#define NNCKBIHOFIP_KOGJBOIEPOM_OFFSET UNITYSDK_OFFSET(0xBC9E880)
#define NNCKBIHOFIP_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0xBC9EA00)
#define NNCKBIHOFIP_NFFAGDNMDBJ_OFFSET UNITYSDK_OFFSET(0xBC78280)
#define NNCKBIHOFIP_NGHCLGEOHBL_OFFSET UNITYSDK_OFFSET(0xBC9EA70)
#define NNCKBIHOFIP_NJJAJAGFDPL_OFFSET UNITYSDK_OFFSET(0xBC9E9B0)
#define NNCKBIHOFIP_NMCPLGHHENB_OFFSET UNITYSDK_OFFSET(0xBC9E960)
#define NNCKBIHOFIP_PCFELLPMCKA_OFFSET UNITYSDK_OFFSET(0xBC9E8E0)
#define NNCKBIHOFIP__ONBIND_OFFSET UNITYSDK_OFFSET(0xBC9E1F0)

inline static constexpr unsigned int NNCKBIHOFIP_TypeDefinitionIndex = 72289;

	class NNCKBIHOFIP : public ::FMPCODLIOLG
	{
	public:
		::System::Action* JGFCKPDHLOE; // 0x60
		::RPG::Client::PlanetFesPileToast* LACCMLOMHPN; // 0x68
		::UnityEngine::UI::Text* CALNLFBNMPM; // 0x70
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x78
		::RPG::Client::PlanetFesPileToast* ILPKEFHJLEM; // 0x80
		::UnityEngine::UI::Button* NHNPPHCCPGA; // 0x88
		::UnityEngine::UI::Image* BHLEJNMFEBO; // 0x90
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x98
		::System::Action* LAGNOBDAKBC; // 0xA0
		::UnityEngine::Animation* ELPADEDCEBL; // 0xA8
		::System::String* FADILKPGCEM; // 0xB0
		::UnityEngine::UI::Text* DGKCFJNCJON; // 0xB8
		::UnityEngine::Transform* EHCJHBJOIEO; // 0xC0
		::UnityEngine::Transform* CHKCJACOFBL; // 0xC8
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* MDHPMALNBMN; // 0x0
		// static const ::System::String* CKELLBLEIFM; // 0x0
		// static const ::System::String* PEJOMBCBIPO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCKBIHOFIP__ONBIND_OFFSET))(this);
		}

		::System::Void DEBGJNAJFGE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_DEBGJNAJFGE_OFFSET))(this, a1);
		}

		::System::Void IADFEHDKIMJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_IADFEHDKIMJ_OFFSET))(this, a1);
		}

		::System::Void FGLPIJMMOLG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_FGLPIJMMOLG_OFFSET))(this, a1);
		}

		::System::Void KOGJBOIEPOM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_KOGJBOIEPOM_OFFSET))(this, a1);
		}

		::System::Void NFFAGDNMDBJ(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_NFFAGDNMDBJ_OFFSET))(this, a1, a2);
		}

		::System::Void GCPDHJNNOPJ(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_GCPDHJNNOPJ_OFFSET))(this, a1);
		}

		::System::Void ECECDBNNMCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_ECECDBNNMCG_OFFSET))(this);
		}

		::System::Void PCFELLPMCKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_PCFELLPMCKA_OFFSET))(this);
		}

		::System::Void EGLHCCFNAGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_EGLHCCFNAGK_OFFSET))(this);
		}

		::System::Void NMCPLGHHENB(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_NMCPLGHHENB_OFFSET))(this, a1);
		}

		::System::Void NJJAJAGFDPL(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_NJJAJAGFDPL_OFFSET))(this, a1);
		}

		::System::Void NEOFNEBLKKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_NEOFNEBLKKL_OFFSET))(this, a1);
		}

		::System::Void NGHCLGEOHBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_NGHCLGEOHBL_OFFSET))(this);
		}

		::System::Void JFDCIOCHNPH(::XLua::LuaTable* a1, ::RPG::Client::PlanetFesToastItem* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_JFDCIOCHNPH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BCHBCHGIHFH(::XLua::LuaTable* a1, ::RPG::Client::PlanetFesToastItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*))((::PBYTE)hIl2Cpp + NNCKBIHOFIP_BCHBCHGIHFH_OFFSET))(this, a1, a2);
		}

	};
