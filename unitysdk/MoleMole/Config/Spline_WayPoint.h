#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7DCDA0)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x7DCD00)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7DCF20)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7DCE90)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7DCDB0)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1925F260)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7DD0C0)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7DD020)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1925FDA0)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7DCF80)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_KBMFDNKHBAP_OFFSET UNITYSDK_OFFSET(0x7DD030)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1925FBD0)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7DCFF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int Spline_WayPoint_TypeDefinitionIndex = 80990;

	struct alignas(8) Spline_WayPoint
	{
		::System::String* Name; // 0x10
		::System::Int32 Index; // 0x18

		/*
		static ::MoleMole::Config::Spline_WayPoint get_Empty()
		{
			return ((::MoleMole::Config::Spline_WayPoint(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_GET_EMPTY_OFFSET))();
		}
		*/

		/*
		::System::Boolean Equals(::MoleMole::Config::Spline_WayPoint LIBPKNHDIGP)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::Spline_WayPoint))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_EQUALS_OFFSET))(this, LIBPKNHDIGP);
		}
		*/

		::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
		}

		/*
		static ::System::Boolean NOGJIJMACNO(::MoleMole::Config::Spline_WayPoint KILPCOMOCMD, ::MoleMole::Config::Spline_WayPoint BBCODANAFGI)
		{
			return ((::System::Boolean(*)(::MoleMole::Config::Spline_WayPoint, ::MoleMole::Config::Spline_WayPoint))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
		}
		*/

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		/*
		::System::Boolean KBMFDNKHBAP(::MoleMole::Config::Spline_WayPoint& LIBPKNHDIGP)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::Spline_WayPoint&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_KBMFDNKHBAP_OFFSET))(this, LIBPKNHDIGP);
		}
		*/

		::System::Int32 HLPHPBAODIF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_HLPHPBAODIF_OFFSET))(this);
		}

		/*
		static ::System::Boolean INCFIJKMIGG(::MoleMole::Config::Spline_WayPoint KILPCOMOCMD, ::MoleMole::Config::Spline_WayPoint BBCODANAFGI)
		{
			return ((::System::Boolean(*)(::MoleMole::Config::Spline_WayPoint, ::MoleMole::Config::Spline_WayPoint))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
		}
		*/
	};
}
