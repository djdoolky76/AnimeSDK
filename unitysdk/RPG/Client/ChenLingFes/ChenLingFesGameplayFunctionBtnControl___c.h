#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD3F4C90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD3F4CD0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayFunctionBtnControl___c_TypeDefinitionIndex = 84093;

	class ChenLingFesGameplayFunctionBtnControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChenLingFes", "<>c")->GetStaticField(0x699B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL___C_CTOR_OFFSET))(this);
		}

	};
}
