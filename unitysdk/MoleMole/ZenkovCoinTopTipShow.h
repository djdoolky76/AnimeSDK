#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class GIFMKLGAIDN;

#define MOLEMOLE_ZENKOVCOINTOPTIPSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x10590500)
#define MOLEMOLE_ZENKOVCOINTOPTIPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x105905B0)
#define MOLEMOLE_ZENKOVCOINTOPTIPSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x105904A0)
#define MOLEMOLE_ZENKOVCOINTOPTIPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x10590470)
#define MOLEMOLE_ZENKOVCOINTOPTIPSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x10590840)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovCoinTopTipShow_TypeDefinitionIndex = 54893;

	class ZenkovCoinTopTipShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::GIFMKLGAIDN* _context; // 0x28

		::System::Void _ctor(::GIFMKLGAIDN* context)
		{
			return ((::System::Void(*)(::PVOID, ::GIFMKLGAIDN*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCOINTOPTIPSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCOINTOPTIPSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCOINTOPTIPSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCOINTOPTIPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCOINTOPTIPSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
