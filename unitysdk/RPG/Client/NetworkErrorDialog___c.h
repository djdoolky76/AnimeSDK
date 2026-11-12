#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_NETWORKERRORDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE4123F0)
#define RPG_CLIENT_NETWORKERRORDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE412430)
#define RPG_CLIENT_NETWORKERRORDIALOG___C__SHOWNETWORKERROR_B__0_0_OFFSET UNITYSDK_OFFSET(0xE412440)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkErrorDialog___c_TypeDefinitionIndex = 74803;

	class NetworkErrorDialog___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE420);
		}

		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowNetworkError_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG___C__SHOWNETWORKERROR_B__0_0_OFFSET))(this);
		}

	};
}
