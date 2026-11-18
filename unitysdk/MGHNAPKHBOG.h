#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OAMAMDGEJKH;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }

#define MGHNAPKHBOG_ABLLOIPILCN_OFFSET UNITYSDK_OFFSET(0x17D27110)
#define MGHNAPKHBOG_COBPIICGJJA_OFFSET UNITYSDK_OFFSET(0x7C0380)
#define MGHNAPKHBOG_CODPKFJEICG_OFFSET UNITYSDK_OFFSET(0x7C0410)
#define MGHNAPKHBOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7C0140)
#define MGHNAPKHBOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x7C0110)
#define MGHNAPKHBOG_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x7C0350)
#define MGHNAPKHBOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7C0230)
#define MGHNAPKHBOG_GIDLPKDLECH_OFFSET UNITYSDK_OFFSET(0x7C04D0)
#define MGHNAPKHBOG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7C0460)
#define MGHNAPKHBOG_IBNCFMCGHFC_OFFSET UNITYSDK_OFFSET(0x7C0630)
#define MGHNAPKHBOG_IHFOPDKPNCE_OFFSET UNITYSDK_OFFSET(0x7C0560)
#define MGHNAPKHBOG_IKCKJGACLHJ_OFFSET UNITYSDK_OFFSET(0x7C0570)
#define MGHNAPKHBOG_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x17D26670)
#define MGHNAPKHBOG_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x7C0360)
#define MGHNAPKHBOG_JCIODAGLLGB_1_OFFSET UNITYSDK_OFFSET(0x17D27220)
#define MGHNAPKHBOG_JCIODAGLLGB_OFFSET UNITYSDK_OFFSET(0x17D26B00)
#define MGHNAPKHBOG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7C05C0)
#define MGHNAPKHBOG_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x7C03E0)
#define MGHNAPKHBOG_JOJDEGMHKKD_OFFSET UNITYSDK_OFFSET(0x7C03B0)
#define MGHNAPKHBOG_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x7C0320)
#define MGHNAPKHBOG_LJNFLLJLHLL_OFFSET UNITYSDK_OFFSET(0x7C0240)
#define MGHNAPKHBOG_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x17D27060)
#define MGHNAPKHBOG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7C0340)
#define MGHNAPKHBOG_OKEDOCPENDA_OFFSET UNITYSDK_OFFSET(0x7C05A0)
#define MGHNAPKHBOG_OLCKIJAPEFB_OFFSET UNITYSDK_OFFSET(0x7C0590)
#define MGHNAPKHBOG_OOBHOFGBMGN_OFFSET UNITYSDK_OFFSET(0x7C03D0)
#define MGHNAPKHBOG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7BFF60)
#define MGHNAPKHBOG__CTOR_OFFSET UNITYSDK_OFFSET(0x7BFE30)

inline static constexpr unsigned int MGHNAPKHBOG_TypeDefinitionIndex = 87299;

struct alignas(8) MGHNAPKHBOG
{
	::MoleMole::EntityHandle LEOKEOFNDLH; // 0x10
	::OAMAMDGEJKH* OKKDDHJEDGJ; // 0x20

	::System::Void _ctor(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MGHNAPKHBOG__CTOR_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void _ctor_1(::OAMAMDGEJKH* FDFGNNAJLDN)
	{
		return ((::System::Void(*)(::PVOID, ::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + MGHNAPKHBOG__CTOR_1_OFFSET))(this, FDFGNNAJLDN);
	}

	/*
	::System::Boolean Equals(::MGHNAPKHBOG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_GETHASHCODE_OFFSET))(this);
	}

	::UnityEngine::Vector3 LJNFLLJLHLL()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_LJNFLLJLHLL_OFFSET))(this);
	}

	::UnityEngine::Vector3 LBCBPEJEHNB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_LBCBPEJEHNB_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_FFCPIEDHBDP_OFFSET))(this);
	}

	::UnityEngine::Quaternion INMGLPLEEIK()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_INMGLPLEEIK_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::MGHNAPKHBOG EJCBEJMGFAJ, ::MGHNAPKHBOG EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::MGHNAPKHBOG, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::UnityEngine::Quaternion COBPIICGJJA()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_COBPIICGJJA_OFFSET))(this);
	}

	::UnityEngine::Vector3 JOJDEGMHKKD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_JOJDEGMHKKD_OFFSET))(this);
	}

	::System::Boolean OOBHOFGBMGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_OOBHOFGBMGN_OFFSET))(this);
	}

	/*
	static ::MGHNAPKHBOG JCIODAGLLGB(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::MGHNAPKHBOG(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_JCIODAGLLGB_OFFSET))(KECKGDFIALJ);
	}
	*/

	::UnityEngine::Vector3 JLEGHNGEBOG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_JLEGHNGEBOG_OFFSET))(this);
	}

	::System::Boolean CODPKFJEICG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_CODPKFJEICG_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_HLPHPBAODIF_OFFSET))(this);
	}

	::UnityEngine::Vector3 GIDLPKDLECH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_GIDLPKDLECH_OFFSET))(this);
	}

	::System::String* IHFOPDKPNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_IHFOPDKPNCE_OFFSET))(this);
	}

	::UnityEngine::Vector3 IKCKJGACLHJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_IKCKJGACLHJ_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::MGHNAPKHBOG EJCBEJMGFAJ, ::MGHNAPKHBOG EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::MGHNAPKHBOG, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	/*
	static ::MGHNAPKHBOG ABLLOIPILCN()
	{
		return ((::MGHNAPKHBOG(*)())((::PBYTE)hIl2Cpp + MGHNAPKHBOG_ABLLOIPILCN_OFFSET))();
	}
	*/

	/*
	static ::MGHNAPKHBOG JCIODAGLLGB_1(::OAMAMDGEJKH* FDFGNNAJLDN)
	{
		return ((::MGHNAPKHBOG(*)(::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_JCIODAGLLGB_1_OFFSET))(FDFGNNAJLDN);
	}
	*/

	::OAMAMDGEJKH* OLCKIJAPEFB()
	{
		return ((::OAMAMDGEJKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_OLCKIJAPEFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 OKEDOCPENDA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_OKEDOCPENDA_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Battle::Entity* IBNCFMCGHFC()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHNAPKHBOG_IBNCFMCGHFC_OFFSET))(this);
	}
};
