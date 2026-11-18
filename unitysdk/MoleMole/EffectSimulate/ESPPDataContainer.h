#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::EffectSimulate::PostProcess { class ExportContextBase; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }

#define MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER_ALFGBFDHJIB_OFFSET UNITYSDK_OFFSET(0x19B37980)
#define MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER_ALOOPMLNOMI_OFFSET UNITYSDK_OFFSET(0x19B378B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER_TRYEXPORT_OFFSET UNITYSDK_OFFSET(0x19B377B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B37860)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPPDataContainer_TypeDefinitionIndex = 54949;

	class ESPPDataContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::EffectSimulate::PostProcess::ExportContextBase* exportCtx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER__CTOR_OFFSET))(this);
		}

		::System::Boolean TryExport(::System::String*& LIFIDOINPKP, ::System::String*& IMILJHBDOGJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER_TRYEXPORT_OFFSET))(this, LIFIDOINPKP, IMILJHBDOGJ);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::EffectSimulate::PostProcess::ExportContextBase*>* ALOOPMLNOMI()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::EffectSimulate::PostProcess::ExportContextBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER_ALOOPMLNOMI_OFFSET))(this);
		}

		::System::Boolean ALFGBFDHJIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER_ALFGBFDHJIB_OFFSET))(this);
		}
	};
}
