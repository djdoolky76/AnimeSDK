#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"

#define DEHONPDAAKD_CTOR_OFFSET UNITYSDK_OFFSET(0xE50C920)
#define DEHONPDAAKD_ONINIT_OFFSET UNITYSDK_OFFSET(0xE50C8A0)
#define DEHONPDAAKD_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xE50C8E0)

	class DEHONPDAAKD : public ::HBCMHADMLOP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHONPDAAKD_CTOR_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHONPDAAKD_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHONPDAAKD_ONUNINIT_OFFSET))(this);
		}

	};
