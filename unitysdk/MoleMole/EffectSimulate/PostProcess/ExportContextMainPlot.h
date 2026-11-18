#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/PostProcess/ExportContextBase.h"

namespace System { class String; }

#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_DIOBEHNNDPM_OFFSET UNITYSDK_OFFSET(0x12B2D000)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_EGMJCKHCDDP_OFFSET UNITYSDK_OFFSET(0x12B2D1C0)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_HEEJMEPNOPK_OFFSET UNITYSDK_OFFSET(0x12B2D110)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_JLFLBPABKHM_OFFSET UNITYSDK_OFFSET(0x12B2CE10)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B2D180)

namespace MoleMole::EffectSimulate::PostProcess
{
	inline static constexpr unsigned int ExportContextMainPlot_TypeDefinitionIndex = 70077;

	class ExportContextMainPlot : public ::MoleMole::EffectSimulate::PostProcess::ExportContextBase
	{
	public:
		::System::String* mainPlotName; // 0x18
		::System::String* markStr; // 0x20
		::MoleMole::Config::ScreenEffectType moduleType; // 0x28
		::System::Int32 markID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT__CTOR_OFFSET))(this);
		}

		::System::String* JLFLBPABKHM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_JLFLBPABKHM_OFFSET))(this);
		}

		::System::String* DIOBEHNNDPM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_DIOBEHNNDPM_OFFSET))(this);
		}

		::System::String* HEEJMEPNOPK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_HEEJMEPNOPK_OFFSET))(this);
		}

		::System::Boolean EGMJCKHCDDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMAINPLOT_EGMJCKHCDDP_OFFSET))(this);
		}
	};
}
