#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Point.h"
#include "unitysdk/GLJJDEDOIPK.h"

class OPMEMHPILID;
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x13F12DF0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13F12EA0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_GET_INSPECTORDEBUG_OFFSET UNITYSDK_OFFSET(0x13F12DE0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x13F12DA0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x13F12F40)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_TRIGGER_OFFSET UNITYSDK_OFFSET(0x13F12E40)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x13F12EF0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPPointMetaPluginBase_TypeDefinitionIndex = 67670;

	class NAPPointMetaPluginBase : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Point
	{
	public:
		::System::Boolean _hasSerialized; // 0x50
		::System::Byte _padding0[0x3];
		::GLJJDEDOIPK Direction; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_InspectorDebug()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_GET_INSPECTORDEBUG_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_AWAKE_OFFSET))(this);
		}

		::System::Void Trigger(::OPMEMHPILID* IJEAAEDDMCP)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_TRIGGER_OFFSET))(this, IJEAAEDDMCP);
		}

		::System::Void ELMEFBBHCEG(::OPMEMHPILID* IJEAAEDDMCP)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_ELMEFBBHCEG_OFFSET))(this, IJEAAEDDMCP);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_GPGLNOBDBGJ_OFFSET))(this);
		}
	};
}
