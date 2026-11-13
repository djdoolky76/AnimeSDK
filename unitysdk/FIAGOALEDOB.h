#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/KOFIMLBOMIG_DFBLEFCCCJO.h"
class OJOIPAOONEB;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define FIAGOALEDOB_ABDNGAEEJMD_OFFSET UNITYSDK_OFFSET(0x197F4300)
#define FIAGOALEDOB_APBGFOEPDEO_OFFSET UNITYSDK_OFFSET(0x197F4250)
#define FIAGOALEDOB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x197F4430)
#define FIAGOALEDOB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x197F4520)
#define FIAGOALEDOB_CTOR_OFFSET UNITYSDK_OFFSET(0x197F45F0)
#define FIAGOALEDOB_ECIDOMNCKDP_OFFSET UNITYSDK_OFFSET(0x197F3AD0)
#define FIAGOALEDOB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x197F2F70)
#define FIAGOALEDOB_GAAFBAJBJPF_OFFSET UNITYSDK_OFFSET(0x197F3420)
#define FIAGOALEDOB_IGKDFAGCKOD_OFFSET UNITYSDK_OFFSET(0x197F3C50)
#define FIAGOALEDOB_KOFGHGIMKBM_OFFSET UNITYSDK_OFFSET(0x197F3610)
#define FIAGOALEDOB_MCKGIEMOAMF_OFFSET UNITYSDK_OFFSET(0x197F36F0)
#define FIAGOALEDOB_MNENGFILHMO_OFFSET UNITYSDK_OFFSET(0x197F40A0)
#define FIAGOALEDOB_NFEAANBJFFF_OFFSET UNITYSDK_OFFSET(0x197F33B0)
#define FIAGOALEDOB_PIIIJNEACHE_OFFSET UNITYSDK_OFFSET(0x197F3A40)
#define FIAGOALEDOB__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x197F2E00)
#define FIAGOALEDOB__ONBIND_OFFSET UNITYSDK_OFFSET(0x197F2B20)
#define FIAGOALEDOB__ONTICK_OFFSET UNITYSDK_OFFSET(0x197F3690)
#define FIAGOALEDOB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x197F3130)

inline static constexpr unsigned int FIAGOALEDOB_TypeDefinitionIndex = 73345;

	class FIAGOALEDOB : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::PrefabLoadMeta* OGJJJANDJMP; // 0x60
		::UnityEngine::Animator* CFNGLMDMENE; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* HGIGMGGMOMF; // 0x70
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x78
		::UnityEngine::UI::Button* KGIHHFEPFGI; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OJOIPAOONEB*>* NPMBAGJOEIF; // 0x88
		::UnityEngine::UI::Text* KPGIMPEHLBB; // 0x90
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x98
		::System::UInt32 MNJKKOJPHOM; // 0xA0
		::System::UInt32 FBGKMMIPDGG; // 0xA4
		::System::UInt32 ICDKPDIMLKL; // 0xA8
		::System::Int32 BELMHOPIJOM; // 0xAC
		::System::Int32 GPPCJJELDHJ; // 0xB0
		::System::Int32 GJMILDOCNBE; // 0xB4
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB__ONBIND_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB__INITVARONCE_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB__SETUPVIEW_OFFSET))(this);
		}

		::System::Void GAAFBAJBJPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIAGOALEDOB_GAAFBAJBJPF_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIAGOALEDOB__ONTICK_OFFSET))(this, a1);
		}

		::System::Void PIIIJNEACHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIAGOALEDOB_PIIIJNEACHE_OFFSET))(this, a1);
		}

		::System::Void ECIDOMNCKDP(::KOFIMLBOMIG_DFBLEFCCCJO a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOFIMLBOMIG_DFBLEFCCCJO))((::PBYTE)hIl2Cpp + FIAGOALEDOB_ECIDOMNCKDP_OFFSET))(this, a1);
		}

		::System::Void NFEAANBJFFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIAGOALEDOB_NFEAANBJFFF_OFFSET))(this, a1);
		}

		::System::Void IGKDFAGCKOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIAGOALEDOB_IGKDFAGCKOD_OFFSET))(this, a1);
		}

		::System::Void MCKGIEMOAMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB_MCKGIEMOAMF_OFFSET))(this);
		}

		::System::Void MNENGFILHMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB_MNENGFILHMO_OFFSET))(this);
		}

		::System::Void APBGFOEPDEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB_APBGFOEPDEO_OFFSET))(this);
		}

		::System::Void KOFGHGIMKBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB_KOFGHGIMKBM_OFFSET))(this);
		}

		::System::Void ABDNGAEEJMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIAGOALEDOB_ABDNGAEEJMD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
