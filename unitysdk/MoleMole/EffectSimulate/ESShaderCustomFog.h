#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESShaderCustomBehavior.h"

namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x19B61400)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_CODDAPJPABL_OFFSET UNITYSDK_OFFSET(0x19B61C50)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_DMOHIBBPHFD_OFFSET UNITYSDK_OFFSET(0x19B61CE0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19B61C90)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x19B618F0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B61CF0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESShaderCustomFog_TypeDefinitionIndex = 45075;

	class ESShaderCustomFog : public ::MoleMole::EffectSimulate::ESShaderCustomBehavior
	{
	public:
		::MoleMole::EffectSimulate::FloatKeyframeCurve* SC_FxCustomFogStart; // 0x68
		::MoleMole::EffectSimulate::ColorKeyframeCurve* SC_FxCustomFogColorNear; // 0x70
		::MoleMole::EffectSimulate::ColorKeyframeCurve* SC_FxCustomFogColorFar; // 0x78
		::MoleMole::EffectSimulate::FloatKeyframeCurve* SC_FxCustomFogInvDistance; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG__CTOR_OFFSET))(this);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void PHOADBJGFBE(::System::Boolean PBKICEDNILK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_PHOADBJGFBE_OFFSET))(this, PBKICEDNILK);
		}

		::MoleMole::Config::ShaderCustomType DMOHIBBPHFD()
		{
			return ((::MoleMole::Config::ShaderCustomType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_DMOHIBBPHFD_OFFSET))(this);
		}

		::System::String* CODDAPJPABL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_CODDAPJPABL_OFFSET))(this);
		}
	};
}
