#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Spline/NAPPointMetaPluginBase.h"

class OPMEMHPILID;
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13A070F0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x13A07070)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x13A070B0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT_MOAIMMNOFJF_OFFSET UNITYSDK_OFFSET(0x13A071F0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x13A07190)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NapPointMetaPlugin_CameraEffect_TypeDefinitionIndex = 48766;

	class NapPointMetaPlugin_CameraEffect : public ::MoleMole::Spline::NAPPointMetaPluginBase
	{
	public:
		::MoleMole::Config::ScreenEffectType ScreenEffectType; // 0x58
		::System::Byte _padding0[0x4];
		::System::String* Key; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT_GET_NAME_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT_GET_NAME_OFFSET))(this);
		}

		::System::Void ELMEFBBHCEG(::OPMEMHPILID* IJEAAEDDMCP)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT_ELMEFBBHCEG_OFFSET))(this, IJEAAEDDMCP);
		}

		::System::Void MOAIMMNOFJF(::OPMEMHPILID* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT_MOAIMMNOFJF_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
