#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCCCA850)
#define RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCCCA890)

namespace RPG::Client::DirectDeliveryNotice
{
	inline static constexpr unsigned int ActivityAvatarInfoControl___c_TypeDefinitionIndex = 81238;

	class ActivityAvatarInfoControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.DirectDeliveryNotice", "<>c")->GetStaticField(0x2EFC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL___C_CTOR_OFFSET))(this);
		}

	};
}
