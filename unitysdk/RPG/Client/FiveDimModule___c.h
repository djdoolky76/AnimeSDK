#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_FIVEDIMMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD9B9370)
#define RPG_CLIENT_FIVEDIMMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD9B93A0)
#define RPG_CLIENT_FIVEDIMMODULE___C__ONENTERGAME_B__169_0_OFFSET UNITYSDK_OFFSET(0xD9B93B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimModule___c_TypeDefinitionIndex = 65656;

	class FiveDimModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__169_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68A50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68A58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnEnterGame_b__169_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C__ONENTERGAME_B__169_0_OFFSET))(this);
		}

	};
}
