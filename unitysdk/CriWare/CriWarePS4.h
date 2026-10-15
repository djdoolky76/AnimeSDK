#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIWAREPS4_CTOR_OFFSET UNITYSDK_OFFSET(0x16737C00)
#define CRIWARE_CRIWAREPS4_ISBGMOVERRIDDEN_OFFSET UNITYSDK_OFFSET(0x16737BF0)

namespace CriWare
{
	class CriWarePS4 : public ::System::Object
	{
	public:
		// static const ::System::Object systemUserID; // 0x0
		// static const ::System::Object bgmRackID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREPS4_CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsBgmOverridden()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREPS4_ISBGMOVERRIDDEN_OFFSET))();
		}

	};
}
