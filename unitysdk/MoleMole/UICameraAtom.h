#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UICAMERAATOM_CCGJNPBEKCB_OFFSET UNITYSDK_OFFSET(0x7AA0F0)
#define MOLEMOLE_UICAMERAATOM_CIBONHMNLEN_OFFSET UNITYSDK_OFFSET(0x1755E590)
#define MOLEMOLE_UICAMERAATOM_DJNAHLAFGNJ_OFFSET UNITYSDK_OFFSET(0x1755DDC0)
#define MOLEMOLE_UICAMERAATOM_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7AA250)
#define MOLEMOLE_UICAMERAATOM_EIHNCLBIJFG_OFFSET UNITYSDK_OFFSET(0x1755E300)
#define MOLEMOLE_UICAMERAATOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7A9F70)
#define MOLEMOLE_UICAMERAATOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x7A9F40)
#define MOLEMOLE_UICAMERAATOM_FPIFKGGDGEE_OFFSET UNITYSDK_OFFSET(0x1755DFD0)
#define MOLEMOLE_UICAMERAATOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7AA060)
#define MOLEMOLE_UICAMERAATOM_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1755D440)
#define MOLEMOLE_UICAMERAATOM_GET_FOV_OFFSET UNITYSDK_OFFSET(0x358A70)
#define MOLEMOLE_UICAMERAATOM_GET_POS_OFFSET UNITYSDK_OFFSET(0x3F2230)
#define MOLEMOLE_UICAMERAATOM_GET_ROT_OFFSET UNITYSDK_OFFSET(0x3CE930)
#define MOLEMOLE_UICAMERAATOM_HLBFMAOKADL_OFFSET UNITYSDK_OFFSET(0x7AA220)
#define MOLEMOLE_UICAMERAATOM_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7AA2E0)
#define MOLEMOLE_UICAMERAATOM_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1755E7F0)
#define MOLEMOLE_UICAMERAATOM_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7AA1B0)
#define MOLEMOLE_UICAMERAATOM_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1755E270)
#define MOLEMOLE_UICAMERAATOM_SET_FOV_OFFSET UNITYSDK_OFFSET(0x358800)
#define MOLEMOLE_UICAMERAATOM_SET_POS_OFFSET UNITYSDK_OFFSET(0x7CB5C0)
#define MOLEMOLE_UICAMERAATOM_SET_ROT_OFFSET UNITYSDK_OFFSET(0x4255F0)
#define MOLEMOLE_UICAMERAATOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7AA0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UICameraAtom_TypeDefinitionIndex = 76463;

	struct alignas(4) UICameraAtom
	{
		::System::Single _Fov_k__BackingField; // 0x10
		::UnityEngine::Vector3 _Pos_k__BackingField; // 0x14
		::UnityEngine::Quaternion _Rot_k__BackingField; // 0x20

		::System::Single get_Fov()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GET_FOV_OFFSET))(this);
		}

		::System::Void set_Fov(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_SET_FOV_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Vector3 get_Pos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::UnityEngine::Vector3 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_SET_POS_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Quaternion get_Rot()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GET_ROT_OFFSET))(this);
		}

		::System::Void set_Rot(::UnityEngine::Quaternion EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_SET_ROT_OFFSET))(this, EGEGIMGMJHN);
		}

		/*
		static ::MoleMole::UICameraAtom get_Default()
		{
			return ((::MoleMole::UICameraAtom(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GET_DEFAULT_OFFSET))();
		}
		*/

		/*
		::System::Boolean Equals(::MoleMole::UICameraAtom LIBPKNHDIGP)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_EQUALS_OFFSET))(this, LIBPKNHDIGP);
		}
		*/

		::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_TOSTRING_OFFSET))(this);
		}

		::System::Boolean CCGJNPBEKCB(::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Single IJPJAMNLKBJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_CCGJNPBEKCB_OFFSET))(this, OHOGDOMNHNK, IJPJAMNLKBJ);
		}

		::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
		}

		/*
		::System::Boolean HLBFMAOKADL(::MoleMole::UICameraAtom LIBPKNHDIGP, ::System::Single IJPJAMNLKBJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UICameraAtom, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_HLBFMAOKADL_OFFSET))(this, LIBPKNHDIGP, IJPJAMNLKBJ);
		}
		*/

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Int32 HLPHPBAODIF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_HLPHPBAODIF_OFFSET))(this);
		}

		/*
		static ::MoleMole::UICameraAtom DJNAHLAFGNJ(::MoleMole::UICameraAtom EJCBEJMGFAJ, ::MoleMole::UICameraAtom EBFCACIEKBC, ::System::Single DHKKKJGDKOG)
		{
			return ((::MoleMole::UICameraAtom(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_DJNAHLAFGNJ_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, DHKKKJGDKOG);
		}
		*/

		/*
		static ::MoleMole::UICameraAtom FPIFKGGDGEE(::MoleMole::UICameraAtom EJCBEJMGFAJ, ::MoleMole::UICameraAtom EBFCACIEKBC)
		{
			return ((::MoleMole::UICameraAtom(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_FPIFKGGDGEE_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::System::Boolean NOGJIJMACNO(::MoleMole::UICameraAtom EJCBEJMGFAJ, ::MoleMole::UICameraAtom EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::MoleMole::UICameraAtom EIHNCLBIJFG(::MoleMole::UICameraAtom EJCBEJMGFAJ, ::System::Single EBFCACIEKBC)
		{
			return ((::MoleMole::UICameraAtom(*)(::MoleMole::UICameraAtom, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_EIHNCLBIJFG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::MoleMole::UICameraAtom CIBONHMNLEN(::MoleMole::UICameraAtom EJCBEJMGFAJ, ::MoleMole::UICameraAtom EBFCACIEKBC)
		{
			return ((::MoleMole::UICameraAtom(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_CIBONHMNLEN_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::System::Boolean INCFIJKMIGG(::MoleMole::UICameraAtom EJCBEJMGFAJ, ::MoleMole::UICameraAtom EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/
	};
}
