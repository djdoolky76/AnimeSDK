#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDE2B00)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDDE2B40)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C___CONFIRMCLICKINTERNAL_B__78_0_OFFSET UNITYSDK_OFFSET(0xDDE2B50)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleBoard___c_TypeDefinitionIndex = 78926;

	class WormCompassPuzzleBoard___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x53C10);
		}

		static ::System::Action** StaticGet___9__78_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x53C18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C_CTOR_OFFSET))(this);
		}

		::System::Void __ConfirmClickInternal_b__78_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C___CONFIRMCLICKINTERNAL_B__78_0_OFFSET))(this);
		}

	};
}
