#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/ColorHSV_CBPFINCLIAK.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Object; }

#define MOLEMOLE_COLORHSV_CIBONHMNLEN_OFFSET UNITYSDK_OFFSET(0x19224BD0)
#define MOLEMOLE_COLORHSV_EQUALS_OFFSET UNITYSDK_OFFSET(0x7DC390)
#define MOLEMOLE_COLORHSV_FPIFKGGDGEE_OFFSET UNITYSDK_OFFSET(0x192244D0)
#define MOLEMOLE_COLORHSV_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7DC490)
#define MOLEMOLE_COLORHSV_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7DC530)
#define MOLEMOLE_COLORHSV_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x19224B50)
#define MOLEMOLE_COLORHSV_JCIODAGLLGB_OFFSET UNITYSDK_OFFSET(0x19224670)
#define MOLEMOLE_COLORHSV_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7DC5A0)
#define MOLEMOLE_COLORHSV_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x19224820)
#define MOLEMOLE_COLORHSV_NCPOIJABFOA_OFFSET UNITYSDK_OFFSET(0x192245C0)
#define MOLEMOLE_COLORHSV_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x19224AA0)
#define MOLEMOLE_COLORHSV__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7DC360)
#define MOLEMOLE_COLORHSV__CTOR_OFFSET UNITYSDK_OFFSET(0x6069B0)

namespace MoleMole
{
	inline static constexpr unsigned int ColorHSV_TypeDefinitionIndex = 60315;

	struct alignas(4) ColorHSV
	{
		::System::Single h; // 0x10
		::System::Single s; // 0x14
		::System::Single v; // 0x18

		::System::Void _ctor(::System::Single DMIAICJPPDL, ::System::Single EMIKCAHJLGB, ::System::Single HFMHOELKCAJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV__CTOR_OFFSET))(this, DMIAICJPPDL, EMIKCAHJLGB, HFMHOELKCAJ);
		}

		::System::Void _ctor_1(::UnityEngine::Color JBBFCGAMDHI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV__CTOR_1_OFFSET))(this, JBBFCGAMDHI);
		}

		::System::Boolean Equals(::System::Object* EIFONLCJOPG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_EQUALS_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::MoleMole::ColorHSV_CBPFINCLIAK FPIFKGGDGEE(::MoleMole::ColorHSV& FFKBEGIHIGG, ::MoleMole::ColorHSV& CKADGLGJJAB)
		{
			return ((::MoleMole::ColorHSV_CBPFINCLIAK(*)(::MoleMole::ColorHSV&, ::MoleMole::ColorHSV&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_FPIFKGGDGEE_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
		}
		*/

		::System::Int32 HLPHPBAODIF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_HLPHPBAODIF_OFFSET))(this);
		}

		/*
		static ::MoleMole::ColorHSV NCPOIJABFOA(::MoleMole::ColorHSV& EJCBEJMGFAJ, ::MoleMole::ColorHSV& EBFCACIEKBC, ::System::Single IMLLDOHDCNC)
		{
			return ((::MoleMole::ColorHSV(*)(::MoleMole::ColorHSV&, ::MoleMole::ColorHSV&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_NCPOIJABFOA_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, IMLLDOHDCNC);
		}
		*/

		/*
		static ::UnityEngine::Color JCIODAGLLGB(::MoleMole::ColorHSV& NDEHKILJFHA)
		{
			return ((::UnityEngine::Color(*)(::MoleMole::ColorHSV&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_JCIODAGLLGB_OFFSET))(NDEHKILJFHA);
		}
		*/

		/*
		static ::MoleMole::ColorHSV JPPEEOLOGGP(::UnityEngine::Color& JBBFCGAMDHI)
		{
			return ((::MoleMole::ColorHSV(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_JPPEEOLOGGP_OFFSET))(JBBFCGAMDHI);
		}
		*/

		::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
		}

		/*
		static ::System::Boolean NOGJIJMACNO(::MoleMole::ColorHSV& FFKBEGIHIGG, ::MoleMole::ColorHSV& CKADGLGJJAB)
		{
			return ((::System::Boolean(*)(::MoleMole::ColorHSV&, ::MoleMole::ColorHSV&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
		}
		*/

		/*
		static ::MoleMole::ColorHSV CIBONHMNLEN(::MoleMole::ColorHSV& FFKBEGIHIGG, ::MoleMole::ColorHSV_CBPFINCLIAK& CKADGLGJJAB)
		{
			return ((::MoleMole::ColorHSV(*)(::MoleMole::ColorHSV&, ::MoleMole::ColorHSV_CBPFINCLIAK&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_CIBONHMNLEN_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
		}
		*/

		/*
		static ::System::Boolean INCFIJKMIGG(::MoleMole::ColorHSV& FFKBEGIHIGG, ::MoleMole::ColorHSV& CKADGLGJJAB)
		{
			return ((::System::Boolean(*)(::MoleMole::ColorHSV&, ::MoleMole::ColorHSV&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
		}
		*/
	};
}
