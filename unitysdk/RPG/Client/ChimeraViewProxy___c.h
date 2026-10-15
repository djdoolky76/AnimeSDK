#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_CHIMERAVIEWPROXY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCB60B90)
#define RPG_CLIENT_CHIMERAVIEWPROXY___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCB60BD0)
#define RPG_CLIENT_CHIMERAVIEWPROXY___C__POSTEVENT_B__4_0_OFFSET UNITYSDK_OFFSET(0xCB60BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraViewProxy___c_TypeDefinitionIndex = 68651;

	class ChimeraViewProxy___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x144D0);
		}

		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x144D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAVIEWPROXY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAVIEWPROXY___C_CTOR_OFFSET))(this);
		}

		::System::Void _PostEvent_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAVIEWPROXY___C__POSTEVENT_B__4_0_OFFSET))(this);
		}

	};
}
