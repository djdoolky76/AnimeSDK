#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Zone.h"
#include "unitysdk/GLJJDEDOIPK.h"

class OPMEMHPILID;
namespace FluffyUnderware::Curvy { class CurvyMetadataBase_Point_Empty; }
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1249EF00)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_DCJMFMAHBLD_OFFSET UNITYSDK_OFFSET(0x1249EFB0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_ENTER_OFFSET UNITYSDK_OFFSET(0x1249EF50)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_EOJIPJFNPGA_OFFSET UNITYSDK_OFFSET(0x1249F120)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_EXIT_OFFSET UNITYSDK_OFFSET(0x1249F000)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x1249ED30)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_INSPECTORDEBUG_OFFSET UNITYSDK_OFFSET(0x1249EB40)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1249EB00)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_POINTOWNER_OFFSET UNITYSDK_OFFSET(0x1249EB50)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0x1249EB60)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1249F110)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_HMEBCIGKHGG_OFFSET UNITYSDK_OFFSET(0x1249F100)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x1249F060)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1249F0B0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPZoneMetaPluginBase_TypeDefinitionIndex = 85967;

	class NAPZoneMetaPluginBase : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Zone
	{
	public:
		::System::Boolean _hasSerialized; // 0x40
		::System::Byte _padding0[0x3];
		::GLJJDEDOIPK Direction; // 0x44
		::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* MPNDNBAJOMF; // 0x48
		::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* COPFFLIAEGO; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_InspectorDebug()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_INSPECTORDEBUG_OFFSET))(this);
		}

		::System::Boolean get_PointOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_POINTOWNER_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* get_StartPoint()
		{
			return ((::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_STARTPOINT_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* get_EndPoint()
		{
			return ((::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_ENDPOINT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_AWAKE_OFFSET))(this);
		}

		::System::Void Enter(::OPMEMHPILID* IJEAAEDDMCP)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_ENTER_OFFSET))(this, IJEAAEDDMCP);
		}

		::System::Void DCJMFMAHBLD(::OPMEMHPILID* IJEAAEDDMCP)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_DCJMFMAHBLD_OFFSET))(this, IJEAAEDDMCP);
		}

		::System::Void Exit(::OPMEMHPILID* IJEAAEDDMCP)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_EXIT_OFFSET))(this, IJEAAEDDMCP);
		}

		::System::Void OIBKFFAGPNH(::OPMEMHPILID* IJEAAEDDMCP)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_OIBKFFAGPNH_OFFSET))(this, IJEAAEDDMCP);
		}

		::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* HMEBCIGKHGG()
		{
			return ((::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_HMEBCIGKHGG_OFFSET))(this);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GPGLNOBDBGJ_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* EOJIPJFNPGA()
		{
			return ((::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_EOJIPJFNPGA_OFFSET))(this);
		}
	};
}
