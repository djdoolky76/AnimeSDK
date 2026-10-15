#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIMANA_SETTINGS_SETDECODESKIPPINGENABLED_OFFSET UNITYSDK_OFFSET(0x1672B620)

namespace CriWare::CriMana
{
	class Settings : public ::System::Object
	{
	public:
		static ::System::Void SetDecodeSkippingEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_SETTINGS_SETDECODESKIPPINGENABLED_OFFSET))(a1);
		}

	};
}
