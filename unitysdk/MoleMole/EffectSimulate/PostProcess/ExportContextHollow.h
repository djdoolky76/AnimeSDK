#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/PostProcess/ExportContextBase.h"

namespace System { class String; }

#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_DIOBEHNNDPM_OFFSET UNITYSDK_OFFSET(0x162299A0)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_EGMJCKHCDDP_OFFSET UNITYSDK_OFFSET(0x16229AD0)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_HEEJMEPNOPK_OFFSET UNITYSDK_OFFSET(0x16229A50)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_JLFLBPABKHM_OFFSET UNITYSDK_OFFSET(0x16229890)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x16229AC0)

namespace MoleMole::EffectSimulate::PostProcess
{
	inline static constexpr unsigned int ExportContextHollow_TypeDefinitionIndex = 47179;

	class ExportContextHollow : public ::MoleMole::EffectSimulate::PostProcess::ExportContextBase
	{
	public:
		::System::String* str; // 0x18
		::MoleMole::Config::ScreenEffectType moduleType; // 0x20
		::System::Int32 markID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW__CTOR_OFFSET))(this);
		}

		::System::String* JLFLBPABKHM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_JLFLBPABKHM_OFFSET))(this);
		}

		::System::String* DIOBEHNNDPM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_DIOBEHNNDPM_OFFSET))(this);
		}

		::System::String* HEEJMEPNOPK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_HEEJMEPNOPK_OFFSET))(this);
		}

		::System::Boolean EGMJCKHCDDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTHOLLOW_EGMJCKHCDDP_OFFSET))(this);
		}
	};
}
