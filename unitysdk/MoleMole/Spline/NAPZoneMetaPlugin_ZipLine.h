#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Spline/NAPZoneMetaPluginBase.h"

class OPMEMHPILID;
namespace MoleMole::Config::ZipLine { class OptionalMoveDirectionType; }
namespace MoleMole::DataStructures::Common { class OptionalFloat; }
namespace MoleMole::DataStructures::Common { class OptionalVector2; }
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_BAJIIBGJLGG_OFFSET UNITYSDK_OFFSET(0x1811E300)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_DCJMFMAHBLD_OFFSET UNITYSDK_OFFSET(0x1811DFA0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1811DF20)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1811DF60)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x1811E0D0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_PMAOHINGDEG_OFFSET UNITYSDK_OFFSET(0x1811E390)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1811E1F0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPZoneMetaPlugin_ZipLine_TypeDefinitionIndex = 48755;

	class NAPZoneMetaPlugin_ZipLine : public ::MoleMole::Spline::NAPZoneMetaPluginBase
	{
	public:
		::System::Boolean InValid; // 0x58
		::System::Byte _padding0[0x7];
		::MoleMole::Config::ZipLine::OptionalMoveDirectionType* MoveDirection; // 0x60
		::MoleMole::DataStructures::Common::OptionalVector2* SpeedRange; // 0x68
		::MoleMole::DataStructures::Common::OptionalFloat* BaseSpeed; // 0x70
		::System::Boolean MuteEnter; // 0x78
		::System::Boolean MuteSwitch; // 0x79
		::System::Boolean MuteTurnBack; // 0x7A
		::System::Boolean MuteExit; // 0x7B
		::System::Boolean ResumeGroupStreaming; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET))(this);
		}

		::System::Void DCJMFMAHBLD(::OPMEMHPILID* IJEAAEDDMCP)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_DCJMFMAHBLD_OFFSET))(this, IJEAAEDDMCP);
		}

		::System::Void OIBKFFAGPNH(::OPMEMHPILID* IJEAAEDDMCP)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_OIBKFFAGPNH_OFFSET))(this, IJEAAEDDMCP);
		}

		::System::Void BAJIIBGJLGG(::OPMEMHPILID* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_BAJIIBGJLGG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PMAOHINGDEG(::OPMEMHPILID* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_PMAOHINGDEG_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
