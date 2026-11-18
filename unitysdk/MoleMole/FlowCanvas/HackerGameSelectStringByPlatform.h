#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTSTRINGBYPLATFORM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465A370)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTSTRINGBYPLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1465A480)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameSelectStringByPlatform_TypeDefinitionIndex = 54704;

	class HackerGameSelectStringByPlatform
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTSTRINGBYPLATFORM__CTOR_OFFSET))(this);
		}

		::System::String* Invoke(::System::String* none, ::System::String* mobile, ::System::String* pc, ::System::String* console, ::System::String* mobileConsole)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTSTRINGBYPLATFORM_INVOKE_OFFSET))(this, none, mobile, pc, console, mobileConsole);
		}
	};
}
