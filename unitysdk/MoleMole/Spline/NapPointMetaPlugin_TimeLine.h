#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Spline/NAPPointMetaPluginBase.h"

class OPMEMHPILID;
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18965B20)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18965AA0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18965AE0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE_MOAIMMNOFJF_OFFSET UNITYSDK_OFFSET(0x18965C70)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x18965C10)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NapPointMetaPlugin_TimeLine_TypeDefinitionIndex = 51436;

	class NapPointMetaPlugin_TimeLine : public ::MoleMole::Spline::NAPPointMetaPluginBase
	{
	public:
		// static const ::System::String* NKKEPNGGIIM; // 0x0
		// static const ::System::String* NMFJEEOANFO; // 0x0
		::System::String* Key; // 0x58
		::System::String* CustomTag; // 0x60
		::System::Boolean MuteInLevelInput; // 0x68
		::System::Boolean HideInLevelUIAndMuteInput; // 0x69
		::System::Boolean IsTimelineSyncLoad; // 0x6A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE_GET_NAME_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE_GET_NAME_OFFSET))(this);
		}

		::System::Void ELMEFBBHCEG(::OPMEMHPILID* IJEAAEDDMCP)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE_ELMEFBBHCEG_OFFSET))(this, IJEAAEDDMCP);
		}

		::System::Void MOAIMMNOFJF(::OPMEMHPILID* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE_MOAIMMNOFJF_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
