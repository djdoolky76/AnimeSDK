#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Spline/NAPPointMetaPluginBase.h"

class OPMEMHPILID;
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A71B140)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A71B0C0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A71B100)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH_MOAIMMNOFJF_OFFSET UNITYSDK_OFFSET(0x1A71B260)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A71B200)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NapPointMetaPlugin_CameraStretch_TypeDefinitionIndex = 66494;

	class NapPointMetaPlugin_CameraStretch : public ::MoleMole::Spline::NAPPointMetaPluginBase
	{
	public:
		::System::String* Key; // 0x58
		::System::Boolean OverrideBlendSetting; // 0x60
		::System::Byte _padding0[0x3];
		::System::Single OverrideBlendDuration; // 0x64
		::System::String* OverrideBlendCurveKey; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH_GET_NAME_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH_GET_NAME_OFFSET))(this);
		}

		::System::Void ELMEFBBHCEG(::OPMEMHPILID* IJEAAEDDMCP)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH_ELMEFBBHCEG_OFFSET))(this, IJEAAEDDMCP);
		}

		::System::Void MOAIMMNOFJF(::OPMEMHPILID* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH_MOAIMMNOFJF_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
