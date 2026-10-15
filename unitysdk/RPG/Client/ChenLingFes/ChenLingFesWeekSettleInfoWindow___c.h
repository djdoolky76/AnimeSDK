#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCACC5D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCACC610)

namespace RPG::Client::ChenLingFes
{
	class ChenLingFesWeekSettleInfoWindow___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChenLingFes", "<>c")->GetStaticField(0x6F120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW___C_CTOR_OFFSET))(this);
		}

	};
}
