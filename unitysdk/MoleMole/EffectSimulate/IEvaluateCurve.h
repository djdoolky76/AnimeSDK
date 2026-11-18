#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBFGHGBBLKE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class ESLoopable; }

#define MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE_FAOHKPBBHEB_OFFSET UNITYSDK_OFFSET(0x118FBE10)
#define MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE_OCOILGIAPNL_OFFSET UNITYSDK_OFFSET(0x118F9DD0)
#define MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE_OKECALAKKCA_OFFSET UNITYSDK_OFFSET(0x11900340)
#define MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x11900330)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int IEvaluateCurve_TypeDefinitionIndex = 91281;

	class IEvaluateCurve : public ::System::Object
	{
	public:
		// static const ::System::String* BASE_GROUP_NAME; // 0x0
		// static const ::System::String* DEBUG_HOR_GROUP_NAME; // 0x0
		// static const ::System::String* TITLE_HOR_GROUP_NAME; // 0x0
		// static const ::System::String* CONTENT_HOR_GROUP_NAME; // 0x0
		// static const ::System::String* FADEOUT_LOGIC_GROUP_NAME; // 0x0
		::System::Single INVALID_FLOAT_VAL; // 0x10
		::System::Byte _padding0[0x4];
		::MoleMole::EffectSimulate::ESLoopable* m_stParent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE__CTOR_OFFSET))(this);
		}

		::OBFGHGBBLKE OKECALAKKCA()
		{
			return ((::OBFGHGBBLKE(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE_OKECALAKKCA_OFFSET))(this);
		}

		::System::Boolean OCOILGIAPNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE_OCOILGIAPNL_OFFSET))(this);
		}

		::System::Void FAOHKPBBHEB(::MoleMole::EffectSimulate::ESLoopable* JNLBPMKIFNK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::ESLoopable*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE_FAOHKPBBHEB_OFFSET))(this, JNLBPMKIFNK);
		}
	};
}
