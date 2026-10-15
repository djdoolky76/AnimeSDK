#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLESTATE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD134BD0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLESTATE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD134C10)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLESTATE___C__ONEVENT_B__2_0_OFFSET UNITYSDK_OFFSET(0xD134C20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_BattleState___c_TypeDefinitionIndex = 64599;

	class GridFightFlowDirector_BattleState___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6BC30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6BC38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLESTATE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLESTATE___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnEvent_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLESTATE___C__ONEVENT_B__2_0_OFFSET))(this);
		}

	};
}
