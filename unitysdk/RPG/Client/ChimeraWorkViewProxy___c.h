#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_CHIMERAWORKVIEWPROXY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD4D1AD0)
#define RPG_CLIENT_CHIMERAWORKVIEWPROXY___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD4D1B10)
#define RPG_CLIENT_CHIMERAWORKVIEWPROXY___C__POSTEVENT_B__2_0_OFFSET UNITYSDK_OFFSET(0xD4D1B20)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkViewProxy___c_TypeDefinitionIndex = 70605;

	class ChimeraWorkViewProxy___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x15720);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x15728);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKVIEWPROXY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKVIEWPROXY___C_CTOR_OFFSET))(this);
		}

		::System::Void _PostEvent_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKVIEWPROXY___C__POSTEVENT_B__2_0_OFFSET))(this);
		}

	};
}
