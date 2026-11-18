#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class BKLDGFKIFAI;

#define MOLEMOLE_ZENKOVGEMCOMPOSETOPTIPSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x172675C0)
#define MOLEMOLE_ZENKOVGEMCOMPOSETOPTIPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x17267670)
#define MOLEMOLE_ZENKOVGEMCOMPOSETOPTIPSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x17267560)
#define MOLEMOLE_ZENKOVGEMCOMPOSETOPTIPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x17267530)
#define MOLEMOLE_ZENKOVGEMCOMPOSETOPTIPSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x17267A70)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovGemComposeTopTipShow_TypeDefinitionIndex = 82676;

	class ZenkovGemComposeTopTipShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::BKLDGFKIFAI* _context; // 0x28

		::System::Void _ctor(::BKLDGFKIFAI* context)
		{
			return ((::System::Void(*)(::PVOID, ::BKLDGFKIFAI*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMCOMPOSETOPTIPSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMCOMPOSETOPTIPSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMCOMPOSETOPTIPSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMCOMPOSETOPTIPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMCOMPOSETOPTIPSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
