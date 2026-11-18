#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/PostProcess/ExportContextBase.h"

namespace System { class String; }

#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_DIOBEHNNDPM_OFFSET UNITYSDK_OFFSET(0x103F2F20)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_EGMJCKHCDDP_OFFSET UNITYSDK_OFFSET(0x103F30B0)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_HEEJMEPNOPK_OFFSET UNITYSDK_OFFSET(0x103F3030)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_JLFLBPABKHM_OFFSET UNITYSDK_OFFSET(0x103F2D30)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY__CTOR_OFFSET UNITYSDK_OFFSET(0x103F30A0)

namespace MoleMole::EffectSimulate::PostProcess
{
	inline static constexpr unsigned int ExportContextActivity_TypeDefinitionIndex = 53229;

	class ExportContextActivity : public ::MoleMole::EffectSimulate::PostProcess::ExportContextBase
	{
	public:
		::System::String* activityName; // 0x18
		::System::String* str; // 0x20
		::MoleMole::Config::ScreenEffectType moduleType; // 0x28
		::System::Int32 markID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY__CTOR_OFFSET))(this);
		}

		::System::String* JLFLBPABKHM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_JLFLBPABKHM_OFFSET))(this);
		}

		::System::String* DIOBEHNNDPM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_DIOBEHNNDPM_OFFSET))(this);
		}

		::System::String* HEEJMEPNOPK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_HEEJMEPNOPK_OFFSET))(this);
		}

		::System::Boolean EGMJCKHCDDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTACTIVITY_EGMJCKHCDDP_OFFSET))(this);
		}
	};
}
