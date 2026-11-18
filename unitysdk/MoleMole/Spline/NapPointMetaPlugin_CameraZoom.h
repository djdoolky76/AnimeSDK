#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Spline/NAPPointMetaPluginBase.h"

class OPMEMHPILID;
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14B1FA00)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x14B1F980)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x14B1F9C0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM_MOAIMMNOFJF_OFFSET UNITYSDK_OFFSET(0x14B1FB30)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1FAD0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NapPointMetaPlugin_CameraZoom_TypeDefinitionIndex = 47963;

	class NapPointMetaPlugin_CameraZoom : public ::MoleMole::Spline::NAPPointMetaPluginBase
	{
	public:
		::System::String* Key; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM_GET_NAME_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM_GET_NAME_OFFSET))(this);
		}

		::System::Void ELMEFBBHCEG(::OPMEMHPILID* IJEAAEDDMCP)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM_ELMEFBBHCEG_OFFSET))(this, IJEAAEDDMCP);
		}

		::System::Void MOAIMMNOFJF(::OPMEMHPILID* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM_MOAIMMNOFJF_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
