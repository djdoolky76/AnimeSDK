#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"
namespace System { class String; }

#define MIGOHEFGMLH_CTOR_OFFSET UNITYSDK_OFFSET(0xB958BA0)
#define MIGOHEFGMLH_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB958B50)

	class MIGOHEFGMLH : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGOHEFGMLH_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGOHEFGMLH_TOSTRING_OFFSET))(this);
		}

	};
