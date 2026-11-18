#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Spline/NAPSplineMetaPluginBase.h"

class NNCHGIJJDPK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_GET_INVALID_OFFSET UNITYSDK_OFFSET(0x10D5DAA0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x10D5DA20)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x10D5DA60)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_POPBACKSTAGECOMPONENT_OFFSET UNITYSDK_OFFSET(0x10D5DB70)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_PUSHBACKSTAGECOMPONENT_OFFSET UNITYSDK_OFFSET(0x10D5DAC0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D5DC00)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPSplineMetaPlugin_ZipLine_TypeDefinitionIndex = 93038;

	class NAPSplineMetaPlugin_ZipLine : public ::MoleMole::Spline::NAPSplineMetaPluginBase
	{
	public:
		::System::String* patternKey; // 0x38
		::System::Boolean MuteSwitch; // 0x40
		::System::Boolean MuteTurnBack; // 0x41
		::System::Boolean MuteExit; // 0x42
		::System::Boolean BlockGroupStreaming; // 0x43
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::NNCHGIJJDPK*>* LFMODELJAGI; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_InValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_GET_INVALID_OFFSET))(this);
		}

		::System::Void PushBackStageComponent(::NNCHGIJJDPK* GBELIHABEDH)
		{
			return ((::System::Void(*)(::PVOID, ::NNCHGIJJDPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_PUSHBACKSTAGECOMPONENT_OFFSET))(this, GBELIHABEDH);
		}

		::System::Void PopBackStageComponent(::NNCHGIJJDPK* GBELIHABEDH)
		{
			return ((::System::Void(*)(::PVOID, ::NNCHGIJJDPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_POPBACKSTAGECOMPONENT_OFFSET))(this, GBELIHABEDH);
		}
	};
}
