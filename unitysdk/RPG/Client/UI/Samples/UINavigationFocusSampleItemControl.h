#pragma once
#include "unitysdk/unitysdk.h"
class CEKECLEDPBB;
class HIKAAGHELPH;

#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLEITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xEECE2E0)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLEITEMCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xEECE290)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int UINavigationFocusSampleItemControl_TypeDefinitionIndex = 75596;

	class UINavigationFocusSampleItemControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLEITEMCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLEITEMCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
