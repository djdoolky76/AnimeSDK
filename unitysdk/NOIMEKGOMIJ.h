#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class CKMNJCKACJB;
class LGIHDAMOLNK;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Text; }

#define NOIMEKGOMIJ_APBGFOEPDEO_OFFSET UNITYSDK_OFFSET(0xBCF20C0)
#define NOIMEKGOMIJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBCF2230)
#define NOIMEKGOMIJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBCF2320)
#define NOIMEKGOMIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF23F0)
#define NOIMEKGOMIJ_ECIDOMNCKDP_OFFSET UNITYSDK_OFFSET(0xBCF1930)
#define NOIMEKGOMIJ_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBCF11D0)
#define NOIMEKGOMIJ_GAAFBAJBJPF_OFFSET UNITYSDK_OFFSET(0xBCF1470)
#define NOIMEKGOMIJ_HJCLBHDEPKG_OFFSET UNITYSDK_OFFSET(0xBCF18D0)
#define NOIMEKGOMIJ_IGKDFAGCKOD_OFFSET UNITYSDK_OFFSET(0xBCF1B70)
#define NOIMEKGOMIJ_KOFGHGIMKBM_OFFSET UNITYSDK_OFFSET(0xBCF1E90)
#define NOIMEKGOMIJ_MCKGIEMOAMF_OFFSET UNITYSDK_OFFSET(0xBCF1580)
#define NOIMEKGOMIJ_MDEEGPDEOCA_OFFSET UNITYSDK_OFFSET(0xBCF2170)
#define NOIMEKGOMIJ_MNENGFILHMO_OFFSET UNITYSDK_OFFSET(0xBCF1F10)
#define NOIMEKGOMIJ_NFEAANBJFFF_OFFSET UNITYSDK_OFFSET(0xBCF13F0)
#define NOIMEKGOMIJ_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xBCF14C0)
#define NOIMEKGOMIJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xBCF1110)
#define NOIMEKGOMIJ__ONTICK_OFFSET UNITYSDK_OFFSET(0xBCF1520)

	class NOIMEKGOMIJ : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* CFNGLMDMENE; // 0x60
		::RPG::Client::PrefabLoadMeta* OGJJJANDJMP; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LGIHDAMOLNK*>* NPMBAGJOEIF; // 0x70
		::UnityEngine::UI::Text* KPGIMPEHLBB; // 0x78
		::System::Int32 ICDKPDIMLKL; // 0x80
		::System::Int32 GPPCJJELDHJ; // 0x84
		::System::Int32 GJMILDOCNBE; // 0x88
		::System::Int32 FBGKMMIPDGG; // 0x8C
		::System::Int32 BELMHOPIJOM; // 0x90
		::System::Boolean FMNEEONAMNO; // 0x94
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void GAAFBAJBJPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_GAAFBAJBJPF_OFFSET))(this, a1);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ__ONTICK_OFFSET))(this, a1);
		}

		::System::Void HJCLBHDEPKG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_HJCLBHDEPKG_OFFSET))(this, a1);
		}

		::System::Void ECIDOMNCKDP(::CKMNJCKACJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKMNJCKACJB*))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_ECIDOMNCKDP_OFFSET))(this, a1);
		}

		::System::Void NFEAANBJFFF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_NFEAANBJFFF_OFFSET))(this, a1);
		}

		::System::Void IGKDFAGCKOD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_IGKDFAGCKOD_OFFSET))(this, a1);
		}

		::System::Void MCKGIEMOAMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_MCKGIEMOAMF_OFFSET))(this);
		}

		::System::Void MNENGFILHMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_MNENGFILHMO_OFFSET))(this);
		}

		::System::Void APBGFOEPDEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_APBGFOEPDEO_OFFSET))(this);
		}

		::System::Void KOFGHGIMKBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_KOFGHGIMKBM_OFFSET))(this);
		}

		::System::Void MDEEGPDEOCA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_MDEEGPDEOCA_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIMEKGOMIJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
