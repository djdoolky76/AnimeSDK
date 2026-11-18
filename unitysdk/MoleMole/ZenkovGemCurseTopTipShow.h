#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class BGDIFGKKCHL;

#define MOLEMOLE_ZENKOVGEMCURSETOPTIPSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x13B46CA0)
#define MOLEMOLE_ZENKOVGEMCURSETOPTIPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13B46D50)
#define MOLEMOLE_ZENKOVGEMCURSETOPTIPSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x13B46C40)
#define MOLEMOLE_ZENKOVGEMCURSETOPTIPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x13B46C10)
#define MOLEMOLE_ZENKOVGEMCURSETOPTIPSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x13B470A0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovGemCurseTopTipShow_TypeDefinitionIndex = 75683;

	class ZenkovGemCurseTopTipShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::BGDIFGKKCHL* _context; // 0x28

		::System::Void _ctor(::BGDIFGKKCHL* context)
		{
			return ((::System::Void(*)(::PVOID, ::BGDIFGKKCHL*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMCURSETOPTIPSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMCURSETOPTIPSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMCURSETOPTIPSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMCURSETOPTIPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMCURSETOPTIPSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
