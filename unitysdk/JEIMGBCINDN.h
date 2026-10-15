#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EInflateIntent.h"
#include "unitysdk/System/Object.h"

#define JEIMGBCINDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1662CEE0)
#define JEIMGBCINDN_GFKBECOKJGJ_OFFSET UNITYSDK_OFFSET(0x1662CEA0)
#define JEIMGBCINDN_KHKDHMEPCOD_OFFSET UNITYSDK_OFFSET(0x1662CE60)
#define JEIMGBCINDN_MBOMDOAMNHP_OFFSET UNITYSDK_OFFSET(0x1662CE20)

	class JEIMGBCINDN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIMGBCINDN_CTOR_OFFSET))(this);
		}

		::RPG::Client::EInflateIntent MBOMDOAMNHP()
		{
			return ((::RPG::Client::EInflateIntent(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIMGBCINDN_MBOMDOAMNHP_OFFSET))(this);
		}

		::System::Boolean KHKDHMEPCOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIMGBCINDN_KHKDHMEPCOD_OFFSET))(this);
		}

		::System::Boolean GFKBECOKJGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIMGBCINDN_GFKBECOKJGJ_OFFSET))(this);
		}

	};
