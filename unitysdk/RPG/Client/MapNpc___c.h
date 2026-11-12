#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_MAPNPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFA6820)
#define RPG_CLIENT_MAPNPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDFA6860)
#define RPG_CLIENT_MAPNPC___C__BEGINFADEIN_B__7_0_OFFSET UNITYSDK_OFFSET(0xDFA6870)

namespace RPG::Client
{
	inline static constexpr unsigned int MapNpc___c_TypeDefinitionIndex = 62259;

	class MapNpc___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58830);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC___C_CTOR_OFFSET))(this);
		}

		::System::Void _BeginFadein_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC___C__BEGINFADEIN_B__7_0_OFFSET))(this);
		}

	};
}
