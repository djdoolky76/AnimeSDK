#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18D91720)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18D91760)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__TRIGGERIDLESHOW_B__34_0_OFFSET UNITYSDK_OFFSET(0x18D91770)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c_TypeDefinitionIndex = 71418;

	class PhotoGraphUtils___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__34_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2F540);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2F548);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C_CTOR_OFFSET))(this);
		}

		::System::Void _TriggerIdleShow_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__TRIGGERIDLESHOW_B__34_0_OFFSET))(this);
		}

	};
}
