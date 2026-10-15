#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define WWISECUSTOM_CUSTOMWWISESETTING_GETMODIFYWWISEMEMSETTINGFUNC_OFFSET UNITYSDK_OFFSET(0x1F442100)

namespace WwiseCustom
{
	class CustomWwiseSetting : public ::System::Object
	{
	public:
		static ::System::IntPtr GetModifyWwiseMemSettingFunc()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + WWISECUSTOM_CUSTOMWWISESETTING_GETMODIFYWWISEMEMSETTINGFUNC_OFFSET))();
		}

	};
}
