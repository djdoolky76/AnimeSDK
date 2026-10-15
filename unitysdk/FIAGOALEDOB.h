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

#define FIAGOALEDOB_ABDNGAEEJMD_OFFSET UNITYSDK_OFFSET(0x1578B1D0)
#define FIAGOALEDOB_APBGFOEPDEO_OFFSET UNITYSDK_OFFSET(0x1578B120)
#define FIAGOALEDOB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1578B300)
#define FIAGOALEDOB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1578B3F0)
#define FIAGOALEDOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1578B4C0)
#define FIAGOALEDOB_ECIDOMNCKDP_OFFSET UNITYSDK_OFFSET(0x1578A9A0)
#define FIAGOALEDOB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x15789E40)
#define FIAGOALEDOB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x1578A000)
#define FIAGOALEDOB_GAAFBAJBJPF_OFFSET UNITYSDK_OFFSET(0x1578A2E0)
#define FIAGOALEDOB_IGKDFAGCKOD_OFFSET UNITYSDK_OFFSET(0x1578AB20)
#define FIAGOALEDOB_KOFGHGIMKBM_OFFSET UNITYSDK_OFFSET(0x1578A4E0)
#define FIAGOALEDOB_MCKGIEMOAMF_OFFSET UNITYSDK_OFFSET(0x1578A5C0)
#define FIAGOALEDOB_MNENGFILHMO_OFFSET UNITYSDK_OFFSET(0x1578AF70)
#define FIAGOALEDOB_NFEAANBJFFF_OFFSET UNITYSDK_OFFSET(0x1578A270)
#define FIAGOALEDOB_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15789CD0)
#define FIAGOALEDOB_PIIIJNEACHE_OFFSET UNITYSDK_OFFSET(0x1578A910)
#define FIAGOALEDOB__ONBIND_OFFSET UNITYSDK_OFFSET(0x15789BD0)
#define FIAGOALEDOB__ONTICK_OFFSET UNITYSDK_OFFSET(0x1578A560)

inline static constexpr unsigned int FIAGOALEDOB_TypeDefinitionIndex = 71368;

	class FIAGOALEDOB : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Button* KGIHHFEPFGI; // 0x60
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x68
		::UnityEngine::Animator* CFNGLMDMENE; // 0x70
		::RPG::Client::PrefabLoadMeta* OGJJJANDJMP; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OJOIPAOONEB*>* NPMBAGJOEIF; // 0x80
		::UnityEngine::UI::Text* KPGIMPEHLBB; // 0x88
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* HGIGMGGMOMF; // 0x98
		::System::Int32 GPPCJJELDHJ; // 0xA0
		::System::UInt32 ICDKPDIMLKL; // 0xA4
		::System::Int32 BELMHOPIJOM; // 0xA8
		::System::Int32 GJMILDOCNBE; // 0xAC
		::System::UInt32 MNJKKOJPHOM; // 0xB0
		::System::UInt32 FBGKMMIPDGG; // 0xB4
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB__ONBIND_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAGOALEDOB_EKGCGIDIFJJ_OFFSET))(this);
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
