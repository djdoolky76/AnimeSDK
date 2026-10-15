#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BBCEGAOODPK_CTOR_OFFSET UNITYSDK_OFFSET(0x15E82CB0)
#define BBCEGAOODPK_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0x15E82B30)
#define BBCEGAOODPK_LMEAHGFFMIB_OFFSET UNITYSDK_OFFSET(0x15E82C60)

	class BBCEGAOODPK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCEGAOODPK_CTOR_OFFSET))(this);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBCEGAOODPK_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void LMEAHGFFMIB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBCEGAOODPK_LMEAHGFFMIB_OFFSET))();
		}

	};
