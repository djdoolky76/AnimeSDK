#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GeneralTopTipShow.h"

class AJNEAMAGNAN;

#define MOLEMOLE_UIRABTRAINEXPGAINTOPTIP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x14CC0CA0)
#define MOLEMOLE_UIRABTRAINEXPGAINTOPTIP__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC0C80)
#define MOLEMOLE_UIRABTRAINEXPGAINTOPTIP___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x14CC10C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABTrainExpGainTopTip_TypeDefinitionIndex = 75710;

	class UIRABTrainExpGainTopTip : public ::MoleMole::GeneralTopTipShow
	{
	public:
		::AJNEAMAGNAN* _context; // 0x30

		::System::Void _ctor(::AJNEAMAGNAN* context)
		{
			return ((::System::Void(*)(::PVOID, ::AJNEAMAGNAN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINEXPGAINTOPTIP__CTOR_OFFSET))(this, context);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINEXPGAINTOPTIP_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINEXPGAINTOPTIP___BASE_ONPROCESS_OFFSET))(this);
		}
	};
}
