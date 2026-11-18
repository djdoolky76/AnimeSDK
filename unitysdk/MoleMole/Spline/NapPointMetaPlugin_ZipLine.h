#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJABPEDGKPD.h"
#include "unitysdk/MoleMole/Spline/NAPPointMetaPluginBase.h"

class OPMEMHPILID;
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13F13B20)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x13F13AA0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x13F13AE0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE_MOAIMMNOFJF_OFFSET UNITYSDK_OFFSET(0x13F13C60)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x13F13C10)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NapPointMetaPlugin_ZipLine_TypeDefinitionIndex = 61660;

	class NapPointMetaPlugin_ZipLine : public ::MoleMole::Spline::NAPPointMetaPluginBase
	{
	public:
		::LJABPEDGKPD ControlType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET))(this);
		}

		::System::Void ELMEFBBHCEG(::OPMEMHPILID* IJEAAEDDMCP)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE_ELMEFBBHCEG_OFFSET))(this, IJEAAEDDMCP);
		}

		::System::Void MOAIMMNOFJF(::OPMEMHPILID* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_ZIPLINE_MOAIMMNOFJF_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
