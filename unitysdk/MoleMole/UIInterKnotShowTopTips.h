#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GeneralTopTipShow.h"

class LEGNKEBDEHL;
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTSHOWTOPTIPS_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x183D2740)
#define MOLEMOLE_UIINTERKNOTSHOWTOPTIPS_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x183D26E0)
#define MOLEMOLE_UIINTERKNOTSHOWTOPTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x183D26C0)
#define MOLEMOLE_UIINTERKNOTSHOWTOPTIPS___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x183D29B0)
#define MOLEMOLE_UIINTERKNOTSHOWTOPTIPS___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x183D2A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotShowTopTips_TypeDefinitionIndex = 67524;

	class UIInterKnotShowTopTips : public ::MoleMole::GeneralTopTipShow
	{
	public:
		::LEGNKEBDEHL* _context; // 0x30
		::System::String* message; // 0x38
		::System::Int32 headid; // 0x40

		::System::Void _ctor(::LEGNKEBDEHL* context)
		{
			return ((::System::Void(*)(::PVOID, ::LEGNKEBDEHL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTSHOWTOPTIPS__CTOR_OFFSET))(this, context);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTSHOWTOPTIPS_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTSHOWTOPTIPS_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTSHOWTOPTIPS___BASE_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTSHOWTOPTIPS___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
