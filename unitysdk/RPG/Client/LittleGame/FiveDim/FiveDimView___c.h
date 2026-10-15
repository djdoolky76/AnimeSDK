#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::FiveDim { class FiveDimView; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD456190)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD4561C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C___INITTRANSFORMCHANGECALLBACK_B__98_0_OFFSET UNITYSDK_OFFSET(0xD4561D0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimView___c_TypeDefinitionIndex = 77194;

	class FiveDimView___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x32BC0);
		}

		static ::System::Action_1<::RPG::Client::LittleGame::FiveDim::FiveDimView*>** StaticGet___9__98_0()
		{
			return (::System::Action_1<::RPG::Client::LittleGame::FiveDim::FiveDimView*>**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x32BC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C_CTOR_OFFSET))(this);
		}

		::System::Void __InitTransformChangeCallback_b__98_0(::RPG::Client::LittleGame::FiveDim::FiveDimView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C___INITTRANSFORMCHANGECALLBACK_B__98_0_OFFSET))(this, a1);
		}

	};
}
