#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class JsonEnum; }

#define NIJPAIBNCJG_CCTOR_OFFSET UNITYSDK_OFFSET(0xBBEDC90)

	class NIJPAIBNCJG : public ::System::Object
	{
	public:
		static ::RPG::GameCore::JsonEnum** StaticGet_JMKIHPJPPMI()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NIJPAIBNCJG")->GetStaticField(0x3F690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIJPAIBNCJG_CCTOR_OFFSET))();
		}

	};
