#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC714D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC71510)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplaySelectPanelControl___c_TypeDefinitionIndex = 84104;

	class ChenLingFesGameplaySelectPanelControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChenLingFes", "<>c")->GetStaticField(0x72A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C_CTOR_OFFSET))(this);
		}

	};
}
