#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27BDE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27BE20)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameBuffRewardWindow___c_TypeDefinitionIndex = 84123;

	class ChenLingFesGameBuffRewardWindow___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChenLingFes", "<>c")->GetStaticField(0x725D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW___C_CTOR_OFFSET))(this);
		}

	};
}
